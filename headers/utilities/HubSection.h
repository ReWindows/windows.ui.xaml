#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class HubSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@HubSection@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusHeaderButton@HubSection@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    long FocusHeaderButton(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentHub@HubSection@DirectUI@@QEAAJPEAPEAVHub@2@@Z
    long GetParentHub(::DirectUI::Hub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWrappingTransformPart@HubSection@DirectUI@@QEAAJPEAPEAUICompositeTransform@Media@Xaml@UI@Windows@@@Z
    long GetWrappingTransformPart(::Windows::UI::Xaml::Media::ICompositeTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshHubHeaderPlaceholderHeight@HubSection@DirectUI@@QEAAJXZ
    long RefreshHubHeaderPlaceholderHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStickyHeader@HubSection@DirectUI@@QEAAJXZ
    long RemoveStickyHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetStickyHeader@HubSection@DirectUI@@QEAAJXZ
    long ResetStickyHeader();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentHub@HubSection@DirectUI@@QEAAJPEAVHub@2@@Z
    long SetParentHub(::DirectUI::Hub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocusOnLoaded@HubSection@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@E@Z
    long TakeFocusOnLoaded(int, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HubSection@DirectUI@@UEAA@XZ
    virtual ~HubSection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HubSection@DirectUI@@IEAA@XZ
    HubSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HubSection@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@HubSection@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@HubSection@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@HubSection@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderButtonClick@HubSection@DirectUI@@AEAAJXZ
    long OnHeaderButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderButtonKeyDown@HubSection@DirectUI@@AEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnHeaderButtonKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderChanged@HubSection@DirectUI@@AEAAJXZ
    long OnHeaderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderSeeMoreButtonClick@HubSection@DirectUI@@AEAAJXZ
    long OnHeaderSeeMoreButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderTapped@HubSection@DirectUI@@AEAAJXZ
    long OnHeaderTapped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocus@HubSection@DirectUI@@AEAAJW4FocusState@Xaml@UI@Windows@@E@Z
    long TakeFocus(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderButtonStyle@HubSection@DirectUI@@AEAAJXZ
    long UpdateHeaderButtonStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@HubSection@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
};
} // namespace DirectUI
