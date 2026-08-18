#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CCollectionView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCollectionView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CCollectionView@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCollectionView@@IEAA@PEAVCCoreServices@@@Z
    CCollectionView(CCoreServices *);
};
