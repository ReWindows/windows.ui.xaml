#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DesktopWindowXamlSourceGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@DesktopWindowXamlSourceGenerated@DirectUI@@QEAAJPEAUIXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@@PEAPEAUIXamlSourceFocusNavigationResult@4567@@Z
    long NavigateFocus(::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest *, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@DesktopWindowXamlSourceGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@@PEAVDesktopWindowXamlSourceGotFocusEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_GotFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TakeFocusRequested@DesktopWindowXamlSourceGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@@PEAVDesktopWindowXamlSourceTakeFocusRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TakeFocusRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@DesktopWindowXamlSourceGenerated@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_Content(::Windows::UI::Xaml::IUIElement * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DesktopWindowXamlSourceGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DesktopWindowXamlSourceGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DesktopWindowXamlSourceGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddPreValidation@DesktopWindowXamlSourceGenerated@DirectUI@@AEBAJQEAXQEAUEventRegistrationToken@@@Z
    long EventAddPreValidation(void * const, EventRegistrationToken * const) const;
};
} // namespace DirectUI
