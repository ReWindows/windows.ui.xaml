#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class KeyboardAcceleratorInvokedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Element@KeyboardAcceleratorInvokedEventArgs@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_Element(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@KeyboardAcceleratorInvokedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAccelerator@KeyboardAcceleratorInvokedEventArgs@DirectUI@@UEAAJPEAPEAUIKeyboardAccelerator@Input@Xaml@UI@Windows@@@Z
    virtual long get_KeyboardAccelerator(::Windows::UI::Xaml::Input::IKeyboardAccelerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Element@KeyboardAcceleratorInvokedEventArgs@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long put_Element(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@KeyboardAcceleratorInvokedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyboardAccelerator@KeyboardAcceleratorInvokedEventArgs@DirectUI@@QEAAJPEAUIKeyboardAccelerator@Input@Xaml@UI@Windows@@@Z
    long put_KeyboardAccelerator(::Windows::UI::Xaml::Input::IKeyboardAccelerator *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyboardAcceleratorInvokedEventArgs@DirectUI@@UEAA@XZ
    virtual ~KeyboardAcceleratorInvokedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@KeyboardAcceleratorInvokedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@KeyboardAcceleratorInvokedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@KeyboardAcceleratorInvokedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@KeyboardAcceleratorInvokedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
