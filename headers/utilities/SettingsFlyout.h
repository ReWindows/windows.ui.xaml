#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class SettingsFlyout {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@SettingsFlyout@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideImpl@SettingsFlyout@DirectUI@@QEAAJXZ
    long HideImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowImpl@SettingsFlyout@DirectUI@@QEAAJXZ
    long ShowImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowIndependentImpl@SettingsFlyout@DirectUI@@QEAAJXZ
    long ShowIndependentImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SettingsFlyout@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@SettingsFlyout@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@SettingsFlyout@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@SettingsFlyout@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@SettingsFlyout@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsFlyout@DirectUI@@IEAA@XZ
    SettingsFlyout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsFlyout@DirectUI@@MEAA@XZ
    virtual ~SettingsFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfAlreadyOpen@SettingsFlyout@DirectUI@@AEAAJPEAE@Z
    long CheckIfAlreadyOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupTemplateParts@SettingsFlyout@DirectUI@@AEAAJXZ
    long CleanupTemplateParts();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsEdgeLocation@SettingsFlyout@DirectUI@@AEAAJPEAE@Z
    long GetSettingsEdgeLocation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonClick@SettingsFlyout@DirectUI@@AEAAJXZ
    long OnBackButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@SettingsFlyout@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@SettingsFlyout@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePopup@SettingsFlyout@DirectUI@@AEAAJXZ
    long PreparePopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecalculateTemplateSettings@SettingsFlyout@DirectUI@@AEAAJXZ
    long RecalculateTemplateSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBackButtonRTLState@SettingsFlyout@DirectUI@@AEAAJXZ
    long RefreshBackButtonRTLState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshPopupPositionAndSize@SettingsFlyout@DirectUI@@AEAAJXZ
    long RefreshPopupPositionAndSize();
};
} // namespace DirectUI
