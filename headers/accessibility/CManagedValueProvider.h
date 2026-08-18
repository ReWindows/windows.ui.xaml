#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedValueProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedValueProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedValueProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CManagedValueProvider@@UEAAJAEBVxstring_ptr@@@Z
    virtual long SetValue(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CManagedValueProvider@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CManagedValueProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_Value(xstring_ptr *);
};
