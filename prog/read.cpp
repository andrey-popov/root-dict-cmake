#include <Point.hpp>

#include <TFile.h>
#include <TTree.h>

#include <iostream>
#include <vector>


int main()
{
    TFile inputFile("points.root");
    TTree *tree = dynamic_cast<TTree *>(inputFile.Get("Tree"));
    
    std::vector<Point> *points = nullptr;
    tree->SetBranchAddress("points", &points);
    
    for (int entry = 0; entry < tree->GetEntries(); ++entry)
    {
        tree->GetEntry(entry);
        
        std::cout << "Entry #" << entry << ":";
        
        for (auto const &p: *points)
            std::cout << " (" << p.x << ", " << p.y << ")";
        
        std::cout << std::endl;
    }
    
    inputFile.Close();
    
    return EXIT_SUCCESS;
}
