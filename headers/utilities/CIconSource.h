#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CIconSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CIconSource@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CIconSource@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIconSource@@IEAA@PEAVCCoreServices@@@Z
    CIconSource(CCoreServices *);
};
