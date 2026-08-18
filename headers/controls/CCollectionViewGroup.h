#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CCollectionViewGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCollectionViewGroup@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCollectionViewGroup@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CCollectionViewGroup@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
