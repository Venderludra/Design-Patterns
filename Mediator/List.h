#ifndef LIST_H
#define LIST_H
#include "Widget.h"
#include "FileSelectionDialog.h"

class List : public Widget{
    public:
        List(FileSelectionDialog* , std::string);
        void queryWidget() override;
        void updateWidget() override;
};

#endif