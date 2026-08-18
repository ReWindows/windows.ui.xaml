#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CManagedScrollProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedScrollProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedScrollProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@CManagedScrollProvider@@UEAAJW4ScrollAmount@UIAXcp@@0@Z
    virtual long Scroll(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercent@CManagedScrollProvider@@UEAAJMM@Z
    virtual long SetScrollPercent(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercent@CManagedScrollProvider@@UEAAJPEAN@Z
    virtual long get_HorizontalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSize@CManagedScrollProvider@@UEAAJPEAN@Z
    virtual long get_HorizontalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollable@CManagedScrollProvider@@UEAAJPEAH@Z
    virtual long get_HorizontallyScrollable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercent@CManagedScrollProvider@@UEAAJPEAN@Z
    virtual long get_VerticalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSize@CManagedScrollProvider@@UEAAJPEAN@Z
    virtual long get_VerticalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollable@CManagedScrollProvider@@UEAAJPEAH@Z
    virtual long get_VerticallyScrollable(int *);
};
