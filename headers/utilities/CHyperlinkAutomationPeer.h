#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CHyperlinkAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHyperlinkAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPParent@CHyperlinkAutomationPeer@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAPParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CHyperlinkAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CHyperlinkAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
