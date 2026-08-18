#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI::Components::TileGridPanel {
class ViewModelTree {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNodeFromElement@ViewModelTree@TileGridPanel@Components@DirectUI@@SAAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@PEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    static WindissectOpaque & GetNodeFromElement(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelChildrenFromNode@ViewModelTree@TileGridPanel@Components@DirectUI@@QEAAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@AEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    WindissectOpaque * GetPanelChildrenFromNode(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelFromNode@ViewModelTree@TileGridPanel@Components@DirectUI@@QEAAPEAUIPanel@Controls@Xaml@UI@Windows@@AEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    ::Windows::UI::Xaml::Controls::IPanel * GetPanelFromNode(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ViewModelTree@TileGridPanel@Components@DirectUI@@QEAAXPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    void Initialize(::Windows::UI::Xaml::Controls::IPanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewModelChanged@ViewModelTree@TileGridPanel@Components@DirectUI@@QEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    long OnViewModelChanged(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetReorderedNode@ViewModelTree@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long ResetReorderedNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetNodeFromElement@ViewModelTree@TileGridPanel@Components@DirectUI@@SAPEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@PEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    static WindissectOpaque * TryGetNodeFromElement(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewModelTree@TileGridPanel@Components@DirectUI@@QEAA@PEAUIViewModelTreeCallbacks@123@@Z
    ViewModelTree(::DirectUI::Components::TileGridPanel::IViewModelTreeCallbacks *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewModelTree@TileGridPanel@Components@DirectUI@@QEAA@XZ
    ~ViewModelTree();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@AEAV?$ComPtr@V?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@TileGridPanel@Components@DirectUI@@@WRL@Microsoft@@@Z
    long AddElement(::Windows::UI::Xaml::Controls::ITileGridElement *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNode@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long ClearNode(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNode@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@_N@Z
    long ClearNode(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContextOfAffectedNode@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@W4InternalTileGridElementsChange@234@@Z
    long NotifyContextOfAffectedNode(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementBoundsChanged@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@PEAUITileGridElementBoundsChangedEventArgs@6789@@Z
    long OnElementBoundsChanged(::Windows::UI::Xaml::Controls::ITileGridElement *, ::Windows::UI::Xaml::Controls::ITileGridElementBoundsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementsChanged@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJPEAUITileGridCompositeElement@Controls@Xaml@UI@Windows@@PEAUITileGridElementsChangedEventArgs@6789@@Z
    long OnElementsChanged(::Windows::UI::Xaml::Controls::ITileGridCompositeElement *, ::Windows::UI::Xaml::Controls::ITileGridElementsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromPanel@ViewModelTree@TileGridPanel@Components@DirectUI@@CAJPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEAUIUIElement@Xaml@UI@8@@Z
    static long RemoveFromPanel(WindissectOpaque *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetNode@ViewModelTree@TileGridPanel@Components@DirectUI@@AEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long ResetNode(WindissectOpaque &);
};
} // namespace DirectUI::Components::TileGridPanel
