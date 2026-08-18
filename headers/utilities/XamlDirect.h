#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 48 member(s).
namespace DirectUI {
class XamlDirect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventHandler_HandledEventsTooImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlEventIndex@45678@PEAUIInspectable@@E@Z
    long AddEventHandler_HandledEventsTooImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCollectionImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@0@Z
    long AddToCollectionImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, ::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@@Z
    long ClearPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@XamlDirect@DirectUI@@QEAAJW4XamlTypeIndex@Direct@Core@Xaml@UI@Windows@@PEAPEAUIXamlDirectObject@45678@@Z
    long CreateInstanceImpl(int, ::Windows::UI::Xaml::Core::Direct::IXamlDirectObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@PEAI@Z
    long GetEnumPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GetObjectImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@PEAPEAUIInspectable@@@Z
    long GetObjectPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlDirectObjectPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@PEAPEAU345678@@Z
    long GetXamlDirectObjectPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, ::Windows::UI::Xaml::Core::Direct::IXamlDirectObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertIntoCollectionAtImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@I0@Z
    long InsertIntoCollectionAtImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, unsigned int, ::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventHandlerImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlEventIndex@45678@PEAUIInspectable@@@Z
    long RemoveEventHandlerImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromCollectionImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@0PEAE@Z
    long RemoveFromCollectionImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, ::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnumPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@I@Z
    long SetEnumPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObjectPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@PEAUIInspectable@@@Z
    long SetObjectPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetXamlDirectObjectPropertyImpl@XamlDirect@DirectUI@@QEAAJPEAUIXamlDirectObject@Direct@Core@Xaml@UI@Windows@@W4XamlPropertyIndex@45678@0@Z
    long SetXamlDirectObjectPropertyImpl(::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *, int, ::Windows::UI::Xaml::Core::Direct::IXamlDirectObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckNeedsPeer@XamlDirect@DirectUI@@AEAAJPEAVCDependencyObject@@PEBVCDependencyProperty@@@Z
    long CheckNeedsPeer(CDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPropertyIndex@XamlDirect@DirectUI@@AEAAXW4XamlPropertyIndex@Direct@Core@Xaml@UI@Windows@@@Z
    void CheckPropertyIndex(int);
};
} // namespace DirectUI
