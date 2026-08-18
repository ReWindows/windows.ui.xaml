#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CBitmapCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapCache@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheModeType@CBitmapCache@@UEAA?AW4CacheModeType@@XZ
    virtual int GetCacheModeType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBitmapCache@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};
