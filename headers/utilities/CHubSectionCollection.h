#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CHubSectionCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CHubSectionCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldKeepPeerReference@CHubSectionCollection@@MEAAIXZ
    virtual unsigned int ShouldKeepPeerReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CHubSectionCollection@@MEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
};
