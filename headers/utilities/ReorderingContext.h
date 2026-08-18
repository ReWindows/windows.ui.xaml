#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI::Components::TileGridPanel {
class ReorderingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfBoundsChange@ReorderingContext@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@URect@Foundation@Windows@@1_N@Z
    virtual long NotifyOfBoundsChange(WindissectOpaque &, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfClearingContainer@ReorderingContext@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual long NotifyOfClearingContainer(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfElementsChange@ReorderingContext@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@W4InternalTileGridElementsChange@234@@Z
    virtual long NotifyOfElementsChange(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessElementsChange@ReorderingContext@TileGridPanel@Components@DirectUI@@UEAAJAEAUInternalTileGridElementsChangeEventArgs@234@@Z
    virtual long PreProcessElementsChange(::DirectUI::Components::TileGridPanel::InternalTileGridElementsChangeEventArgs &);
};
} // namespace DirectUI::Components::TileGridPanel
