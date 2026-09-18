#ifndef WIDGET_H
#define WIDGET_H

#include "Dialog.h"
#include <string>

class Widget{
    public:
        Widget(Dialog*,string);
        void changed();
        virtual void updateWidget() = 0;
        virtual void queryWidget() =0;

    protected:
        std::string name;

    private:
        Dialog* mediator;
};

#endif