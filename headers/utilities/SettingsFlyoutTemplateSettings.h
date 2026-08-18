#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class SettingsFlyoutTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SettingsFlyoutTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderBrush@SettingsFlyoutTemplateSettings@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_BorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderThickness@SettingsFlyoutTemplateSettings@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_BorderThickness(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentTransitions@SettingsFlyoutTemplateSettings@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ContentTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderBackground@SettingsFlyoutTemplateSettings@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_HeaderBackground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderForeground@SettingsFlyoutTemplateSettings@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_HeaderForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IconSource@SettingsFlyoutTemplateSettings@DirectUI@@UEAAJPEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long get_IconSource(::Windows::UI::Xaml::Media::IImageSource * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SettingsFlyoutTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SettingsFlyoutTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SettingsFlyoutTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SettingsFlyoutTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
