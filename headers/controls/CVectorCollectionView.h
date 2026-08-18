#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CVectorCollectionView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVectorCollectionView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CVectorCollectionView@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVectorCollectionView@@IEAA@PEAVCCoreServices@@@Z
    CVectorCollectionView(CCoreServices *);
};
