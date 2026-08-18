#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI::Components::TileGridPanel {
class VirtualizationStrategy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfBoundsChange@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@URect@Foundation@Windows@@1_N@Z
    virtual long NotifyOfBoundsChange(WindissectOpaque &, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfClearingContainer@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual long NotifyOfClearingContainer(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfElementsChange@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@W4InternalTileGridElementsChange@234@@Z
    virtual long NotifyOfElementsChange(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRealizationWindowChanged@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@UEAAJULinearSegment@234@@Z
    virtual long OnRealizationWindowChanged(::DirectUI::Components::TileGridPanel::LinearSegment);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessElementsChange@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@UEAAJAEAUInternalTileGridElementsChangeEventArgs@234@@Z
    virtual long PreProcessElementsChange(::DirectUI::Components::TileGridPanel::InternalTileGridElementsChangeEventArgs &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunVirtualization@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@QEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long RunVirtualization(WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNode@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@AEBAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@_NUPoint@Foundation@Windows@@@Z
    long ProcessNode(WindissectOpaque &, bool, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNode@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@AEBAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@_N@Z
    long ProcessNode(WindissectOpaque &, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateIsInsideRealizationWindow@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@CAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@_N@Z
    static long PropagateIsInsideRealizationWindow(WindissectOpaque &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsInsideRealizationWindow@VirtualizationStrategy@TileGridPanel@Components@DirectUI@@CAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@_N@Z
    static long SetIsInsideRealizationWindow(WindissectOpaque &, bool);
};
} // namespace DirectUI::Components::TileGridPanel
