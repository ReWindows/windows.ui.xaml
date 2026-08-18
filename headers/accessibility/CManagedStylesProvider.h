#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CManagedStylesProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedStylesProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedStylesProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@CManagedStylesProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_ExtendedProperties(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillColor@CManagedStylesProvider@@UEAAJPEAH@Z
    virtual long get_FillColor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillPatternColor@CManagedStylesProvider@@UEAAJPEAH@Z
    virtual long get_FillPatternColor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillPatternStyle@CManagedStylesProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_FillPatternStyle(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shape@CManagedStylesProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_Shape(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StyleId@CManagedStylesProvider@@UEAAJPEAH@Z
    virtual long get_StyleId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StyleName@CManagedStylesProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_StyleName(xstring_ptr *);
};
