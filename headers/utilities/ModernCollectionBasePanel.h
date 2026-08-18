#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 174 member(s).
namespace DirectUI {
class ModernCollectionBasePanel {
public:
    class CacheManager;
    class CollectionIterator;
    class ContainerContentChangingIterator;
    class ContainerManager;
    class DeferredModernPanelUnlinkActionPayload;
    class LayoutDataInfoProvider;
    class SnapPointState;
    class TransitionContextManager;
    class WindowState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustViewportOffsetForDeserialization@ModernCollectionBasePanel@DirectUI@@QEAANN@Z
    double AdjustViewportOffsetForDeserialization(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ModernCollectionBasePanel@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTreeImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAE@Z
    long BuildTreeImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceStickyHeaderOffsets@ModernCollectionBasePanel@DirectUI@@QEAAJPEAVListViewBaseHeaderItem@2@HPEAN@Z
    long CoerceStickyHeaderOffsets(::DirectUI::ListViewBaseHeaderItem *, int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectItemsHostImpl@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long DisconnectItemsHostImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRecyclingCandidateImpl@ModernCollectionBasePanel@DirectUI@@QEAAJHPEAE@Z
    long FindRecyclingCandidateImpl(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishUnlinkingContainer@ModernCollectionBasePanel@DirectUI@@QEAAJPEAVUIElement@2@E@Z
    long FinishUnlinkingContainer(::DirectUI::UIElement *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContainerAtIndexImpl@ModernCollectionBasePanel@DirectUI@@QEAAJHPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GenerateContainerAtIndexImpl(int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateElementAtDataIndex@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAPEAUIUIElement@567@@Z
    long GenerateElementAtDataIndex(int, int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateHeaderAtGroupIndexImpl@ModernCollectionBasePanel@DirectUI@@QEAAJHPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GenerateHeaderAtGroupIndexImpl(int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildTransitionBounds@ModernCollectionBasePanel@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetChildTransitionBounds(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildTransitionContext@ModernCollectionBasePanel@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@HPEAW4ThemeTransitionContext@2@@Z
    virtual long GetChildTransitionContext(::Windows::UI::Xaml::IUIElement *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestElementInfo@ModernCollectionBasePanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAUElementInfo@Primitives@Controls@Xaml@UI@5@@Z
    virtual long GetClosestElementInfo(WindissectOpaque, ::Windows::UI::Xaml::Controls::Primitives::ElementInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainersForIncrementalVisualizationImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAPEAUIContainerContentChangingIterator@2@@Z
    long GetContainersForIncrementalVisualizationImpl(::DirectUI::IContainerContentChangingIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultCacheLength@ModernCollectionBasePanel@DirectUI@@SANXZ
    static double GetDefaultCacheLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstVisibleElementForSerialization@ModernCollectionBasePanel@DirectUI@@QEAAJPEAW4ElementType@Controls@Xaml@UI@Windows@@PEANPEAPEAUIUIElement@567@@Z
    long GetFirstVisibleElementForSerialization(int *, double *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusCandidate@ModernCollectionBasePanel@DirectUI@@QEAAJPEAH0PEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long GetFocusCandidate(int *, int *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndex@ModernCollectionBasePanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAH@Z
    virtual long GetInsertionIndex(WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndexesImpl@ModernCollectionBasePanel@DirectUI@@QEAAJUPoint@Foundation@Windows@@PEAH1@Z
    long GetInsertionIndexesImpl(WindissectOpaque, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsBounds@ModernCollectionBasePanel@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetItemsBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPage@ModernCollectionBasePanel@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAN@Z
    virtual long GetItemsPerPage(::DirectUI::IScrollInfo *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastItemIndexInViewport@ModernCollectionBasePanel@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAH@Z
    virtual long GetLastItemIndexInViewport(::DirectUI::IScrollInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNeighboringItemIndex@ModernCollectionBasePanel@DirectUI@@QEAAJIIPEAI@Z
    long GetNeighboringItemIndex(unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointsImpl@ModernCollectionBasePanel@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    long GetRegularSnapPointsImpl(int, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOfItemTemplateAsContainer@ModernCollectionBasePanel@DirectUI@@QEAAJAEBV?$ComPtr@UIGeneratorHost@DirectUI@@@ctl@@AEBV?$ComPtr@UIInspectable@@@4@_NAEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@4@@Z
    long GetRootOfItemTemplateAsContainer(WindissectOpaque const &, WindissectOpaque const &, bool, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetHeaderIndexFromNavigationAction@ModernCollectionBasePanel@DirectUI@@UEAAJIW4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAIPEAE@Z
    virtual long GetTargetHeaderIndexFromNavigationAction(unsigned int, int, unsigned int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@ModernCollectionBasePanel@DirectUI@@UEAAJIW4ElementType@Controls@Xaml@UI@Windows@@W4KeyNavigationAction@4567@EIPEAIPEAW434567@PEAE@Z
    virtual long GetTargetIndexFromNavigationAction(unsigned int, int, int, unsigned char, unsigned int, unsigned int *, int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalViewportPadding@ModernCollectionBasePanel@DirectUI@@QEAAJPEAM@Z
    long GetVerticalViewportPadding(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionMutatingFast@ModernCollectionBasePanel@DirectUI@@UEAAJPEAE@Z
    virtual long IsCollectionMutatingFast(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutBoundary@ModernCollectionBasePanel@DirectUI@@UEAAJHPEAE000@Z
    virtual long IsLayoutBoundary(int, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLockedForLayout@ModernCollectionBasePanel@DirectUI@@QEBA_NXZ
    bool IsLockedForLayout() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ModernCollectionBasePanel@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutTransitionEnd@ModernCollectionBasePanel@DirectUI@@QEAAJPEAVListViewBaseHeaderItem@2@@Z
    long NotifyLayoutTransitionEnd(::DirectUI::ListViewBaseHeaderItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfGroupsChanged@ModernCollectionBasePanel@DirectUI@@QEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long NotifyOfGroupsChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChangedImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long NotifyOfItemsChangedImpl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChangingImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long NotifyOfItemsChangingImpl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleAllContainersImpl@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long RecycleAllContainersImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleAllHeadersImpl@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long RecycleAllHeadersImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleContainerImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long RecycleContainerImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleHeaderImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long RecycleHeaderImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleLinkedContainer@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long RecycleLinkedContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImpl@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long RefreshImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterItemsHostImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIGeneratorHost@2@@Z
    long RegisterItemsHostImpl(::DirectUI::IGeneratorHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromHeaderRecycleQueue@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    long RemoveFromHeaderRecycleQueue(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromQueue@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@_N@Z
    long RemoveFromQueue(::Windows::UI::Xaml::IUIElement *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollGroupHeaderIntoView@ModernCollectionBasePanel@DirectUI@@QEAAJIW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@NEEI@Z
    long ScrollGroupHeaderIntoView(unsigned int, int, double, unsigned char, unsigned char, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollItemIntoView@ModernCollectionBasePanel@DirectUI@@QEAAJIW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@NEE@Z
    long ScrollItemIntoView(unsigned int, int, double, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRectIntoView@ModernCollectionBasePanel@DirectUI@@QEAAJURect@Foundation@Windows@@E@Z
    long ScrollRectIntoView(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOriginFromItemsPresenter@ModernCollectionBasePanel@DirectUI@@QEAAXUPoint@Foundation@Windows@@@Z
    void SetOriginFromItemsPresenter(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsKeyNavigationAction@ModernCollectionBasePanel@DirectUI@@UEAAJW4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAE@Z
    virtual long SupportsKeyNavigationAction(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRecycleContainerImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    long TryRecycleContainerImpl(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkContainerFromItem@ModernCollectionBasePanel@DirectUI@@QEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAV?$ComPtr@UIInspectable@@@4@@Z
    long UnlinkContainerFromItem(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkHeaderFromGroup@ModernCollectionBasePanel@DirectUI@@QEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAV?$ComPtr@UIInspectable@@@4@@Z
    long UnlinkHeaderFromGroup(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility@ModernCollectionBasePanel@DirectUI@@UEAAEW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual unsigned char WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PanningDirectionBaseImpl@ModernCollectionBasePanel@DirectUI@@QEAAJPEAW4PanelScrollingDirection@Controls@Xaml@UI@Windows@@@Z
    long get_PanningDirectionBaseImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CacheLengthBase@ModernCollectionBasePanel@DirectUI@@QEAAJN@Z
    long put_CacheLengthBase(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheFirstVisibleElementBeforeOrientationChange@ModernCollectionBasePanel@DirectUI@@IEAAJXZ
    long CacheFirstVisibleElementBeforeOrientationChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPageImpl@ModernCollectionBasePanel@DirectUI@@MEAAJURect@Foundation@Windows@@PEAN@Z
    virtual long GetItemsPerPageImpl(WindissectOpaque, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsUpdatingScrollMode@ModernCollectionBasePanel@DirectUI@@MEBA?AW4ItemsUpdatingScrollMode@2@XZ
    virtual int GetItemsUpdatingScrollMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialGroupIndex@ModernCollectionBasePanel@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialGroupIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialItemIndex@ModernCollectionBasePanel@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialItemIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportSize@ModernCollectionBasePanel@DirectUI@@IEAAJPEAUSize@Foundation@Windows@@@Z
    long GetViewportSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ModernCollectionBasePanel@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaintainViewportSupportedAndEnabled@ModernCollectionBasePanel@DirectUI@@IEBA_NXZ
    bool IsMaintainViewportSupportedAndEnabled() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModernCollectionBasePanel@DirectUI@@IEAA@XZ
    ModernCollectionBasePanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialGroup@ModernCollectionBasePanel@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialGroup(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialItem@ModernCollectionBasePanel@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialItem(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChangeProcessed@ModernCollectionBasePanel@DirectUI@@MEAAJXZ
    virtual long OnCollectionChangeProcessed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ModernCollectionBasePanel@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOrientationChange@ModernCollectionBasePanel@DirectUI@@IEAAJXZ
    long ProcessOrientationChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ModernCollectionBasePanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateGroupHeaderStrategy@ModernCollectionBasePanel@DirectUI@@IEAAJXZ
    long ReevaluateGroupHeaderStrategy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialContainerSize@ModernCollectionBasePanel@DirectUI@@MEAAJHUSize@Foundation@Windows@@@Z
    virtual long RegisterSpecialContainerSize(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialHeaderSize@ModernCollectionBasePanel@DirectUI@@MEAAJHUSize@Foundation@Windows@@@Z
    virtual long RegisterSpecialHeaderSize(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCacheBuffers@ModernCollectionBasePanel@DirectUI@@IEAAJXZ
    long ResetCacheBuffers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupHeaderStrategy@ModernCollectionBasePanel@DirectUI@@MEAAJW4GroupHeaderStrategy@2@@Z
    virtual long SetGroupHeaderStrategy(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModernCollectionBasePanel@DirectUI@@MEAA@XZ
    virtual ~ModernCollectionBasePanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLayoutTransitions@ModernCollectionBasePanel@DirectUI@@AEAAJM@Z
    long AdjustLayoutTransitions(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLayoutTransitionsForElement@ModernCollectionBasePanel@DirectUI@@AEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@MW4Orientation@Controls@Xaml@UI@Windows@@@Z
    long AdjustLayoutTransitionsForElement(WindissectOpaque const &, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTrackedElementShift@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long ApplyTrackedElementShift();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeElements@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@AEBUSize@Foundation@7@AEBURect@97@@Z
    long ArrangeElements(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachPanelComponents@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long AttachPanelComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrackingFirstVisibleElement@ModernCollectionBasePanel@DirectUI@@AEAAJ_N0HW4CollectionChange@Collections@Foundation@Windows@@@Z
    long BeginTrackingFirstVisibleElement(bool, bool, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrackingFirstVisibleElement@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long BeginTrackingFirstVisibleElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrackingOnOrientationChange@ModernCollectionBasePanel@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long BeginTrackingOnOrientationChange(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrackingOnRefresh@ModernCollectionBasePanel@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long BeginTrackingOnRefresh(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrackingOnViewportSizeChange@ModernCollectionBasePanel@DirectUI@@AEAAJAEBURect@Foundation@Windows@@0@Z
    long BeginTrackingOnViewportSizeChange(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateVisibleWindowFromScrollData@ModernCollectionBasePanel@DirectUI@@AEAAJAEBURect@Foundation@Windows@@MPEAU345@@Z
    long CalculateVisibleWindowFromScrollData(WindissectOpaque const &, float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateVisibleWindowFromScrollPoint@ModernCollectionBasePanel@DirectUI@@AEAAJAEBUPoint@Foundation@Windows@@MPEAURect@45@@Z
    long CalculateVisibleWindowFromScrollPoint(WindissectOpaque const &, float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanIncreaseCacheLength@ModernCollectionBasePanel@DirectUI@@AEAAJPEAE@Z
    long CanIncreaseCacheLength(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceWindowToExtent@ModernCollectionBasePanel@DirectUI@@AEAAJAEAURect@Foundation@Windows@@@Z
    long CoerceWindowToExtent(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureStickyHeader@ModernCollectionBasePanel@DirectUI@@AEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@HAEBURect@Foundation@Windows@@@Z
    long ConfigureStickyHeader(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureStickyHeader@ModernCollectionBasePanel@DirectUI@@AEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAVScrollViewer@2@PEAVUIElement@2@NAEBURect@Foundation@Windows@@_NPEA_N@Z
    long ConfigureStickyHeader(WindissectOpaque const &, ::DirectUI::ScrollViewer *, ::DirectUI::UIElement *, double, WindissectOpaque const &, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CorrectForEstimationErrors@ModernCollectionBasePanel@DirectUI@@AEAAJ_N@Z
    long CorrectForEstimationErrors(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnlinkedFillersForGroup@ModernCollectionBasePanel@DirectUI@@AEAAJH@Z
    long CreateUnlinkedFillersForGroup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachPanelComponents@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long DetachPanelComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectAndHandleDisconnectedView@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long DetectAndHandleDisconnectedView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineWindowAndAnchors@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long DetermineWindowAndAnchors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoScrollGroupHeaderIntoView@ModernCollectionBasePanel@DirectUI@@AEAAJHW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@NEPEAURect@Foundation@7@@Z
    long DoScrollGroupHeaderIntoView(int, int, double, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoScrollItemIntoView@ModernCollectionBasePanel@DirectUI@@AEAAJHW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@NEPEAURect@Foundation@7@@Z
    long DoScrollItemIntoView(int, int, double, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElectNewTrackedElement@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long ElectNewTrackedElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTrackingFirstVisibleElement@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long EndTrackingFirstVisibleElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRecycleContainerCandidate@ModernCollectionBasePanel@DirectUI@@AEAAJHE@Z
    long EnsureRecycleContainerCandidate(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRecycleHeaderCandidate@ModernCollectionBasePanel@DirectUI@@AEAAJEE@Z
    long EnsureRecycleHeaderCandidate(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateFloatingHeaderLocation@ModernCollectionBasePanel@DirectUI@@AEAAJAEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long EstimateFloatingHeaderLocation(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimatePanelExtent@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUSize@Foundation@Windows@@@Z
    long EstimatePanelExtent(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindValidContainerInGroupForPoint@ModernCollectionBasePanel@DirectUI@@AEAAJUPoint@Foundation@Windows@@PEAEPEAH22PEAURect@45@@Z
    long FindValidContainerInGroupForPoint(WindissectOpaque, unsigned char *, int *, int *, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushWindowStateCommand@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long FlushWindowStateCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Generate@ModernCollectionBasePanel@DirectUI@@AEAAJVCollectionIterator@12@ULayoutReference@Controls@Xaml@UI@Windows@@E@Z
    long Generate(WindissectOpaque, ::Windows::UI::Xaml::Controls::LayoutReference, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAnchorForGroup@ModernCollectionBasePanel@DirectUI@@AEAAJHPEBUEstimationReference@Controls@Xaml@UI@Windows@@0@Z
    long GenerateAnchorForGroup(int, ::Windows::UI::Xaml::Controls::EstimationReference const *, ::Windows::UI::Xaml::Controls::EstimationReference const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAnchorForItem@ModernCollectionBasePanel@DirectUI@@AEAAJHPEBUEstimationReference@Controls@Xaml@UI@Windows@@0@Z
    long GenerateAnchorForItem(int, ::Windows::UI::Xaml::Controls::EstimationReference const *, ::Windows::UI::Xaml::Controls::EstimationReference const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAnchorsForWindow@ModernCollectionBasePanel@DirectUI@@AEAAJAEBURect@Foundation@Windows@@PEBUEstimationReference@Controls@Xaml@UI@5@1@Z
    long GenerateAnchorsForWindow(WindissectOpaque const &, ::Windows::UI::Xaml::Controls::EstimationReference const *, ::Windows::UI::Xaml::Controls::EstimationReference const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstElementInWindow@ModernCollectionBasePanel@DirectUI@@AEAAJAEBURect@Foundation@Windows@@PEAW4ElementType@Controls@Xaml@UI@5@PEAHPEAPEAUIUIElement@895@PEAU345@@Z
    long GetFirstElementInWindow(WindissectOpaque const &, int *, int *, ::Windows::UI::Xaml::IUIElement * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGarbageElementPosition@ModernCollectionBasePanel@DirectUI@@AEBA?AUPoint@Foundation@Windows@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    WindissectOpaque GetGarbageElementPosition(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGenerationAnchorInformation@ModernCollectionBasePanel@DirectUI@@AEAAJPEAULayoutReference@Controls@Xaml@UI@Windows@@PEAVCollectionIterator@12@@Z
    long GetGenerationAnchorInformation(::Windows::UI::Xaml::Controls::LayoutReference *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupInformationFromItemIndexImpl@ModernCollectionBasePanel@DirectUI@@AEAAJHPEAH00@Z
    long GetGroupInformationFromItemIndexImpl(int, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFromElement@ModernCollectionBasePanel@DirectUI@@CA?AV?$ComPtr@UIInspectable@@@ctl@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@4@@Z
    static WindissectOpaque GetItemFromElement(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastVisibleContainer@ModernCollectionBasePanel@DirectUI@@AEAAJEEPEAIPEAE@Z
    long GetLastVisibleContainer(unsigned char, unsigned char, unsigned int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewViewportEdge@ModernCollectionBasePanel@DirectUI@@AEAAMXZ
    float GetNewViewportEdge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealHeaderExtentOutsideVisibleWindow@ModernCollectionBasePanel@DirectUI@@AEAAJPEAM@Z
    long GetRealHeaderExtentOutsideVisibleWindow(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationWindowAfterViewportShift@ModernCollectionBasePanel@DirectUI@@AEAA?AURect@Foundation@Windows@@XZ
    WindissectOpaque GetRealizationWindowAfterViewportShift();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceDirectionFromWindow@ModernCollectionBasePanel@DirectUI@@AEBA?AW4RelativePosition@2@URect@Foundation@Windows@@0@Z
    int GetReferenceDirectionFromWindow(WindissectOpaque, WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetHeaderIndexFromNavigationActionByItem@ModernCollectionBasePanel@DirectUI@@AEAAJIW4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAI@Z
    long GetTargetHeaderIndexFromNavigationActionByItem(unsigned int, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationActionByPage@ModernCollectionBasePanel@DirectUI@@AEAAJIEEPEAI@Z
    long GetTargetIndexFromNavigationActionByPage(unsigned int, unsigned char, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrackedElement@ModernCollectionBasePanel@DirectUI@@AEAAJPEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long GetTrackedElement(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBottomOrRightAligned@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@W4Orientation@Controls@456@PEA_N@Z
    long IsBottomOrRightAligned(::Windows::UI::Xaml::IFrameworkElement *, int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChangeBeforeTrackedElement@ModernCollectionBasePanel@DirectUI@@AEAAJ_N0HW4CollectionChange@Collections@Foundation@Windows@@PEA_N2@Z
    long IsChangeBeforeTrackedElement(bool, bool, int, int, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLastElementRealized@ModernCollectionBasePanel@DirectUI@@AEAAJPEAEPEAM@Z
    long IsLastElementRealized(unsigned char *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutPreloadedItems@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long LayoutPreloadedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureElementsInGarbageSection@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long MeasureElementsInGarbageSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureSpecialElements@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long MeasureSpecialElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionReset@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long OnCollectionReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataElementReplaced@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    long OnDataElementReplaced(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupAdded@ModernCollectionBasePanel@DirectUI@@AEAAJH@Z
    long OnGroupAdded(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupRemoved@ModernCollectionBasePanel@DirectUI@@AEAAJH@Z
    long OnGroupRemoved(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupReset@ModernCollectionBasePanel@DirectUI@@AEAAJH@Z
    long OnGroupReset(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupStyleChanged@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEBVCDependencyProperty@@@Z
    long OnGroupStyleChanged(::Windows::UI::Xaml::IDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemAdded@ModernCollectionBasePanel@DirectUI@@AEAAJH@Z
    long OnItemAdded(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemRemoved@ModernCollectionBasePanel@DirectUI@@AEAAJH_N@Z
    long OnItemRemoved(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPanelLoaded@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPanelLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPanelUnloaded@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPanelUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewChanged@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewChanged(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewChanging@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewChanging(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerSizeChanged@ModernCollectionBasePanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnScrollViewerSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceWindowAroundElementRect@ModernCollectionBasePanel@DirectUI@@AEAAJAEBURect@Foundation@Windows@@0W4ScrollIntoViewAlignment@Controls@Xaml@UI@5@NPEAU345@@Z
    long PlaceWindowAroundElementRect(WindissectOpaque const &, WindissectOpaque const &, int, double, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerViaItemsHost@ModernCollectionBasePanel@DirectUI@@AEAAJHUSize@Foundation@Windows@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long PrepareContainerViaItemsHost(int, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareElementViaItemsHost@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@HUSize@Foundation@7@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long PrepareElementViaItemsHost(int, int, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareHeaderViaItemsHost@ModernCollectionBasePanel@DirectUI@@AEAAJHUSize@Foundation@Windows@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long PrepareHeaderViaItemsHost(int, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimeVisibleWindow@ModernCollectionBasePanel@DirectUI@@AEAAJ_N@Z
    long PrimeVisibleWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrunePinnedContainers@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long PrunePinnedContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleAllContainersAndHeaders@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long RecycleAllContainersAndHeaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialElementSize@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@HUSize@Foundation@7@@Z
    long RegisterSpecialElementSize(int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseStoredFocusedContainer@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long ReleaseStoredFocusedContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadUnloadedElements@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long ReloadUnloadedElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMeasureLeftOvers@ModernCollectionBasePanel@DirectUI@@AEAAJVCollectionIterator@12@E@Z
    long RemoveMeasureLeftOvers(WindissectOpaque, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStickyHeaders@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long RemoveStickyHeaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunGenerate@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long RunGenerate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunVirtualization@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long RunVirtualization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementIsRealized@ModernCollectionBasePanel@DirectUI@@CAXAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@_N@Z
    static void SetElementIsRealized(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealizationWindowFromVisibleWindow@ModernCollectionBasePanel@DirectUI@@AEAAJE@Z
    long SetRealizationWindowFromVisibleWindow(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollViewerOffsetsTo@ModernCollectionBasePanel@DirectUI@@AEAAJAEBURect@Foundation@Windows@@_NPEA_N@Z
    long SetScrollViewerOffsetsTo(WindissectOpaque const &, bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackedElementOffsetRelativeToViewport@ModernCollectionBasePanel@DirectUI@@AEAAXXZ
    void SetTrackedElementOffsetRelativeToViewport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldElementBeVisible@ModernCollectionBasePanel@DirectUI@@AEBA_NW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    bool ShouldElementBeVisible(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoredFocusedContainerStillHasFocus@ModernCollectionBasePanel@DirectUI@@AEAAJPEAE@Z
    long StoredFocusedContainerStillHasFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronousScrollByPage@ModernCollectionBasePanel@DirectUI@@AEAAJE@Z
    long SynchronousScrollByPage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceGuardFailure@ModernCollectionBasePanel@DirectUI@@AEAAXPEBG@Z
    void TraceGuardFailure(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceVirtualizationData@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long TraceVirtualizationData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackLastElement@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long TrackLastElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGroupStyle@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long UpdateGroupStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemClippingForStickyHeaders@ModernCollectionBasePanel@DirectUI@@AEAAJAEBUSize@Foundation@Windows@@_N1@Z
    long UpdateItemClippingForStickyHeaders(WindissectOpaque const &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSnapPoints@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long UpdateSnapPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStickyHeaders@ModernCollectionBasePanel@DirectUI@@AEAAJAEBUSize@Foundation@Windows@@@Z
    long UpdateStickyHeaders(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewportOffsetDelta@ModernCollectionBasePanel@DirectUI@@AEAAXAEBURect@Foundation@Windows@@0@Z
    void UpdateViewportOffsetDelta(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyStoredFocusedContainer@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long VerifyStoredFocusedContainer();
};
} // namespace DirectUI
