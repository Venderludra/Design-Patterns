#ifndef VECTOROFDOUBLES_H
#define VECTOROFDOUBLES_H
#include "SteppingTool.h"
#include <iostream>
#include <vector>

class VectorOfDoubles{
    public:
        VectorOfDoubles();
        ~VectorOfDoubles();
        SteppingTool* createSteppingTool();
        void addItem(double);
        void removeItem();
        bool isEmpty();

    private:
        std::vector<double> list;
};


#endif