#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class AppBarButtonAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratorKeyCore@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAcceleratorKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@AppBarButtonAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableCore@AppBarButtonAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@AppBarButtonAutomationPeer@DirectUI@@QEAAJE@Z
    long RaiseExpandCollapseAutomationEvent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseStateImpl@AppBarButtonAutomationPeer@DirectUI@@QEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    long get_ExpandCollapseStateImpl(int *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningAppBarButton@AppBarButtonAutomationPeer@DirectUI@@AEAAJPEAPEAVAppBarButton@2@@Z
    long GetOwningAppBarButton(::DirectUI::AppBarButton * *);
};
} // namespace DirectUI
