#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI::Components::TileGridPanel {
class RecyclingStrategy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerBeingRemoved@RecyclingStrategy@TileGridPanel@Components@DirectUI@@QEAAXAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    void OnContainerBeingRemoved(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewContainerGeneratedOrRecycled@RecyclingStrategy@TileGridPanel@Components@DirectUI@@QEAAXAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    void OnNewContainerGeneratedOrRecycled(WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecyclingStrategy@TileGridPanel@Components@DirectUI@@QEAA@PEAUIRecyclingStrategyCallbacks@123@PEAUIOrientationBasedMeasures@123@@Z
    RecyclingStrategy(::DirectUI::Components::TileGridPanel::IRecyclingStrategyCallbacks *, ::DirectUI::Components::TileGridPanel::IOrientationBasedMeasures *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinNode@RecyclingStrategy@TileGridPanel@Components@DirectUI@@QEAAXAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    void UnpinNode(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecyclingStrategy@TileGridPanel@Components@DirectUI@@QEAA@XZ
    ~RecyclingStrategy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinNodeRecursive@RecyclingStrategy@TileGridPanel@Components@DirectUI@@AEAAXAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    void PinNodeRecursive(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleNodeAndChildren@RecyclingStrategy@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long RecycleNodeAndChildren(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleNodeAndChildrenRecursive@RecyclingStrategy@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long RecycleNodeAndChildrenRecursive(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRecycleContainerFromAvailableContainers@RecyclingStrategy@TileGridPanel@Components@DirectUI@@AEAA_NPEAUIDataTemplate@Xaml@UI@Windows@@AEAUContainerInfo@234@@Z
    bool TryRecycleContainerFromAvailableContainers(::Windows::UI::Xaml::IDataTemplate *, ::DirectUI::Components::TileGridPanel::ContainerInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRecycleContainerFromRealizedRange@RecyclingStrategy@TileGridPanel@Components@DirectUI@@AEAAJPEAUIDataTemplate@Xaml@UI@Windows@@ULinearSegment@234@AEAUContainerInfo@234@PEA_N@Z
    long TryRecycleContainerFromRealizedRange(::Windows::UI::Xaml::IDataTemplate *, ::DirectUI::Components::TileGridPanel::LinearSegment, ::DirectUI::Components::TileGridPanel::ContainerInfo &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinNodeRecursive@RecyclingStrategy@TileGridPanel@Components@DirectUI@@AEAAXAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    void UnpinNodeRecursive(WindissectOpaque &);
};
} // namespace DirectUI::Components::TileGridPanel
