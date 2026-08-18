#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CFrameworkElementAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFrameworkElementAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPParent@CFrameworkElementAutomationPeer@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAPParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCultureHelper@CFrameworkElementAutomationPeer@@UEAAJPEAH@Z
    virtual long GetCultureHelper(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootChildrenCore@CFrameworkElementAutomationPeer@@UEAAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual int GetRootChildrenCore(CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFrameworkElementAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocusHelper@CFrameworkElementAutomationPeer@@UEAAJPEAE@Z
    virtual long HasKeyboardFocusHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledHelper@CFrameworkElementAutomationPeer@@UEAAJPEAE@Z
    virtual long IsEnabledHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableHelper@CFrameworkElementAutomationPeer@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffscreenHelper@CFrameworkElementAutomationPeer@@UEAAJ_NPEAE@Z
    virtual long IsOffscreenHelper(bool, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusHelper@CFrameworkElementAutomationPeer@@UEAAJXZ
    virtual long SetFocusHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuHelper@CFrameworkElementAutomationPeer@@UEAAJXZ
    virtual long ShowContextMenuHelper();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameworkElementAutomationPeer@@IEAA@PEAVCCoreServices@@AEAVCValue@@@Z
    CFrameworkElementAutomationPeer(CCoreServices *, CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledForFocus@CFrameworkElementAutomationPeer@@IEAAJPEAE@Z
    long IsEnabledForFocus(unsigned char *);
};
