#ifndef DIALOG_H
#define DIALOG_H

#include "Widget.h"
#include <vector>
#include <iostream>

class Dialog{
    public:
        virtual void handleEvent(int) = 0;
        virtual void widgetChanged(Widget*) = 0;

    protected:
        std::vector<Widget*> component;
};

#endif