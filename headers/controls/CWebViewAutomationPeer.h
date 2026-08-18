#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CWebViewAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebViewAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteropHwnd@CWebViewAutomationPeer@@UEAAPEAXXZ
    virtual void * GetInteropHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CWebViewAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowlessRawElementProviderSimple@CWebViewAutomationPeer@@UEAAPEAXXZ
    virtual void * GetWindowlessRawElementProviderSimple();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindowlessElementFromPointProvider@CWebViewAutomationPeer@@UEAAIXZ
    virtual unsigned int IsHostedWindowlessElementFromPointProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindowlessElementProvider@CWebViewAutomationPeer@@UEAAIXZ
    virtual unsigned int IsHostedWindowlessElementProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteropPeer@CWebViewAutomationPeer@@UEAAIXZ
    virtual unsigned int IsInteropPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffscreenHelper@CWebViewAutomationPeer@@UEAAJ_NPEAE@Z
    virtual long IsOffscreenHelper(bool, unsigned char *);
};
