#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI::Components::TileGridPanel {
class TransitionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLayoutTransitions@TransitionContext@TileGridPanel@Components@DirectUI@@QEAAXAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@N@Z
    void AdjustLayoutTransitions(WindissectOpaque &, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionContext@TransitionContext@TileGridPanel@Components@DirectUI@@UEAA?AW4ThemeTransitionContext@4@PEAUIUIElement@Xaml@UI@Windows@@H@Z
    virtual int GetTransitionContext(::Windows::UI::Xaml::IUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfBoundsChange@TransitionContext@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@URect@Foundation@Windows@@1_N@Z
    virtual long NotifyOfBoundsChange(WindissectOpaque &, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfClearingContainer@TransitionContext@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual long NotifyOfClearingContainer(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfElementsChange@TransitionContext@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@W4InternalTileGridElementsChange@234@@Z
    virtual long NotifyOfElementsChange(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewContainerGeneratedOrRecycled@TransitionContext@TileGridPanel@Components@DirectUI@@QEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long OnNewContainerGeneratedOrRecycled(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessElementsChange@TransitionContext@TileGridPanel@Components@DirectUI@@UEAAJAEAUInternalTileGridElementsChangeEventArgs@234@@Z
    virtual long PreProcessElementsChange(::DirectUI::Components::TileGridPanel::InternalTileGridElementsChangeEventArgs &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionContext@TileGridPanel@Components@DirectUI@@QEAA@PEAUITransitionContextCallbacks@123@PEAUIOrientationBasedMeasures@123@@Z
    TransitionContext(::DirectUI::Components::TileGridPanel::ITransitionContextCallbacks *, ::DirectUI::Components::TileGridPanel::IOrientationBasedMeasures *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionContext@TransitionContext@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@W4ElementThemeTransition@234@@Z
    long SetTransitionContext(WindissectOpaque &, int);
};
} // namespace DirectUI::Components::TileGridPanel
