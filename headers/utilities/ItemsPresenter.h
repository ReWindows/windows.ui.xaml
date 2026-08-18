#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 106 member(s).
namespace DirectUI {
class ItemsPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ItemsPresenter@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLogicalOffset@ItemsPresenter@DirectUI@@UEAAJEAEAN0@Z
    virtual long ComputeLogicalOffset(unsigned char, double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtent@ItemsPresenter@DirectUI@@UEAAJ_NAEAN@Z
    virtual long ComputePixelExtent(bool, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelOffset@ItemsPresenter@DirectUI@@UEAAJEAEAN@Z
    virtual long ComputePixelOffset(unsigned char, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayLoadFooter@ItemsPresenter@DirectUI@@QEAAJPEAURect@Foundation@Windows@@E@Z
    long DelayLoadFooter(WindissectOpaque *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ItemsPresenter@DirectUI@@SAJPEAVCItemsPresenter@@@Z
    static long Dispose(CItemsPresenter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateAndSetNonClippingBehavior@ItemsPresenter@DirectUI@@QEAA_N_N@Z
    bool EvaluateAndSetNonClippingBehavior(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstVisiblePart@ItemsPresenter@DirectUI@@QEAAJPEAW4ItemsPresenterParts@12@PEAN@Z
    long GetFirstVisiblePart(int *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderSize@ItemsPresenter@DirectUI@@QEAAJAEAUSize@Foundation@Windows@@@Z
    long GetHeaderSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointsImpl@ItemsPresenter@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    long GetIrregularSnapPointsImpl(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointsImpl@ItemsPresenter@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    long GetRegularSnapPointsImpl(int, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfContainer@ItemsPresenter@DirectUI@@QEAAJAEAUSize@Foundation@Windows@@@Z
    long GetSizeOfContainer(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfFirstVisibleChild@ItemsPresenter@DirectUI@@UEAAJAEAUSize@Foundation@Windows@@@Z
    virtual long GetSizeOfFirstVisibleChild(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateScrollInfoImpl@ItemsPresenter@DirectUI@@UEAAJXZ
    virtual long InvalidateScrollInfoImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInChildInvalidateMeasure@ItemsPresenter@DirectUI@@UEAAJAEAE@Z
    virtual long IsInChildInvalidateMeasure(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInDirectManipulationZoom@ItemsPresenter@DirectUI@@UEAAJAEAE@Z
    virtual long IsInDirectManipulationZoom(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDownImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long LineDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeftImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long LineLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRightImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long LineRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUpImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long LineUpImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFooter@ItemsPresenter@DirectUI@@QEAAJE@Z
    long LoadFooter(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleImpl@ItemsPresenter@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    long MakeVisibleImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ItemsPresenter@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@ItemsPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@ItemsPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelLeft(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@ItemsPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelRight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@ItemsPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHorizontalOffsetChanging@ItemsPresenter@DirectUI@@UEAAJNN@Z
    virtual long NotifyHorizontalOffsetChanging(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutRefreshed@ItemsPresenter@DirectUI@@UEAAJXZ
    virtual long NotifyLayoutRefreshed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVerticalOffsetChanging@ItemsPresenter@DirectUI@@UEAAJNN@Z
    virtual long NotifyVerticalOffsetChanging(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ItemsPresenter@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapPointsChanged@ItemsPresenter@DirectUI@@QEAAJW4DMMotionTypes@2@@Z
    long OnSnapPointsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDownImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long PageDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeftImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long PageLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRightImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long PageRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUpImpl@ItemsPresenter@DirectUI@@QEAAJXZ
    long PageUpImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPureInertiaInputMessage@ItemsPresenter@DirectUI@@UEAAJW4ZoomDirection@2@@Z
    virtual long ProcessPureInertiaInputMessage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@ItemsPresenter@DirectUI@@QEAAJIEENW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@@Z
    long ScrollIntoView(unsigned int, unsigned char, unsigned char, double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToHorizontalOffsetImpl@ItemsPresenter@DirectUI@@UEAAJN@Z
    virtual long ScrollToHorizontalOffsetImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToVerticalOffsetImpl@ItemsPresenter@DirectUI@@UEAAJN@Z
    virtual long ScrollToVerticalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffsetImpl@ItemsPresenter@DirectUI@@QEAAJN@Z
    long SetHorizontalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetImpl@ItemsPresenter@DirectUI@@QEAAJN@Z
    long SetVerticalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZoomFactor@ItemsPresenter@DirectUI@@UEAAJM@Z
    virtual long SetZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInManipulation@ItemsPresenter@DirectUI@@UEAAJEEN@Z
    virtual long UpdateInManipulation(unsigned char, unsigned char, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility@ItemsPresenter@DirectUI@@UEAAEW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual unsigned char WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility@ItemsPresenter@DirectUI@@QEAAEW4Orientation@Controls@Xaml@UI@Windows@@AEAV?$ComPtr@UIPanel@Controls@Xaml@UI@Windows@@@ctl@@@Z
    unsigned char WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HorizontalSnapPointsChanged@ItemsPresenter@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HorizontalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VerticalSnapPointsChanged@ItemsPresenter@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VerticalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreVerticalSnapPointsRegularImpl@ItemsPresenter@DirectUI@@QEAAJPEAE@Z
    long get_AreVerticalSnapPointsRegularImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHorizontallyScrollImpl@ItemsPresenter@DirectUI@@QEAAJPEAE@Z
    long get_CanHorizontallyScrollImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanVerticallyScrollImpl@ItemsPresenter@DirectUI@@QEAAJPEAE@Z
    long get_CanVerticallyScrollImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PaddingInternal@ItemsPresenter@DirectUI@@QEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    long get_PaddingInternal(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@ItemsPresenter@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollInfo@ItemsPresenter@DirectUI@@UEAAJPEAPEAUIScrollInfo@2@@Z
    virtual long get_ScrollInfo(::DirectUI::IScrollInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwnerImpl@ItemsPresenter@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_ScrollOwnerImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomFactorImpl@ItemsPresenter@DirectUI@@UEAAJPEAM@Z
    virtual long get_ZoomFactorImpl(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHorizontallyScrollImpl@ItemsPresenter@DirectUI@@QEAAJE@Z
    long put_CanHorizontallyScrollImpl(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanVerticallyScrollImpl@ItemsPresenter@DirectUI@@QEAAJE@Z
    long put_CanVerticallyScrollImpl(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollInfo@ItemsPresenter@DirectUI@@UEAAJPEAUIScrollInfo@2@@Z
    virtual long put_ScrollInfo(::DirectUI::IScrollInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwnerImpl@ItemsPresenter@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_ScrollOwnerImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HorizontalSnapPointsChanged@ItemsPresenter@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HorizontalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VerticalSnapPointsChanged@ItemsPresenter@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VerticalSnapPointsChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ItemsPresenter@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsPresenter@DirectUI@@IEAA@XZ
    ItemsPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ItemsPresenter@DirectUI@@IEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ItemsPresenter@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewChanged@ItemsPresenter@DirectUI@@IEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewChanged(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ItemsPresenter@DirectUI@@IEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemsPresenter@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsPresenter@DirectUI@@MEAA@XZ
    virtual ~ItemsPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreScrollSnapPointsRegular@ItemsPresenter@DirectUI@@AEAAJEPEAE@Z
    long AreScrollSnapPointsRegular(unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateArrangeRect@ItemsPresenter@DirectUI@@AEAAJUSize@Foundation@Windows@@AEAV?$ComPtr@UIPanel@Controls@Xaml@UI@Windows@@@ctl@@PEAURect@45@22@Z
    long CalculateArrangeRect(WindissectOpaque, WindissectOpaque &, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAlignmentSize@ItemsPresenter@DirectUI@@AEAAJUSize@Foundation@Windows@@0PEAU345@@Z
    long ComputeAlignmentSize(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStartingOffset@ItemsPresenter@DirectUI@@AEAAJHNNPEAN@Z
    long ComputeStartingOffset(int, double, double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecreaseSizeForPaddingInNonVirtualizingDimension@ItemsPresenter@DirectUI@@AEAAJPEAUSize@Foundation@Windows@@@Z
    long DecreaseSizeForPaddingInNonVirtualizingDimension(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonSnapPointKeys@ItemsPresenter@DirectUI@@AEAAJPEAN000@Z
    long GetCommonSnapPointKeys(double *, double *, double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderAndLeadingPaddingPixelSize@ItemsPresenter@DirectUI@@AEAAJEAEAN@Z
    long GetHeaderAndLeadingPaddingPixelSize(unsigned char, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderAndLeadingPaddingPixelSize@ItemsPresenter@DirectUI@@AEAAJENAEAN@Z
    long GetHeaderAndLeadingPaddingPixelSize(unsigned char, double, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerPanelOffset@ItemsPresenter@DirectUI@@AEAAJEPEAN@Z
    long GetInnerPanelOffset(unsigned char, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerPanelsScrollableDimension@ItemsPresenter@DirectUI@@AEAAJEPEAN@Z
    long GetInnerPanelsScrollableDimension(unsigned char, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelSize@ItemsPresenter@DirectUI@@AEAAJAEAUSize@Foundation@Windows@@@Z
    long GetPanelSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointKeys@ItemsPresenter@DirectUI@@AEAAJEPEAMPEAN111@Z
    long GetRegularSnapPointKeys(unsigned char, float *, double *, double *, double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSentinelItemSize@ItemsPresenter@DirectUI@@AEAAJHEAEAN@Z
    long GetSentinelItemSize(int, unsigned char, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomFactor@ItemsPresenter@DirectUI@@AEAAJPEAM@Z
    long GetZoomFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollSnapPointsInfoEvents@ItemsPresenter@DirectUI@@AEAAJE@Z
    long HookScrollSnapPointsInfoEvents(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncreaseSizeForPaddingInNonVirtualizingDimension@ItemsPresenter@DirectUI@@AEAAJPEAUSize@Foundation@Windows@@@Z
    long IncreaseSizeForPaddingInNonVirtualizingDimension(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontal@ItemsPresenter@DirectUI@@AEAAJAEAE@Z
    long IsHorizontal(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointChanges@ItemsPresenter@DirectUI@@AEAAJE@Z
    long NotifySnapPointChanges(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@ItemsPresenter@DirectUI@@AEAAJXZ
    long NotifySnapPointsChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsInfoPanelChanged@ItemsPresenter@DirectUI@@AEAAJXZ
    long NotifySnapPointsInfoPanelChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalSnapPointsChanged@ItemsPresenter@DirectUI@@AEAAJXZ
    long OnHorizontalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollChange@ItemsPresenter@DirectUI@@AEAAJXZ
    long OnScrollChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalSnapPointsChanged@ItemsPresenter@DirectUI@@AEAAJXZ
    long OnVerticalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassWheelMessageToScrollOwner@ItemsPresenter@DirectUI@@AEAAJW4ZoomDirection@2@@Z
    long PassWheelMessageToScrollOwner(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshIrregularSnapPointKeys@ItemsPresenter@DirectUI@@AEAAJXZ
    long RefreshIrregularSnapPointKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRegularSnapPointKeys@ItemsPresenter@DirectUI@@AEAAJXZ
    long RefreshRegularSnapPointKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSnapPointKeys@ItemsPresenter@DirectUI@@AEAAJXZ
    long ResetSnapPointKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndVerifyScrollingData@ItemsPresenter@DirectUI@@AEAAJUSize@Foundation@Windows@@0UScrollVector@2@@Z
    long SetAndVerifyScrollingData(WindissectOpaque, WindissectOpaque, ::DirectUI::ScrollVector);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapPointsChangeNotificationsRequirement@ItemsPresenter@DirectUI@@AEAAJEE@Z
    long SetSnapPointsChangeNotificationsRequirement(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateHorizontalPixelDeltaToOffset@ItemsPresenter@DirectUI@@AEAAJNAEAN0@Z
    long TranslateHorizontalPixelDeltaToOffset(double, double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslatePixelDeltaToOffset@ItemsPresenter@DirectUI@@AEAAJNEAEAN0@Z
    long TranslatePixelDeltaToOffset(double, unsigned char, double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateVerticalPixelDeltaToOffset@ItemsPresenter@DirectUI@@AEAAJNAEAN0@Z
    long TranslateVerticalPixelDeltaToOffset(double, double &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollSnapPointsInfoEvents@ItemsPresenter@DirectUI@@AEAAJE@Z
    long UnhookScrollSnapPointsInfoEvents(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollData@ItemsPresenter@DirectUI@@AEAAJEN@Z
    long UpdateScrollData(unsigned char, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Panel@ItemsPresenter@DirectUI@@AEAAJPEAPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    long get_Panel(::Windows::UI::Xaml::Controls::IPanel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldPassWheelMessageToScrollOwner@ItemsPresenter@DirectUI@@AEAAJAEAE@Z
    long get_ShouldPassWheelMessageToScrollOwner(unsigned char &);
};
} // namespace DirectUI
