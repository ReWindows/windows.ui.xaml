#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class AppBarToggleButtonAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToToggleState@AppBarToggleButtonAutomationPeer@DirectUI@@SAJPEAUIInspectable@@PEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    static long ConvertToToggleState(IInspectable *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratorKeyCore@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAcceleratorKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableCore@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStatePropertyChangedEvent@AppBarToggleButtonAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long RaiseToggleStatePropertyChangedEvent(IInspectable *, IInspectable *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningAppBarToggleButton@AppBarToggleButtonAutomationPeer@DirectUI@@AEAAJPEAPEAVAppBarToggleButton@2@@Z
    long GetOwningAppBarToggleButton(::DirectUI::AppBarToggleButton * *);
};
} // namespace DirectUI
