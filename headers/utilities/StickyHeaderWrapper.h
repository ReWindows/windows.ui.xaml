#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class StickyHeaderWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@StickyHeaderWrapper@DirectUI@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StickyHeaderWrapper@DirectUI@@QEAAJPEAVUIElement@2@PEAVPanel@2@PEAVScrollViewer@2@0PEAUISecondaryContentRelationshipStatics@Internal@Xaml@UI@Windows@@@Z
    long Initialize(::DirectUI::UIElement *, ::DirectUI::Panel *, ::DirectUI::ScrollViewer *, ::DirectUI::UIElement *, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationshipStatics *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@StickyHeaderWrapper@DirectUI@@QEAAJAEBURect@Foundation@Windows@@NNNPEA_N@Z
    long SetBounds(WindissectOpaque const &, double, double, double, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPosition@StickyHeaderWrapper@DirectUI@@QEAAJXZ
    long UpdateHeaderPosition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StickyHeaderWrapper@DirectUI@@QEAA@XZ
    ~StickyHeaderWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLTEPosition@StickyHeaderWrapper@DirectUI@@AEAAXXZ
    void UpdateLTEPosition();
};
} // namespace DirectUI
