#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class AccessKeyManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterDisplayMode@AccessKeyManagerFactory@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long EnterDisplayMode(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitDisplayMode@AccessKeyManagerFactory@DirectUI@@UEAAJXZ
    virtual long ExitDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsDisplayModeEnabledChanged@AccessKeyManagerFactory@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_IsDisplayModeEnabledChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreKeyTipsEnabled@AccessKeyManagerFactory@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreKeyTipsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisplayModeEnabled@AccessKeyManagerFactory@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDisplayModeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreKeyTipsEnabled@AccessKeyManagerFactory@DirectUI@@UEAAJE@Z
    virtual long put_AreKeyTipsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsDisplayModeEnabledChanged@AccessKeyManagerFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsDisplayModeEnabledChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AccessKeyManagerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AccessKeyManagerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AccessKeyManagerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterDisplayModeImpl@AccessKeyManagerFactory@DirectUI@@AEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    long EnterDisplayModeImpl(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitDisplayModeImpl@AccessKeyManagerFactory@DirectUI@@AEAAJXZ
    long ExitDisplayModeImpl();
};
} // namespace DirectUI
