#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI::Components::TileGridPanel {
class TileGridElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementsOffset@TileGridElement@TileGridPanel@Components@DirectUI@@QEAA?AUPoint@Foundation@Windows@@XZ
    WindissectOpaque GetElementsOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelChildren@TileGridElement@TileGridPanel@Components@DirectUI@@QEAAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@XZ
    WindissectOpaque * GetPanelChildren();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileGridElement@TileGridPanel@Components@DirectUI@@QEAA@$$QEAV0123@@Z
    TileGridElement(::DirectUI::Components::TileGridPanel::TileGridElement &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileGridElement@TileGridPanel@Components@DirectUI@@QEAA@PEAUITileGridElement@Controls@Xaml@UI@Windows@@UEventRegistrationToken@@1@Z
    TileGridElement(::Windows::UI::Xaml::Controls::ITileGridElement *, EventRegistrationToken, EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileGridElement@TileGridPanel@Components@DirectUI@@QEAA@XZ
    ~TileGridElement();
};
} // namespace DirectUI::Components::TileGridPanel
