#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDependencyObjectWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDependencyObjectWrapper@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDependencyObjectWrapper@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWrappedDO@CDependencyObjectWrapper@@QEAAJPEAVCDependencyObject@@@Z
    long SetWrappedDO(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDependencyObjectWrapper@@UEAA@XZ
    virtual ~CDependencyObjectWrapper();
};
