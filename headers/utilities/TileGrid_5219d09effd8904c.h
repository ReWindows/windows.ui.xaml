#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
namespace DirectUI::Components::TileGridPanel {
class TileGrid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeNode@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long ArrangeNode(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJUSize@Foundation@Windows@@AEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@PEAU567@@Z
    long ArrangeOverride(WindissectOpaque, WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJUSize@Foundation@Windows@@PEAU567@@Z
    long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildCacheBuffer@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJPEA_N@Z
    long BuildCacheBuffer(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNodeContainer@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual long ClearNodeContainer(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPanelChildrenWithNoTransitions@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual long ClearPanelChildrenWithNoTransitions(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItem@TileGrid@TileGridPanel@Components@DirectUI@@QEAA?AV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@WRL@Microsoft@@PEAUIInspectable@@@Z
    WindissectOpaque ContainerFromItem(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainersForIncrementalVisualization@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJPEAPEAUIContainerContentChangingIterator@4@@Z
    long GetContainersForIncrementalVisualization(::DirectUI::IContainerContentChangingIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredSize@TileGrid@TileGridPanel@Components@DirectUI@@QEAA?AUSize@Foundation@Windows@@AEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    WindissectOpaque GetDesiredSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentPanel@TileGrid@TileGridPanel@Components@DirectUI@@UEAAPEAUIPanel@Controls@Xaml@UI@Windows@@AEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual ::Windows::UI::Xaml::Controls::IPanel * GetParentPanel(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionHelper@TileGrid@TileGridPanel@Components@DirectUI@@UEAAPEAUITransitionHelper@234@XZ
    virtual ::DirectUI::Components::TileGridPanel::ITransitionHelper * GetTransitionHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileGrid@TileGridPanel@Components@DirectUI@@QEAAXPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    void Initialize(::Windows::UI::Xaml::Controls::IPanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrange@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long InvalidateArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasure@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long InvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainer@TileGrid@TileGridPanel@Components@DirectUI@@QEAA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@PEAUIDependencyObject@Xaml@UI@Windows@@@Z
    WindissectOpaque ItemFromContainer(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureNode@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    long MeasureNode(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJUSize@Foundation@Windows@@AEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@PEAU567@@Z
    long MeasureOverride(WindissectOpaque, WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJUSize@Foundation@Windows@@PEAU567@@Z
    long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfBoundsChange@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@URect@Foundation@Windows@@1_N@Z
    virtual long NotifyOfBoundsChange(WindissectOpaque &, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfClearingContainer@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@@Z
    virtual long NotifyOfClearingContainer(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfElementsChange@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJAEAV?$TreeNode@VTileGridElement@TileGridPanel@Components@DirectUI@@@234@W4InternalTileGridElementsChange@234@@Z
    virtual long NotifyOfElementsChange(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeferContainerClearFinished@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJAEBUContainerInfo@234@@Z
    long OnDeferContainerClearFinished(::DirectUI::Components::TileGridPanel::ContainerInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragDropVisualHidden@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long OnDragDropVisualHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragDropVisualShown@TileGrid@TileGridPanel@Components@DirectUI@@QEAAXPEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    void OnDragDropVisualShown(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRealizationWindowChanged@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJULinearSegment@234@@Z
    virtual long OnRealizationWindowChanged(::DirectUI::Components::TileGridPanel::LinearSegment);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessElementsChange@TileGrid@TileGridPanel@Components@DirectUI@@UEAAJAEAUInternalTileGridElementsChangeEventArgs@234@@Z
    virtual long PreProcessElementsChange(::DirectUI::Components::TileGridPanel::InternalTileGridElementsChangeEventArgs &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJPEAUIInspectable@@W4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@_N@Z
    long ScrollIntoView(IInspectable *, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCacheLength@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJN@Z
    long SetCacheLength(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsIgnoringTransitions@TileGrid@TileGridPanel@Components@DirectUI@@UEAAXPEAUIPanel@Controls@Xaml@UI@Windows@@_N@Z
    virtual void SetIsIgnoringTransitions(::Windows::UI::Xaml::Controls::IPanel *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    long SetOrientation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollViewer@TileGrid@TileGridPanel@Components@DirectUI@@QEAAJPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    long SetScrollViewer(::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileGrid@TileGridPanel@Components@DirectUI@@QEAA@PEAUITileGridServices@123@@Z
    TileGrid(::DirectUI::Components::TileGridPanel::ITileGridServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetElementFromUIElement@TileGrid@TileGridPanel@Components@DirectUI@@UEAAPEAVTileGridElement@234@PEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual ::DirectUI::Components::TileGridPanel::TileGridElement * TryGetElementFromUIElement(::Windows::UI::Xaml::IUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileGrid@TileGridPanel@Components@DirectUI@@QEAA@XZ
    ~TileGrid();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewImpl@TileGrid@TileGridPanel@Components@DirectUI@@AEAAJPEA_N@Z
    long ScrollIntoViewImpl(bool *);
};
} // namespace DirectUI::Components::TileGridPanel
