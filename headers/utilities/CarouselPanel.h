#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 89 member(s).
namespace DirectUI {
class CarouselPanel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedRealizedChildSize@CarouselPanel@DirectUI@@QEAAJAEAUSize@Foundation@Windows@@@Z
    long GetEstimatedRealizedChildSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointsImpl@CarouselPanel@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    long GetIrregularSnapPointsImpl(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedFirstChild@CarouselPanel@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetRealizedFirstChild(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointsImpl@CarouselPanel@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    long GetRegularSnapPointsImpl(int, int, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@CarouselPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@CarouselPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelLeft(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@CarouselPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelRight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@CarouselPanel@DirectUI@@UEAAJI@Z
    virtual long MouseWheelUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanUpVirtualizedItem@CarouselPanel@DirectUI@@UEAAJPEAUICleanUpVirtualizedItemEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long OnCleanUpVirtualizedItem(::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanUpVirtualizedItemProtected@CarouselPanel@DirectUI@@UEAAJPEAUICleanUpVirtualizedItemEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long OnCleanUpVirtualizedItemProtected(::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDownImpl@CarouselPanel@DirectUI@@QEAAJXZ
    long PageDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeftImpl@CarouselPanel@DirectUI@@QEAAJXZ
    long PageLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRightImpl@CarouselPanel@DirectUI@@QEAAJXZ
    long PageRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUpImpl@CarouselPanel@DirectUI@@QEAAJXZ
    long PageUpImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@CarouselPanel@DirectUI@@UEAAJIEW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@@Z
    virtual long ScrollIntoView(unsigned int, unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffsetImpl@CarouselPanel@DirectUI@@QEAAJN@Z
    long SetHorizontalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetImpl@CarouselPanel@DirectUI@@QEAAJN@Z
    long SetVerticalOffsetImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HorizontalSnapPointsChanged@CarouselPanel@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HorizontalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VerticalSnapPointsChanged@CarouselPanel@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VerticalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwnerImpl@CarouselPanel@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_ScrollOwnerImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HorizontalSnapPointsChanged@CarouselPanel@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HorizontalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VerticalSnapPointsChanged@CarouselPanel@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VerticalSnapPointsChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CarouselPanel@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CarouselPanel@DirectUI@@IEAA@XZ
    CarouselPanel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomFactor@CarouselPanel@DirectUI@@IEAAJPEAM@Z
    long GetZoomFactor(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInDirectManipulationZoom@CarouselPanel@DirectUI@@IEAAJAEAE@Z
    long IsInDirectManipulationZoom(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CarouselPanel@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearChildren@CarouselPanel@DirectUI@@MEAAJXZ
    virtual long OnClearChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@CarouselPanel@DirectUI@@MEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long OnItemsChanged(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CarouselPanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CarouselPanel@DirectUI@@MEAA@XZ
    virtual ~CarouselPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContainerFromGenerator@CarouselPanel@DirectUI@@AEAAJHPEAUIUIElement@Xaml@UI@Windows@@EAEAE@Z
    long AddContainerFromGenerator(int, ::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOffsetAndSize@CarouselPanel@DirectUI@@AEAAJHAEAUSize@Foundation@Windows@@U345@AEAN@Z
    long CalculateOffsetAndSize(int, WindissectOpaque &, WindissectOpaque, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildIndexFromRealizedIndex@CarouselPanel@DirectUI@@AEAAJHAEAH@Z
    long ChildIndexFromRealizedIndex(int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupContainers@CarouselPanel@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    long CleanupContainers(::Windows::UI::Xaml::Controls::IItemsControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRange@CarouselPanel@DirectUI@@AEAAJHH@Z
    long CleanupRange(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLogicalExtent@CarouselPanel@DirectUI@@AEAAJUSize@Foundation@Windows@@EAEAU345@@Z
    long ComputeLogicalExtent(WindissectOpaque, unsigned char, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLogicalOffset@CarouselPanel@DirectUI@@EEAAJEAEAN0@Z
    virtual long ComputeLogicalOffset(unsigned char, double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtent@CarouselPanel@DirectUI@@EEAAJ_NAEAN@Z
    virtual long ComputePixelExtent(bool, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelOffset@CarouselPanel@DirectUI@@AEAAJEENAEAN@Z
    long ComputePixelOffset(unsigned char, unsigned char, double, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelOffset@CarouselPanel@DirectUI@@EEAAJEAEAN@Z
    virtual long ComputePixelOffset(unsigned char, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelOffsetOfChildAtIndex@CarouselPanel@DirectUI@@AEAAJHAEAN@Z
    long ComputePixelOffsetOfChildAtIndex(int, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTotalRealizedChildDimension@CarouselPanel@DirectUI@@AEAAJAEAMAEAI@Z
    long ComputeTotalRealizedChildDimension(float &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CorrectOffsetForScrollIntoView@CarouselPanel@DirectUI@@AEAAJNEPEAUIItemsControl@Controls@Xaml@UI@Windows@@USize@Foundation@7@AEAN@Z
    long CorrectOffsetForScrollIntoView(double, unsigned char, ::Windows::UI::Xaml::Controls::IItemsControl *, WindissectOpaque, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectRecycledContainers@CarouselPanel@DirectUI@@AEAAJXZ
    long DisconnectRecycledContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOrderedList@CarouselPanel@DirectUI@@AEAAJXZ
    long EnsureOrderedList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRealizedChildren@CarouselPanel@DirectUI@@AEAAJXZ
    long EnsureRealizedChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRealizedItemsNotPartOfOderedListAreNotInVisibleArea@CarouselPanel@DirectUI@@AEAAJURect@Foundation@Windows@@@Z
    long EnsureRealizedItemsNotPartOfOderedListAreNotInVisibleArea(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFocusedChildInRealizedChildren@CarouselPanel@DirectUI@@AEAAJAEAH00@Z
    long FindFocusedChildInRealizedChildren(int &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAndMeasureItemsInBuffer@CarouselPanel@DirectUI@@AEAAJHNEHUSize@Foundation@Windows@@HAEAU345@AEANAEAH@Z
    long GenerateAndMeasureItemsInBuffer(int, double, unsigned char, int, WindissectOpaque, int, WindissectOpaque &, double &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAndMeasureItemsInViewport@CarouselPanel@DirectUI@@AEAAJEAEAHNUSize@Foundation@Windows@@HAEAU345@1AEAN0@Z
    long GenerateAndMeasureItemsInViewport(unsigned char, int &, double, WindissectOpaque, int, WindissectOpaque &, WindissectOpaque, double &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonSnapPointKeys@CarouselPanel@DirectUI@@AEAAJPEAM@Z
    long GetCommonSnapPointKeys(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedOffsetForScrollIntoView@CarouselPanel@DirectUI@@AEAAJNNEAEANAEAH@Z
    long GetEstimatedOffsetForScrollIntoView(double, double, unsigned char, double &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneratedIndex@CarouselPanel@DirectUI@@AEAAJHAEAH@Z
    long GetGeneratedIndex(int, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointKeys@CarouselPanel@DirectUI@@AEAAJW4Orientation@Controls@Xaml@UI@Windows@@PEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@7@IPEAPEAMPEAHPEAM4@Z
    long GetIrregularSnapPointKeys(int, WindissectOpaque *, unsigned int, float * *, int *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPoints@CarouselPanel@DirectUI@@AEAAJEEEPEAPEAMPEAI@Z
    long GetIrregularSnapPoints(unsigned char, unsigned char, unsigned char, float * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfFirstVisibleChild@CarouselPanel@DirectUI@@EEAAJAEAUSize@Foundation@Windows@@@Z
    virtual long GetSizeOfFirstVisibleChild(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexToGeneratorPositionForStart@CarouselPanel@DirectUI@@AEAAJHAEAHAEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    long IndexToGeneratorPositionForStart(int, int &, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertContainer@CarouselPanel@DirectUI@@AEAAJHPEAUIUIElement@Xaml@UI@Windows@@EAEAE@Z
    long InsertContainer(int, ::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutOfVisibleRange@CarouselPanel@DirectUI@@AEAAEH@Z
    unsigned char IsOutOfVisibleRange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureChild@CarouselPanel@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@USize@Foundation@6@PEAU786@@Z
    long MeasureChild(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCleanupItem@CarouselPanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIUIElement@Xaml@UI@Windows@@PEAUIItemsControl@Controls@567@AEAE@Z
    long NotifyCleanupItem(IInspectable *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Controls::IItemsControl *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@CarouselPanel@DirectUI@@AEAAJPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@I@Z
    long NotifySnapPointsChanges(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@CarouselPanel@DirectUI@@AEAAJE@Z
    long NotifySnapPointsChanges(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalSnapPointsChanged@CarouselPanel@DirectUI@@AEAAJXZ
    long OnHorizontalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdd@CarouselPanel@DirectUI@@AEAAJPEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsAdd(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsRemove@CarouselPanel@DirectUI@@AEAAJPEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsRemove(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsReplace@CarouselPanel@DirectUI@@AEAAJPEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsReplace(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollChange@CarouselPanel@DirectUI@@AEAAJXZ
    long OnScrollChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalSnapPointsChanged@CarouselPanel@DirectUI@@AEAAJXZ
    long OnVerticalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshIrregularSnapPointKeys@CarouselPanel@DirectUI@@AEAAJXZ
    long RefreshIrregularSnapPointKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildRange@CarouselPanel@DirectUI@@AEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@HH@Z
    long RemoveChildRange(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetScrollData@CarouselPanel@DirectUI@@AEAAJXZ
    long ResetScrollData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetScrolling@CarouselPanel@DirectUI@@AEAAJXZ
    long ResetScrolling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSnapPointKeys@CarouselPanel@DirectUI@@AEAAJXZ
    long ResetSnapPointKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndVerifyScrollingData@CarouselPanel@DirectUI@@AEAAJUSize@Foundation@Windows@@0UScrollVector@2@@Z
    long SetAndVerifyScrollingData(WindissectOpaque, WindissectOpaque, ::DirectUI::ScrollVector);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapPointsChangeNotificationsRequirement@CarouselPanel@DirectUI@@AEAAJEE@Z
    long SetSnapPointsChangeNotificationsRequirement(unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationState@CarouselPanel@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    long SetVirtualizationState(::Windows::UI::Xaml::Controls::IItemsControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZoomFactor@CarouselPanel@DirectUI@@EEAAJM@Z
    virtual long SetZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateHorizontalPixelDeltaToOffset@CarouselPanel@DirectUI@@AEAAJNAEAN@Z
    long TranslateHorizontalPixelDeltaToOffset(double, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateVerticalPixelDeltaToOffset@CarouselPanel@DirectUI@@AEAAJNAEAN@Z
    long TranslateVerticalPixelDeltaToOffset(double, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInManipulation@CarouselPanel@DirectUI@@EEAAJEEN@Z
    virtual long UpdateInManipulation(unsigned char, unsigned char, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLogicalScrollData@CarouselPanel@DirectUI@@AEAAJAEAUSize@Foundation@Windows@@U345@N1H@Z
    long UpdateLogicalScrollData(WindissectOpaque &, WindissectOpaque, double, WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapIndex@CarouselPanel@DirectUI@@AEAAHH@Z
    int WrapIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getInternalOffset@CarouselPanel@DirectUI@@AEAANXZ
    double getInternalOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScrolling@CarouselPanel@DirectUI@@AEAAJPEAE@Z
    long get_IsScrolling(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@CarouselPanel@DirectUI@@EEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RealizedChildren@CarouselPanel@DirectUI@@AEAAJPEAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_RealizedChildren(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVirtualizing@CarouselPanel@DirectUI@@AEAAJE@Z
    long put_IsVirtualizing(unsigned char);
};
} // namespace DirectUI
