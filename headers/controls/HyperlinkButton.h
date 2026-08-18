#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class HyperlinkButton {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@HyperlinkButton@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HyperlinkButton@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@HyperlinkButton@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@HyperlinkButton@DirectUI@@MEAAJXZ
    virtual long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@HyperlinkButton@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@HyperlinkButton@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHyperlinkForegroundOverrideForBackPlate@HyperlinkButton@DirectUI@@AEAAJXZ
    long SetHyperlinkForegroundOverrideForBackPlate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHyperlinkForegroundOverrideForBackPlateRecursive@HyperlinkButton@DirectUI@@AEAAXPEAVCUIElement@@@Z
    void SetHyperlinkForegroundOverrideForBackPlateRecursive(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentPresenterTextUnderline@HyperlinkButton@DirectUI@@AEAAJXZ
    long UpdateContentPresenterTextUnderline();
};
} // namespace DirectUI
