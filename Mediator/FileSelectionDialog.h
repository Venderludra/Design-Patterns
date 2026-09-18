#ifndef FILESELECTIONDIALOG_H
#define FILESELECTIONDIALOG_H
#include "Dialog.h"

class FileSelectionDialog : public Dialog{
    public:
        FileSelectionDialog();
        ~FileSelectionDialog();
        void handleEvent(int);
        void widgetChanged(Widget*);
};

#endif