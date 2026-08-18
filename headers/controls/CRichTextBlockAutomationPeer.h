#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CRichTextBlockAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRichTextBlockAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRichTextBlockAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocusHelper@CRichTextBlockAutomationPeer@@UEAAJPEAE@Z
    virtual long HasKeyboardFocusHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableHelper@CRichTextBlockAutomationPeer@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableHelper(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CRichTextBlockAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
