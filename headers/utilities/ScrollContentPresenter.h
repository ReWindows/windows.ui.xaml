#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 94 member(s).
namespace DirectUI {
class ScrollContentPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAutomationPeerChildrenReversed@ScrollContentPresenter@DirectUI@@UEAAEXZ
    virtual unsigned char AreAutomationPeerChildrenReversed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreScrollOffsetsInSync@ScrollContentPresenter@DirectUI@@QEAAJAEAE@Z
    long AreScrollOffsetsInSync(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ScrollContentPresenter@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeScrollOffsetWithMinimalScroll@ScrollContentPresenter@DirectUI@@SAJMMMMPEAM@Z
    static long ComputeScrollOffsetWithMinimalScroll(float, float, float, float, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@ScrollContentPresenter@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderOwnership@ScrollContentPresenter@DirectUI@@QEAAJPEAVDependencyObject@2@PEAE1111@Z
    long GetHeaderOwnership(::DirectUI::DependencyObject *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@ScrollContentPresenter@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupScrollingComponents@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long HookupScrollingComponents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollClient@ScrollContentPresenter@DirectUI@@QEAAJPEAE@Z
    long IsScrollClient(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDownImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long LineDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeftImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long LineLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRightImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long LineRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUpImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long LineUpImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    long MakeVisibleImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ScrollContentPresenter@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@ScrollContentPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@ScrollContentPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelLeft(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@ScrollContentPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelRight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@ScrollContentPresenter@DirectUI@@UEAAJI@Z
    virtual long MouseWheelUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ScrollContentPresenter@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanging@ScrollContentPresenter@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long OnContentChanging(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@ScrollContentPresenter@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDownImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long PageDownImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeftImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long PageLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRightImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long PageRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUpImpl@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long PageUpImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopOverride@ScrollContentPresenter@DirectUI@@UEAAJPEAVDependencyObject@2@00_NPEAPEAV32@PEAE@Z
    virtual long ProcessCandidateTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@ScrollContentPresenter@DirectUI@@UEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshUseOfActualSizeAsExtent@ScrollContentPresenter@DirectUI@@QEAAJPEAVUIElement@2@@Z
    long RefreshUseOfActualSizeAsExtent(::DirectUI::UIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffsetImpl@ScrollContentPresenter@DirectUI@@QEAAJN@Z
    long SetHorizontalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetsWithExtents@ScrollContentPresenter@DirectUI@@QEAAJNNNN@Z
    long SetOffsetsWithExtents(double, double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetImpl@ScrollContentPresenter@DirectUI@@QEAAJN@Z
    long SetVerticalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZoomFactor@ScrollContentPresenter@DirectUI@@QEAAJM@Z
    long SetZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentHeaders@ScrollContentPresenter@DirectUI@@QEAAJXZ
    long UnparentHeaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInputOffset@ScrollContentPresenter@DirectUI@@SAJNNNPEAN@Z
    static long ValidateInputOffset(double, double, double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHorizontallyScrollImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAE@Z
    long get_CanHorizontallyScrollImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanVerticallyScrollImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAE@Z
    long get_CanVerticallyScrollImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentHeightImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_ExtentHeightImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentWidthImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_ExtentWidthImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffsetImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_HorizontalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHorizontalOffsetImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_MinHorizontalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinVerticalOffsetImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_MinVerticalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwnerImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_ScrollOwnerImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffsetImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_VerticalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportHeightImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_ViewportHeightImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportWidthImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAN@Z
    long get_ViewportWidthImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHorizontallyScrollImpl@ScrollContentPresenter@DirectUI@@QEAAJE@Z
    long put_CanHorizontallyScrollImpl(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanVerticallyScrollImpl@ScrollContentPresenter@DirectUI@@QEAAJE@Z
    long put_CanVerticallyScrollImpl(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LeftHeader@ScrollContentPresenter@DirectUI@@QEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAVScrollViewer@2@@Z
    long put_LeftHeader(WindissectOpaque const &, ::DirectUI::ScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwnerImpl@ScrollContentPresenter@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_ScrollOwnerImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TopHeader@ScrollContentPresenter@DirectUI@@QEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAVScrollViewer@2@@Z
    long put_TopHeader(WindissectOpaque const &, ::DirectUI::ScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TopLeftHeader@ScrollContentPresenter@DirectUI@@QEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAVScrollViewer@2@@Z
    long put_TopLeftHeader(WindissectOpaque const &, ::DirectUI::ScrollViewer *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ScrollContentPresenter@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildrenCleared@ScrollContentPresenter@DirectUI@@MEAAJXZ
    virtual long OnChildrenCleared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ScrollContentPresenter@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollContentPresenter@DirectUI@@IEAA@XZ
    ScrollContentPresenter();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollContentPresenter@DirectUI@@MEAA@XZ
    virtual ~ScrollContentPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHeader@ScrollContentPresenter@DirectUI@@AEAAJAEBV?$ComPtr@UIScrollViewer@Controls@Xaml@UI@Windows@@@ctl@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@4@11EE@Z
    long AddHeader(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeTabbingElements@ScrollContentPresenter@DirectUI@@AEAAJPEAVDependencyObject@2@0PEAE1111111@Z
    long AnalyzeTabbingElements(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseActualHeightAsExtent@ScrollContentPresenter@DirectUI@@CAJPEAUIScrollOwner@2@PEAUIScrollViewer@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@678@PEA_N@Z
    static long CanUseActualHeightAsExtent(::DirectUI::IScrollOwner *, ::Windows::UI::Xaml::Controls::IScrollViewer *, ::Windows::UI::Xaml::IFrameworkElement *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseActualWidthAsExtent@ScrollContentPresenter@DirectUI@@CAJPEAUIScrollOwner@2@PEAUIScrollViewer@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@678@PEA_N@Z
    static long CanUseActualWidthAsExtent(::DirectUI::IScrollOwner *, ::Windows::UI::Xaml::Controls::IScrollViewer *, ::Windows::UI::Xaml::IFrameworkElement *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceOffsets@ScrollContentPresenter@DirectUI@@AEAAJPEAE@Z
    long CoerceOffsets(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectChild@ScrollContentPresenter@DirectUI@@AEAAJEEEEPEAV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@@Z
    long GetDirectChild(unsigned char, unsigned char, unsigned char, unsigned char, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementPrivate@ScrollContentPresenter@DirectUI@@AEAAJPEAE000@Z
    long GetFirstFocusableElementPrivate(unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullScreenPageBottomAppBarHeight@ScrollContentPresenter@DirectUI@@AEAAJPEAVPage@2@PEAN@Z
    long GetFullScreenPageBottomAppBarHeight(::DirectUI::Page *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementPrivate@ScrollContentPresenter@DirectUI@@AEAAJPEAE000@Z
    long GetLastFocusableElementPrivate(unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextFocusableElementPrivate@ScrollContentPresenter@DirectUI@@AEAAJEEEEPEAE000PEAV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@@Z
    long GetNextFocusableElementPrivate(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned char *, unsigned char *, unsigned char *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousFocusableElementPrivate@ScrollContentPresenter@DirectUI@@AEAAJEEEEPEAE000PEAV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@@Z
    long GetPreviousFocusableElementPrivate(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned char *, unsigned char *, unsigned char *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryChild@ScrollContentPresenter@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetPrimaryChild(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabIndex@ScrollContentPresenter@DirectUI@@AEAAJV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@PEAEPEAH@Z
    long GetTabIndex(WindissectOpaque, unsigned char *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomedHeadersSize@ScrollContentPresenter@DirectUI@@AEAAJPEAUXSIZEF@@@Z
    long GetZoomedHeadersSize(XSIZEF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDirectChildWithTabIndexSet@ScrollContentPresenter@DirectUI@@AEAAJPEAE@Z
    long HasDirectChildWithTabIndexSet(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildInternal@ScrollContentPresenter@DirectUI@@AEAAJIAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long InsertChildInternal(unsigned int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAncestorOfAndMostAncestorPageBetween@ScrollContentPresenter@DirectUI@@AEAAJPEAVDependencyObject@2@PEAEPEAPEAVPage@2@@Z
    long IsAncestorOfAndMostAncestorPageBetween(::DirectUI::DependencyObject *, unsigned char *, ::DirectUI::Page * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ScrollContentPresenter@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopPrivate@ScrollContentPresenter@DirectUI@@AEAAJPEAVDependencyObject@2@_NEEEEPEAPEAV32@PEAE@Z
    long ProcessTabStopPrivate(::DirectUI::DependencyObject *, bool, unsigned char, unsigned char, unsigned char, unsigned char, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildInternal@ScrollContentPresenter@DirectUI@@AEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long RemoveChildInternal(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLeftHeader@ScrollContentPresenter@DirectUI@@AEAAJPEAVScrollViewer@2@_N@Z
    long RemoveLeftHeader(::DirectUI::ScrollViewer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTopHeader@ScrollContentPresenter@DirectUI@@AEAAJPEAVScrollViewer@2@_N@Z
    long RemoveTopHeader(::DirectUI::ScrollViewer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTopLeftHeader@ScrollContentPresenter@DirectUI@@AEAAJPEAVScrollViewer@2@_N@Z
    long RemoveTopLeftHeader(::DirectUI::ScrollViewer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPrimaryChildGlobalScaleFactor@ScrollContentPresenter@DirectUI@@AEAAJXZ
    long ResetPrimaryChildGlobalScaleFactor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffsetPrivate@ScrollContentPresenter@DirectUI@@AEAAJNPEA_NPEAN1@Z
    long SetHorizontalOffsetPrivate(double, bool *, double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetPrivate@ScrollContentPresenter@DirectUI@@AEAAJNPEA_NPEAN1@Z
    long SetVerticalOffsetPrivate(double, bool *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartUseOfActualHeightAsExtent@ScrollContentPresenter@DirectUI@@AEAAXXZ
    void StartUseOfActualHeightAsExtent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartUseOfActualWidthAsExtent@ScrollContentPresenter@DirectUI@@AEAAXXZ
    void StartUseOfActualWidthAsExtent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopUseOfActualHeightAsExtent@ScrollContentPresenter@DirectUI@@AEAAXXZ
    void StopUseOfActualHeightAsExtent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopUseOfActualWidthAsExtent@ScrollContentPresenter@DirectUI@@AEAAXXZ
    void StopUseOfActualWidthAsExtent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreLayoutCycleWarningContext@ScrollContentPresenter@DirectUI@@AEAAXMMMMPEAVScrollData@2@@Z
    void StoreLayoutCycleWarningContext(float, float, float, float, ::DirectUI::ScrollData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClip@ScrollContentPresenter@DirectUI@@AEAAJUSize@Foundation@Windows@@@Z
    long UpdateClip(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyScrollData@ScrollContentPresenter@DirectUI@@AEAAJUSize@Foundation@Windows@@0@Z
    long VerifyScrollData(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LeftHeader@ScrollContentPresenter@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_LeftHeader(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollData@ScrollContentPresenter@DirectUI@@AEAAJPEAPEAVScrollData@2@@Z
    long get_ScrollData(::DirectUI::ScrollData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopHeader@ScrollContentPresenter@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_TopHeader(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopLeftHeader@ScrollContentPresenter@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_TopLeftHeader(::Windows::UI::Xaml::IUIElement * *);
};
} // namespace DirectUI
