#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CMenuFlyoutItemBaseCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMenuFlyoutItemBaseCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldKeepPeerReference@CMenuFlyoutItemBaseCollection@@MEAAIXZ
    virtual unsigned int ShouldKeepPeerReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CMenuFlyoutItemBaseCollection@@MEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
};
