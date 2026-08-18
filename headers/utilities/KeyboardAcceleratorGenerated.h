#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class KeyboardAcceleratorGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvokedEventSourceNoRef@KeyboardAcceleratorGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVKeyboardAccelerator@Input@Xaml@UI@Windows@@PEAVKeyboardAcceleratorInvokedEventArgs@2345@@Foundation@Windows@@UIKeyboardAccelerator@Input@Xaml@UI@3@UIKeyboardAcceleratorInvokedEventArgs@5673@@2@@Z
    long GetInvokedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@KeyboardAcceleratorGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Invoked@KeyboardAcceleratorGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardAccelerator@Input@Xaml@UI@Windows@@PEAVKeyboardAcceleratorInvokedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Invoked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@KeyboardAcceleratorGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Key@KeyboardAcceleratorGenerated@DirectUI@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_Key(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modifiers@KeyboardAcceleratorGenerated@DirectUI@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_Modifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeOwner@KeyboardAcceleratorGenerated@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_ScopeOwner(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsEnabled@KeyboardAcceleratorGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Key@KeyboardAcceleratorGenerated@DirectUI@@UEAAJW4VirtualKey@System@Windows@@@Z
    virtual long put_Key(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Modifiers@KeyboardAcceleratorGenerated@DirectUI@@UEAAJW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long put_Modifiers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScopeOwner@KeyboardAcceleratorGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long put_ScopeOwner(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Invoked@KeyboardAcceleratorGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Invoked(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@KeyboardAcceleratorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@KeyboardAcceleratorGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@KeyboardAcceleratorGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@KeyboardAcceleratorGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
