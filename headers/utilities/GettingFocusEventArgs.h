#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace DirectUI {
class GettingFocusEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancel@GettingFocusEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long TryCancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetNewFocusedElement@GettingFocusEventArgs@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long TrySetNewFocusedElement(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@GettingFocusEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CorrelationId@GettingFocusEventArgs@DirectUI@@UEAAJPEAU_GUID@@@Z
    virtual long get_CorrelationId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@GettingFocusEventArgs@DirectUI@@UEAAJPEAW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long get_Direction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FocusState@GettingFocusEventArgs@DirectUI@@UEAAJPEAW4FocusState@Xaml@UI@Windows@@@Z
    virtual long get_FocusState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@GettingFocusEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputDevice@GettingFocusEventArgs@DirectUI@@UEAAJPEAW4FocusInputDeviceKind@Input@Xaml@UI@Windows@@@Z
    virtual long get_InputDevice(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewFocusedElement@GettingFocusEventArgs@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_NewFocusedElement(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldFocusedElement@GettingFocusEventArgs@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_OldFocusedElement(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@GettingFocusEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@GettingFocusEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewFocusedElement@GettingFocusEventArgs@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long put_NewFocusedElement(::Windows::UI::Xaml::IDependencyObject *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GettingFocusEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GettingFocusEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GettingFocusEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GettingFocusEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancelImpl@GettingFocusEventArgs@DirectUI@@AEAAJPEAE@Z
    long TryCancelImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetNewFocusedElementImpl@GettingFocusEventArgs@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    long TrySetNewFocusedElementImpl(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
};
} // namespace DirectUI
