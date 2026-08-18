#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class SettingsFlyoutGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackClickEventSourceNoRef@SettingsFlyoutGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIBackClickEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIBackClickEventArgs@2345@@2@@Z
    long GetBackClickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SettingsFlyoutGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@SettingsFlyoutGenerated@DirectUI@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@SettingsFlyoutGenerated@DirectUI@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowIndependent@SettingsFlyoutGenerated@DirectUI@@UEAAJXZ
    virtual long ShowIndependent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackClick@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAUIBackClickEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_BackClick(::Windows::UI::Xaml::Controls::IBackClickEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderBackground@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_HeaderBackground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderForeground@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_HeaderForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IconSource@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long get_IconSource(::Windows::UI::Xaml::Media::IImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAPEAUISettingsFlyoutTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderBackground@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_HeaderBackground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderForeground@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_HeaderForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IconSource@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long put_IconSource(::Windows::UI::Xaml::Media::IImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@SettingsFlyoutGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackClick@SettingsFlyoutGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackClick(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SettingsFlyoutGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@SettingsFlyoutGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@SettingsFlyoutGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SettingsFlyoutGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SettingsFlyoutGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SettingsFlyoutGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
