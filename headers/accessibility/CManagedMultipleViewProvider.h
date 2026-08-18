#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CManagedMultipleViewProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedMultipleViewProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedMultipleViewProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedViews@CManagedMultipleViewProvider@@UEAAJPEAIPEAPEAH@Z
    virtual long GetSupportedViews(unsigned int *, int * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewName@CManagedMultipleViewProvider@@UEAAJHPEAVxstring_ptr@@@Z
    virtual long GetViewName(int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentView@CManagedMultipleViewProvider@@UEAAJH@Z
    virtual long SetCurrentView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentView@CManagedMultipleViewProvider@@UEAAJPEAH@Z
    virtual long get_CurrentView(int *);
};
