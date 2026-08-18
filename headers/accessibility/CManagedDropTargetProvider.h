#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedDropTargetProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedDropTargetProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedDropTargetProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetEffect@CManagedDropTargetProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_DropTargetEffect(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetEffects@CManagedDropTargetProvider@@UEAAJPEAHPEAPEAVxstring_ptr@@@Z
    virtual long get_DropTargetEffects(int *, xstring_ptr * *);
};
