#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 94 member(s).
namespace DirectUI {
class OrientedVirtualizingPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreScrollSnapPointsRegular@OrientedVirtualizingPanel@DirectUI@@UEAAJPEAE@Z
    virtual long AreScrollSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLogicalOffset@OrientedVirtualizingPanel@DirectUI@@UEAAJEAEAN0@Z
    virtual long ComputeLogicalOffset(unsigned char, double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtent@OrientedVirtualizingPanel@DirectUI@@UEAAJ_NAEAN@Z
    virtual long ComputePixelExtent(bool, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelOffset@OrientedVirtualizingPanel@DirectUI@@UEAAJEAEAN@Z
    virtual long ComputePixelOffset(unsigned char, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeUnrealizedChildrenEstimatedDimension@OrientedVirtualizingPanel@DirectUI@@UEAAJAEAM@Z
    virtual long ComputeUnrealizedChildrenEstimatedDimension(float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndex@OrientedVirtualizingPanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAH@Z
    virtual long GetInsertionIndex(WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndexesImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJUPoint@Foundation@Windows@@PEAH1@Z
    long GetInsertionIndexesImpl(WindissectOpaque, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsBounds@OrientedVirtualizingPanel@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetItemsBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPage@OrientedVirtualizingPanel@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAN@Z
    virtual long GetItemsPerPage(::DirectUI::IScrollInfo *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastItemIndexInViewport@OrientedVirtualizingPanel@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAH@Z
    virtual long GetLastItemIndexInViewport(::DirectUI::IScrollInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointsImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    long GetRegularSnapPointsImpl(int, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfFirstVisibleChild@OrientedVirtualizingPanel@DirectUI@@UEAAJAEAUSize@Foundation@Windows@@@Z
    virtual long GetSizeOfFirstVisibleChild(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutBoundary@OrientedVirtualizingPanel@DirectUI@@UEAAJHPEAE000@Z
    virtual long IsLayoutBoundary(int, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDownImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long LineDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeftImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long LineLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRightImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long LineRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUpImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long LineUpImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@OrientedVirtualizingPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@OrientedVirtualizingPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelLeft(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@OrientedVirtualizingPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelRight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@OrientedVirtualizingPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDownImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long PageDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeftImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long PageLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRightImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long PageRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUpImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJXZ
    long PageUpImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffsetImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJN@Z
    long SetHorizontalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJN@Z
    long SetVerticalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZoomFactor@OrientedVirtualizingPanel@DirectUI@@UEAAJM@Z
    virtual long SetZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInManipulation@OrientedVirtualizingPanel@DirectUI@@UEAAJEEN@Z
    virtual long UpdateInManipulation(unsigned char, unsigned char, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HorizontalSnapPointsChanged@OrientedVirtualizingPanel@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HorizontalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VerticalSnapPointsChanged@OrientedVirtualizingPanel@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VerticalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RealizedChildren@OrientedVirtualizingPanel@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_RealizedChildren(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwnerImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_ScrollOwnerImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwnerImpl@OrientedVirtualizingPanel@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_ScrollOwnerImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HorizontalSnapPointsChanged@OrientedVirtualizingPanel@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HorizontalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VerticalSnapPointsChanged@OrientedVirtualizingPanel@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VerticalSnapPointsChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContainerFromGenerator@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@HPEAUIUIElement@567@EAEAE@Z
    long AddContainerFromGenerator(::Windows::UI::Xaml::Controls::IItemsControl *, int, ::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustCacheWindow@OrientedVirtualizingPanel@DirectUI@@IEAAXXZ
    void AdjustCacheWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeExtraContainers@OrientedVirtualizingPanel@DirectUI@@IEAAJI@Z
    long ArrangeExtraContainers(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildIndexFromRealizedIndex@OrientedVirtualizingPanel@DirectUI@@IEAAJHAEAH@Z
    long ChildIndexFromRealizedIndex(int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupContainers@OrientedVirtualizingPanel@DirectUI@@MEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@USize@Foundation@7@@Z
    virtual long CleanupContainers(::Windows::UI::Xaml::Controls::IItemsControl *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRange@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@HH@Z
    long CleanupRange(::Windows::UI::Xaml::Controls::IItemsControl *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectRecycledContainers@OrientedVirtualizingPanel@DirectUI@@IEAAJXZ
    long CollectRecycledContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeIndexOfFirstVisibleItem@OrientedVirtualizingPanel@DirectUI@@IEAAHEAEAN@Z
    int ComputeIndexOfFirstVisibleItem(unsigned char, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLogicalExtent@OrientedVirtualizingPanel@DirectUI@@IEAAJUSize@Foundation@Windows@@EAEAU345@@Z
    long ComputeLogicalExtent(WindissectOpaque, unsigned char, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelOffset@OrientedVirtualizingPanel@DirectUI@@IEAAJEENAEAN@Z
    long ComputePixelOffset(unsigned char, unsigned char, double, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeScrollOffsetForArrange@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUPoint@Foundation@Windows@@@Z
    long ComputeScrollOffsetForArrange(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFocusedChildInRealizedChildren@OrientedVirtualizingPanel@DirectUI@@IEAAJAEAH@Z
    long FindFocusedChildInRealizedChildren(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePreviousChild@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@HUSize@Foundation@7@PEAPEAUIUIElement@567@@Z
    long GeneratePreviousChild(::Windows::UI::Xaml::Controls::IItemsControl *, int, WindissectOpaque, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePreviousItems@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@AEANAEAUSize@Foundation@7@U897@EEH@Z
    long GeneratePreviousItems(::Windows::UI::Xaml::Controls::IItemsControl *, double &, WindissectOpaque &, WindissectOpaque, unsigned char, unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonSnapPointKeys@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAM0@Z
    long GetCommonSnapPointKeys(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredSize@OrientedVirtualizingPanel@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUSize@Foundation@6@@Z
    virtual long GetDesiredSize(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneratedIndex@OrientedVirtualizingPanel@DirectUI@@IEAAJHPEAUIItemsControl@Controls@Xaml@UI@Windows@@AEAH@Z
    long GetGeneratedIndex(int, ::Windows::UI::Xaml::Controls::IItemsControl *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointsInternal@OrientedVirtualizingPanel@DirectUI@@MEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    virtual long GetIrregularSnapPointsInternal(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointKeys@OrientedVirtualizingPanel@DirectUI@@IEAAJW4Orientation@Controls@Xaml@UI@Windows@@PEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@7@IPEAM22@Z
    long GetRegularSnapPointKeys(int, WindissectOpaque *, unsigned int, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomFactor@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAM@Z
    long GetZoomFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexToGeneratorPositionForStart@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@HAEAHAEAUGeneratorPosition@Primitives@4567@@Z
    long IndexToGeneratorPositionForStart(::Windows::UI::Xaml::Controls::IItemsControl *, int, int &, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontal@OrientedVirtualizingPanel@DirectUI@@IEAAJAEAE@Z
    long IsHorizontal(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInDirectManipulationZoom@OrientedVirtualizingPanel@DirectUI@@IEAAJAEAE@Z
    long IsInDirectManipulationZoom(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInsideViewWindowLocationBased@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIUIElement@Xaml@UI@Windows@@USize@Foundation@6@AEAE@Z
    long IsInsideViewWindowLocationBased(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutsideCacheWindow@OrientedVirtualizingPanel@DirectUI@@IEAAEH@Z
    unsigned char IsOutsideCacheWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureChild@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIUIElement@Xaml@UI@Windows@@USize@Foundation@6@PEAU786@@Z
    long MeasureChild(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCleanupItem@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAUIInspectable@@PEAUIUIElement@Xaml@UI@Windows@@PEAUIItemsControl@Controls@567@AEAE@Z
    long NotifyCleanupItem(IInspectable *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Controls::IItemsControl *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointChanges@OrientedVirtualizingPanel@DirectUI@@IEAAJE@Z
    long NotifySnapPointChanges(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@OrientedVirtualizingPanel@DirectUI@@MEAAJPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@I@Z
    virtual long NotifySnapPointsChanges(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAreScrollSnapPointsRegularChanged@OrientedVirtualizingPanel@DirectUI@@MEAAJXZ
    virtual long OnAreScrollSnapPointsRegularChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanUpVirtualizedItemProtected@OrientedVirtualizingPanel@DirectUI@@MEAAJPEAUICleanUpVirtualizedItemEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long OnCleanUpVirtualizedItemProtected(::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearChildren@OrientedVirtualizingPanel@DirectUI@@MEAAJXZ
    virtual long OnClearChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@OrientedVirtualizingPanel@DirectUI@@MEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long OnItemsChanged(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollChange@OrientedVirtualizingPanel@DirectUI@@IEAAJXZ
    long OnScrollChange();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OrientedVirtualizingPanel@DirectUI@@IEAA@XZ
    OrientedVirtualizingPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVirtualizedCollectionUpdatedEvent@OrientedVirtualizingPanel@DirectUI@@IEAAJURect@Foundation@Windows@@@Z
    long RaiseVirtualizedCollectionUpdatedEvent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRegularSnapPointKeys@OrientedVirtualizingPanel@DirectUI@@IEAAJXZ
    long RefreshRegularSnapPointKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetScrolling@OrientedVirtualizingPanel@DirectUI@@IEAAJXZ
    long ResetScrolling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSnapPointKeys@OrientedVirtualizingPanel@DirectUI@@MEAAJXZ
    virtual long ResetSnapPointKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndVerifyScrollingData@OrientedVirtualizingPanel@DirectUI@@IEAAJUSize@Foundation@Windows@@0UScrollVector@2@@Z
    long SetAndVerifyScrollingData(WindissectOpaque, WindissectOpaque, ::DirectUI::ScrollVector);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapPointsChangeNotificationsRequirement@OrientedVirtualizingPanel@DirectUI@@MEAAJEE@Z
    virtual long SetSnapPointsChangeNotificationsRequirement(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateHorizontalPixelDeltaToOffset@OrientedVirtualizingPanel@DirectUI@@MEAAJAEAN0@Z
    virtual long TranslateHorizontalPixelDeltaToOffset(double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateVerticalPixelDeltaToOffset@OrientedVirtualizingPanel@DirectUI@@MEAAJAEAN0@Z
    virtual long TranslateVerticalPixelDeltaToOffset(double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLogicalScrollData@OrientedVirtualizingPanel@DirectUI@@IEAAJAEAUSize@Foundation@Windows@@U345@N1HE@Z
    long UpdateLogicalScrollData(WindissectOpaque &, WindissectOpaque, double, WindissectOpaque, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScrolling@OrientedVirtualizingPanel@DirectUI@@IEAAJPEAE@Z
    long get_IsScrolling(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OrientedVirtualizingPanel@DirectUI@@MEAA@XZ
    virtual ~OrientedVirtualizingPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRealizedChildren@OrientedVirtualizingPanel@DirectUI@@AEAAJXZ
    long EnsureRealizedChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertContainer@OrientedVirtualizingPanel@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@HPEAUIUIElement@567@EAEAE@Z
    long InsertContainer(::Windows::UI::Xaml::Controls::IItemsControl *, int, ::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalSnapPointsChanged@OrientedVirtualizingPanel@DirectUI@@AEAAJXZ
    long OnHorizontalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdd@OrientedVirtualizingPanel@DirectUI@@AEAAJPEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsAdd(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsRemove@OrientedVirtualizingPanel@DirectUI@@AEAAJPEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsRemove(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsReplace@OrientedVirtualizingPanel@DirectUI@@AEAAJPEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsReplace(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalSnapPointsChanged@OrientedVirtualizingPanel@DirectUI@@AEAAJXZ
    long OnVerticalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassWheelMessageToScrollOwner@OrientedVirtualizingPanel@DirectUI@@AEAAJW4ZoomDirection@2@@Z
    long PassWheelMessageToScrollOwner(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousChildIsGenerated@OrientedVirtualizingPanel@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@HAEAE@Z
    long PreviousChildIsGenerated(::Windows::UI::Xaml::Controls::IItemsControl *, int, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildRange@OrientedVirtualizingPanel@DirectUI@@AEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@HH@Z
    long RemoveChildRange(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNonVirtualizingOffset@OrientedVirtualizingPanel@DirectUI@@AEAAJN@Z
    long SetNonVirtualizingOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldPassWheelMessageToScrollOwner@OrientedVirtualizingPanel@DirectUI@@AEAAJAEAE@Z
    long get_ShouldPassWheelMessageToScrollOwner(unsigned char &);
};
} // namespace DirectUI
