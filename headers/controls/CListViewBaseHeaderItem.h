#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CListViewBaseHeaderItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CListViewBaseHeaderItem@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CListViewBaseHeaderItem@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CListViewBaseHeaderItem@@IEAA@PEAVCCoreServices@@@Z
    CListViewBaseHeaderItem(CCoreServices *);
};
