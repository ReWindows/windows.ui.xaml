#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 43 member(s).
namespace DirectUI {
class TileGrid {
public:
    class DeferredClearContainerActionPayload;
    class VirtualizationInformationHelper;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeNestedPanelOverride@TileGrid@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@USize@Foundation@6@PEAU786@@Z
    long ArrangeNestedPanelOverride(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@TileGrid@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTreeImpl@TileGrid@DirectUI@@QEAAJPEAE@Z
    long BuildTreeImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanIncreaseCacheLength@TileGrid@DirectUI@@UEAA_NPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    virtual bool CanIncreaseCacheLength(::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTransitions@TileGrid@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long CancelTransitions(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainer@TileGrid@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long ClearContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItemImpl@TileGrid@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long ContainerFromItemImpl(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLayoutTransitionStorage@TileGrid@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual void EnsureLayoutTransitionStorage(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContainerForElement@TileGrid@DirectUI@@UEAAJPEAUIInspectable@@AEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@WRL@Microsoft@@@Z
    virtual long GenerateContainerForElement(IInspectable *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheBufferHelper@TileGrid@DirectUI@@UEAAPEAUICacheBufferHelper@TileGridPanel@Components@2@XZ
    virtual ::DirectUI::Components::TileGridPanel::ICacheBufferHelper * GetCacheBufferHelper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildTransitionBounds@TileGrid@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetChildTransitionBounds(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildTransitionContext@TileGrid@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@HPEAW4ThemeTransitionContext@2@@Z
    virtual long GetChildTransitionContext(::Windows::UI::Xaml::IUIElement *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainersForIncrementalVisualizationImpl@TileGrid@DirectUI@@QEAAJPEAPEAUIContainerContentChangingIterator@2@@Z
    long GetContainersForIncrementalVisualizationImpl(::DirectUI::IContainerContentChangingIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLayoutTick@TileGrid@DirectUI@@UEAAFXZ
    virtual short GetCurrentLayoutTick();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutEnterTick@TileGrid@DirectUI@@UEAAFPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual short GetLayoutEnterTick(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateForElement@TileGrid@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long GetTemplateForElement(IInspectable *, ::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionHelper@TileGrid@DirectUI@@UEAAPEAUITransitionHelper@TileGridPanel@Components@2@XZ
    virtual ::DirectUI::Components::TileGridPanel::ITransitionHelper * GetTransitionHelper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationInformationHelper@TileGrid@DirectUI@@UEAAPEAUIVirtualizationInformationHelper@TileGridPanel@Components@2@XZ
    virtual ::DirectUI::Components::TileGridPanel::IVirtualizationInformationHelper * GetVirtualizationInformationHelper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionMutatingFast@TileGrid@DirectUI@@UEAAJPEAE@Z
    virtual long IsCollectionMutatingFast(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPanelInLiveTree@TileGrid@DirectUI@@UEAA_NXZ
    virtual bool IsPanelInLiveTree();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThumbDragging@TileGrid@DirectUI@@UEAA_NPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    virtual bool IsThumbDragging(::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureNestedPanelOverride@TileGrid@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@USize@Foundation@6@PEAU786@@Z
    long MeasureNestedPanelOverride(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TileGrid@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainer@TileGrid@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@USize@Foundation@6@@Z
    virtual long PrepareContainer(::Windows::UI::Xaml::IUIElement *, IInspectable *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImpl@TileGrid@DirectUI@@QEAAJXZ
    long RefreshImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCacheBuildWork@TileGrid@DirectUI@@UEAAXXZ
    virtual void RegisterCacheBuildWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTransitionLocation@TileGrid@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@@Z
    virtual void SetCurrentTransitionLocation(::Windows::UI::Xaml::IUIElement *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsContainerEntering@TileGrid@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@_N@Z
    virtual void SetIsContainerEntering(::Windows::UI::Xaml::IUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsContainerLeaving@TileGrid@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@_N@Z
    virtual void SetIsContainerLeaving(::Windows::UI::Xaml::IUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsIgnoringTransitions@TileGrid@DirectUI@@UEAAXPEAUIPanel@Controls@Xaml@UI@Windows@@_N@Z
    virtual void SetIsIgnoringTransitions(::Windows::UI::Xaml::Controls::IPanel *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftViewportImpl@TileGrid@DirectUI@@QEAAJN@Z
    long ShiftViewportImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseDefaultTransitions@TileGrid@DirectUI@@UEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@AEA_N@Z
    virtual long ShouldUseDefaultTransitions(::Windows::UI::Xaml::Controls::ITileGridElement *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDragDropVisualImpl@TileGrid@DirectUI@@QEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    long ShowDragDropVisualImpl(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileGrid@DirectUI@@QEAA@XZ
    TileGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDeferClearContainer@TileGrid@DirectUI@@UEAAJAEAUContainerInfo@TileGridPanel@Components@2@PEA_N@Z
    virtual long TryDeferClearContainer(::DirectUI::Components::TileGridPanel::ContainerInfo &, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileGrid@DirectUI@@UEAA@XZ
    virtual ~TileGrid();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileGrid@DirectUI@@MEAAJXZ
    virtual long Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachScrollViewer@TileGrid@DirectUI@@AEAAJXZ
    long AttachScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureElementAnimatingEventArgs@TileGrid@DirectUI@@AEAAXXZ
    void EnsureElementAnimatingEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneratorHost@TileGrid@DirectUI@@AEAAJPEAPEAUIGeneratorHost@2@@Z
    long GetGeneratorHost(::DirectUI::IGeneratorHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@TileGrid@DirectUI@@EEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@TileGrid@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeneratorHost@TileGrid@DirectUI@@AEAAJPEAUIGeneratorHost@2@@Z
    long SetGeneratorHost(::DirectUI::IGeneratorHost *);
};
} // namespace DirectUI
