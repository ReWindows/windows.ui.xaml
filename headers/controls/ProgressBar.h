#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class ProgressBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ProgressBar@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ProgressBar@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProgressBar@DirectUI@@UEAA@XZ
    virtual ~ProgressBar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ProgressBar@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ProgressBar@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaximumChanged@ProgressBar@DirectUI@@MEAAJNN@Z
    virtual long OnMaximumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinimumChanged@ProgressBar@DirectUI@@MEAAJNN@Z
    virtual long OnMinimumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ProgressBar@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@ProgressBar@DirectUI@@MEAAJNN@Z
    virtual long OnValueChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ProgressBar@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@ProgressBar@DirectUI@@IEAAJ_N@Z
    long UpdateVisualState(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsIndeterminateChanged@ProgressBar@DirectUI@@AEAAJXZ
    long OnIsIndeterminateChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressBarIndicatorLength@ProgressBar@DirectUI@@AEAAJN@Z
    long SetProgressBarIndicatorLength(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressBarProperties@ProgressBar@DirectUI@@AEAAJUSize@Foundation@Windows@@@Z
    long SetProgressBarProperties(WindissectOpaque);
};
} // namespace DirectUI
