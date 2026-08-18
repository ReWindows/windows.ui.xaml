#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CManagedDragProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrabbedItems@CManagedDragProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetGrabbedItems(int *, CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedDragProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedDragProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffect@CManagedDragProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_DropEffect(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffects@CManagedDragProvider@@UEAAJPEAHPEAPEAVxstring_ptr@@@Z
    virtual long get_DropEffects(int *, xstring_ptr * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGrabbed@CManagedDragProvider@@UEAAJPEAI@Z
    virtual long get_IsGrabbed(unsigned int *);
};
