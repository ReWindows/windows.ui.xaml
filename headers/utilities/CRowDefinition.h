#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CRowDefinition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRowDefinition@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRowDefinition@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CRowDefinition@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
};
