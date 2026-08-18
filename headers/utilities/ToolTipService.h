#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 41 member(s).
namespace DirectUI {
class ToolTipService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToNestedOwners@ToolTipService@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    static long AddToNestedOwners(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAutomaticToolTip@ToolTipService@DirectUI@@SAJXZ
    static long CancelAutomaticToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseToolTipInternal@ToolTipService@DirectUI@@SAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    static long CloseToolTipInternal(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandlersAttachedToRootElement@ToolTipService@DirectUI@@SAJPEAVVisualTree@@@Z
    static long EnsureHandlersAttachedToRootElement(VisualTree *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualToolTipObjectStatic@ToolTipService@DirectUI@@SAXPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIToolTip@Controls@456@@Z
    static void GetActualToolTipObjectStatic(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::IToolTip * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@ToolTipService@DirectUI@@SAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    static long GetOwner(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipOwnersBoundary@ToolTipService@DirectUI@@SAJAEBV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@PEAUXRECTF_RB@@@Z
    static long GetToolTipOwnersBoundary(WindissectOpaque const &, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleToolTipSafeZone@ToolTipService@DirectUI@@SAJUPoint@Foundation@Windows@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@AEBV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@7@@Z
    static long HandleToolTipSafeZone(WindissectOpaque, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeepToolTipOpenFeatureEnabled@ToolTipService@DirectUI@@SA_NXZ
    static bool IsKeepToolTipOpenFeatureEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerGotFocusFromCore@ToolTipService@DirectUI@@SAJPEAVCDependencyObject@@PEAVCRoutedEventArgs@@@Z
    static long OnOwnerGotFocusFromCore(CDependencyObject *, CRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerLostFocusFromCore@ToolTipService@DirectUI@@SAJPEAVCDependencyObject@@PEAVCRoutedEventArgs@@@Z
    static long OnOwnerLostFocusFromCore(CDependencyObject *, CRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerPointerEnteredFromCore@ToolTipService@DirectUI@@SAJPEAVCDependencyObject@@PEAVCPointerEventArgs@@@Z
    static long OnOwnerPointerEnteredFromCore(CDependencyObject *, CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerPointerExitedOrLostOrCanceledFromCore@ToolTipService@DirectUI@@SAJPEAVCDependencyObject@@PEAVCPointerEventArgs@@@Z
    static long OnOwnerPointerExitedOrLostOrCanceledFromCore(CDependencyObject *, CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPublicRootRemoved@ToolTipService@DirectUI@@SAXPEAVCUIElement@@@Z
    static void OnPublicRootRemoved(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToolTipChanged@ToolTipService@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@AEBUPropertyChangedParams@@@Z
    static long OnToolTipChanged(::Windows::UI::Xaml::IDependencyObject *, PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeInvalidNestedOwners@ToolTipService@DirectUI@@SAJXZ
    static long PurgeInvalidNestedOwners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToolTip@ToolTipService@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIFrameworkElement@456@PEAUIInspectable@@_N@Z
    static long RegisterToolTip(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IFrameworkElement *, IInspectable *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToolTipFromCore@ToolTipService@DirectUI@@SAJPEAVCDependencyObject@@PEAVCFrameworkElement@@@Z
    static long RegisterToolTipFromCore(CDependencyObject *, CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterToolTip@ToolTipService@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIFrameworkElement@456@_N@Z
    static long UnregisterToolTip(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IFrameworkElement *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterToolTipFromCore@ToolTipService@DirectUI@@SAJPEAVCDependencyObject@@PEAVCFrameworkElement@@@Z
    static long UnregisterToolTipFromCore(CDependencyObject *, CFrameworkElement *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAutomaticToolTip@ToolTipService@DirectUI@@CAJPEAUIInspectable@@0@Z
    static long CloseAutomaticToolTip(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToToolTip@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAPEAUIToolTip@Controls@Xaml@UI@Windows@@@Z
    static long ConvertToToolTip(IInspectable *, ::Windows::UI::Xaml::Controls::IToolTip * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerFromOwner@ToolTipService@DirectUI@@CAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIFrameworkElement@456@@Z
    static long GetContainerFromOwner(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherQueueForCurrentThread@ToolTipService@DirectUI@@CAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    static long GetDispatcherQueueForCurrentThread(::Windows::System::IDispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialShowDelay@ToolTipService@DirectUI@@CAJW4AutomaticToolTipInputMode@2@EPEAUTimeSpan@Foundation@Windows@@@Z
    static long GetInitialShowDelay(int, unsigned char, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointInRect@ToolTipService@DirectUI@@CA_NAEBUPoint@Foundation@Windows@@AEBUXRECTF_RB@@@Z
    static bool IsPointInRect(WindissectOpaque const &, XRECTF_RB const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpecialKey@ToolTipService@DirectUI@@CAEW4VirtualKey@System@Windows@@@Z
    static unsigned char IsSpecialKey(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsToolTipInSafeZone@ToolTipService@DirectUI@@CA_NAEBUPoint@Foundation@Windows@@AEBUXRECTF_RB@@1@Z
    static bool IsToolTipInSafeZone(WindissectOpaque const &, XRECTF_RB const &, XRECTF_RB const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerEnterInternal@ToolTipService@DirectUI@@CAJPEAUIInspectable@@0W4AutomaticToolTipInputMode@2@@Z
    static long OnOwnerEnterInternal(IInspectable *, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerGotFocus@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    static long OnOwnerGotFocus(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerLeaveInternal@ToolTipService@DirectUI@@CAJPEAUIInspectable@@@Z
    static long OnOwnerLeaveInternal(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerLostFocus@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    static long OnOwnerLostFocus(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerPointerEntered@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    static long OnOwnerPointerEntered(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerPointerExitedOrLostOrCanceled@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    static long OnOwnerPointerExitedOrLostOrCanceled(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualPointerMoved@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    static long OnRootVisualPointerMoved(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualSizeChanged@ToolTipService@DirectUI@@CAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    static long OnRootVisualSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSafeZoneCheck@ToolTipService@DirectUI@@CAJXZ
    static long OnSafeZoneCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAutomaticToolTip@ToolTipService@DirectUI@@CAJPEAUIInspectable@@0@Z
    static long OpenAutomaticToolTip(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromNestedOwners@ToolTipService@DirectUI@@CAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    static long RemoveFromNestedOwners(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunPendingOwnerListOperations@ToolTipService@DirectUI@@CAJPEAVToolTipServiceMetadata@2@@Z
    static long RunPendingOwnerListOperations(ToolTipServiceMetadata *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSafeZoneCheckTimer@ToolTipService@DirectUI@@CAJPEAVToolTipServiceMetadata@2@@Z
    static long StartSafeZoneCheckTimer(ToolTipServiceMetadata *);
};
} // namespace DirectUI
