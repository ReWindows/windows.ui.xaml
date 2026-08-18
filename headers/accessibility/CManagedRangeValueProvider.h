#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CManagedRangeValueProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedRangeValueProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedRangeValueProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CManagedRangeValueProvider@@UEAAJM@Z
    virtual long SetValue(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CManagedRangeValueProvider@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChange@CManagedRangeValueProvider@@UEAAJPEAN@Z
    virtual long get_LargeChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximum@CManagedRangeValueProvider@@UEAAJPEAN@Z
    virtual long get_Maximum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimum@CManagedRangeValueProvider@@UEAAJPEAN@Z
    virtual long get_Minimum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChange@CManagedRangeValueProvider@@UEAAJPEAN@Z
    virtual long get_SmallChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CManagedRangeValueProvider@@UEAAJPEAN@Z
    virtual long get_Value(double *);
};
