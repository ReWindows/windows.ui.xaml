#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class PointerRoutedEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPoint@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIPointerPoint@Input@56@@Z
    virtual long GetCurrentPoint(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Input::IPointerPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntermediatePoints@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetIntermediatePoints(::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureFollowing@PointerRoutedEventArgsGenerated@DirectUI@@QEAAJPEAW4GestureModes@2@@Z
    long get_GestureFollowing(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGenerated@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsGenerated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyModifiers@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_KeyModifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Pointer@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIPointer@Input@Xaml@UI@Windows@@@Z
    virtual long get_Pointer(::Windows::UI::Xaml::Input::IPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@PointerRoutedEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PointerRoutedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PointerRoutedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PointerRoutedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PointerRoutedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
