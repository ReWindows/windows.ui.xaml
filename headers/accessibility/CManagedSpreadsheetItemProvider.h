#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedSpreadsheetItemProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotationObjects@CManagedSpreadsheetItemProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetAnnotationObjects(int *, CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotationTypes@CManagedSpreadsheetItemProvider@@UEAAJPEAHPEAPEAW4AnnotationType@UIAXcp@@@Z
    virtual long GetAnnotationTypes(int *, int * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedSpreadsheetItemProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedSpreadsheetItemProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Formula@CManagedSpreadsheetItemProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_Formula(xstring_ptr *);
};
