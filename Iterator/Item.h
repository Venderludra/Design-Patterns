#ifndef ITEM_H
#define ITEM_H
#include <iostream>


class Item{
    public:
        Item();
        Item(double);
        Item(double,Item*);
        ~Item();
        double getValue();
        Item* getNextItem();

    private:
        double value;
        Item* nextItem;
        
};

#endif