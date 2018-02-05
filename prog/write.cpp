#include <Point.hpp>

#include <TFile.h>
#include <TRandom3.h>
#include <TTree.h>

#include <vector>


int main()
{
    TFile outFile("points.root", "recreate");
    TTree tree("Tree", "");
    
    std::vector<Point> *points = nullptr;
    tree.Branch("points", &points);
    
    TRandom3 rGen(4217);
    
    for (unsigned i = 0; i < 10; ++i)
    {
        points->clear();
        unsigned nPoints = rGen.Integer(5);
        
        for (unsigned iPoint = 0; iPoint < nPoints; ++iPoint)
            points->emplace_back(Point{rGen.Gaus(), rGen.Gaus()});
        
        tree.Fill();
    }
    
    tree.Write();
    outFile.Close();
    
    return EXIT_SUCCESS;
}
