#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ProgressRing {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ProgressRing@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ProgressRing@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ProgressRing@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ProgressRing@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ProgressRing@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ProgressRing@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ProgressRing@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProgressRing@DirectUI@@MEAA@XZ
    virtual ~ProgressRing();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressRingProperties@ProgressRing@DirectUI@@AEAAJXZ
    long SetProgressRingProperties();
};
} // namespace DirectUI
