#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CItemsControlAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CItemsControlAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CItemsControlAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CItemsControlAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemsControlAutomationPeer@@IEAA@PEAVCCoreServices@@AEAVCValue@@@Z
    CItemsControlAutomationPeer(CCoreServices *, CValue &);
};
