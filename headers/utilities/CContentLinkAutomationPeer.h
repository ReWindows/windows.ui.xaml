#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CContentLinkAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CContentLinkAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPParent@CContentLinkAutomationPeer@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAPParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CContentLinkAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CContentLinkAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
