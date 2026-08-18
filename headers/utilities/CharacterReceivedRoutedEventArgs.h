#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class CharacterReceivedRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Character@CharacterReceivedRoutedEventArgs@DirectUI@@UEAAJPEAG@Z
    virtual long get_Character(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CharacterReceivedRoutedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatus@CharacterReceivedRoutedEventArgs@DirectUI@@UEAAJPEAUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    virtual long get_KeyStatus(::Windows::UI::Core::CorePhysicalKeyStatus *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CharacterReceivedRoutedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CharacterReceivedRoutedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CharacterReceivedRoutedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CharacterReceivedRoutedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CharacterReceivedRoutedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatusImpl@CharacterReceivedRoutedEventArgs@DirectUI@@AEAAJPEAUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    long get_KeyStatusImpl(::Windows::UI::Core::CorePhysicalKeyStatus *);
};
} // namespace DirectUI
