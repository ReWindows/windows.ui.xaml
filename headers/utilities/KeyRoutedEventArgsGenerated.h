#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class KeyRoutedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@KeyRoutedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@KeyRoutedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Key@KeyRoutedEventArgsGenerated@DirectUI@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_Key(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatus@KeyRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    virtual long get_KeyStatus(::Windows::UI::Core::CorePhysicalKeyStatus *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginalKey@KeyRoutedEventArgsGenerated@DirectUI@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_OriginalKey(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@KeyRoutedEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@KeyRoutedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@KeyRoutedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@KeyRoutedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@KeyRoutedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
