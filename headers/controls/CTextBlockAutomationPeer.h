#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CTextBlockAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextBlockAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextBlockAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocusHelper@CTextBlockAutomationPeer@@UEAAJPEAE@Z
    virtual long HasKeyboardFocusHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableHelper@CTextBlockAutomationPeer@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableHelper(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CTextBlockAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
