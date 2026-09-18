#ifndef EDIT_H
#define EDIT_H

#include "Widget.h"
#include "FileSelectionDialog.h"

class Edit : public Widget{
    public:
        Edit(FileSelectionDialog* , std::string);
        void queryWidget() override;
        void updateWidget() override;
};

#endif