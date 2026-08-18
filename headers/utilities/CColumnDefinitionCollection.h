#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CColumnDefinitionCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColumnDefinitionCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CColumnDefinitionCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsOwnerInfo@CColumnDefinitionCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
};
