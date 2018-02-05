ROOT_GENERATE_DICTIONARY(pointDict Point.hpp LINKDEF classes.h classes_def.xml NOINSTALL)

add_library(point SHARED Point.cpp pointDict.cxx)
target_link_libraries(point ${ROOT_LIBRARIES})
