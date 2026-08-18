#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 58 member(s).
namespace DirectUI {
class ToolTip {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@ToolTip@DirectUI@@QEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long GetContainer(::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointInSafeZone@ToolTip@DirectUI@@QEAAJAEBUtagPOINT@@@Z
    long HandlePointInSafeZone(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointInSafeZone@ToolTip@DirectUI@@QEAAJAEBUPoint@Foundation@Windows@@@Z
    long HandlePointInSafeZone(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPlacement@ToolTip@DirectUI@@QEAAJPEAUtagRECT@@@Z
    long PerformPlacement(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAutomaticStatusFromOpenToolTip@ToolTip@DirectUI@@QEAAJXZ
    long RemoveAutomaticStatusFromOpenToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionPopup@ToolTip@DirectUI@@QEAAJXZ
    long RepositionPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacementOverrides@ToolTip@DirectUI@@QEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long SetPlacementOverrides(::Windows::UI::Xaml::IFrameworkElement *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ToolTip@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ToolTip@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ToolTip@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ToolTip@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ToolTip@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ToolTip@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ToolTip@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ToolTip@DirectUI@@IEAA@XZ
    ToolTip();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToolTip@DirectUI@@MEAA@XZ
    virtual ~ToolTip();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCoreWindowHandler@ToolTip@DirectUI@@AEAAJXZ
    long AddCoreWindowHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddXamlIslandRootHandler@ToolTip@DirectUI@@AEAAJPEAVUIElement@2@@Z
    long AddXamlIslandRootHandler(::DirectUI::UIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToPopupParent@ToolTip@DirectUI@@AEAAJXZ
    long AttachToPopupParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTooltipClip@ToolTip@DirectUI@@AEAAJPEAUtagRECT@@NN@Z
    long CalculateTooltipClip(tagRECT *, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ToolTip@DirectUI@@AEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFinishClosing@ToolTip@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long ForceFinishClosing(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardOwnerThemePropertyToToolTip@ToolTip@DirectUI@@AEAAJXZ
    long ForwardOwnerThemePropertyToToolTip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindow@ToolTip@DirectUI@@CAJPEAPEAUICoreWindow@Core@UI@Windows@@@Z
    static long GetCoreWindow(::Windows::UI::Core::ICoreWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementRectInWindowCoordinates@ToolTip@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long GetPlacementRectInWindowCoordinates(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@ToolTip@DirectUI@@AEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long GetTarget(::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlIslandRootElement@ToolTip@DirectUI@@AEAAJPEAPEAVUIElement@2@@Z
    long GetXamlIslandRootElement(::DirectUI::UIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupCoreWindowOrXamlIslandRoot@ToolTip@DirectUI@@AEAAJXZ
    long HookupCoreWindowOrXamlIslandRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupOwnerLayoutChangedEvent@ToolTip@DirectUI@@AEAAJXZ
    long HookupOwnerLayoutChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupParentPopup@ToolTip@DirectUI@@AEAAJPEAPEAUIPopup@Primitives@Controls@Xaml@UI@Windows@@@Z
    long HookupParentPopup(::Windows::UI::Xaml::Controls::Primitives::IPopup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlKeyOnly@ToolTip@DirectUI@@CA_NW4VirtualKey@System@Windows@@@Z
    static bool IsControlKeyOnly(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOwnerPositionChanged@ToolTip@DirectUI@@AEAA_NXZ
    bool IsOwnerPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovePointToPointerToolTipShowPosition@ToolTip@DirectUI@@AEAAJAEAUPoint@Foundation@Windows@@W4PlacementMode@Primitives@Controls@Xaml@UI@5@@Z
    long MovePointToPointerToolTipShowPosition(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovePointToPointerToolTipShowPosition@ToolTip@DirectUI@@AEAAJAEAN0W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long MovePointToPointerToolTipShowPosition(double &, double &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosed@ToolTip@DirectUI@@AEAAJXZ
    long OnClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsOpenChanged@ToolTip@DirectUI@@AEAAJE@Z
    long OnIsOpenChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpened@ToolTip@DirectUI@@AEAAJXZ
    long OnOpened();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupClosed@ToolTip@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPopupClosed(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupOpened@ToolTip@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPopupOpened(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToolTipSizeChanged@ToolTip@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnToolTipSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPopup@ToolTip@DirectUI@@AEAAJXZ
    long OpenPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformClipping@ToolTip@DirectUI@@AEAAJUSize@Foundation@Windows@@@Z
    long PerformClipping(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDirectionalPlacementWithWindowedPopup@ToolTip@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@_NURect@Foundation@6@UPoint@86@NNNNW4PlacementMode@Primitives@Controls@456@PEAUtagRECT@@@Z
    long PerformDirectionalPlacementWithWindowedPopup(::Windows::UI::Xaml::IFrameworkElement *, bool, WindissectOpaque, WindissectOpaque, double, double, double, double, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformMousePlacementWithPopup@ToolTip@DirectUI@@AEAAJAEBUXRECT_WH@@W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long PerformMousePlacementWithPopup(XRECT_WH const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformMousePlacementWithWindowedPopup@ToolTip@DirectUI@@AEAAJ_NURect@Foundation@Windows@@UPoint@45@NNNNW4PlacementMode@Primitives@Controls@Xaml@UI@5@@Z
    long PerformMousePlacementWithWindowedPopup(bool, WindissectOpaque, WindissectOpaque, double, double, double, double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformNonMousePlacementWithPopup@ToolTip@DirectUI@@AEAAJPEAUtagRECT@@AEBUXRECT_WH@@W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long PerformNonMousePlacementWithPopup(tagRECT *, XRECT_WH const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPlacementInternal@ToolTip@DirectUI@@AEAAJXZ
    long PerformPlacementInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPlacementWithPopup@ToolTip@DirectUI@@AEAAJPEAUtagRECT@@@Z
    long PerformPlacementWithPopup(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPlacementWithWindowedPopup@ToolTip@DirectUI@@AEAAJPEAUtagRECT@@@Z
    long PerformPlacementWithWindowedPopup(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionPopup@ToolTip@DirectUI@@AEAAJV?$ComPtr@UIPopup@Primitives@Controls@Xaml@UI@Windows@@@ctl@@NN@Z
    long PositionPopup(WindissectOpaque, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePopupOpeningEvent@ToolTip@DirectUI@@AEAAJXZ
    long RaisePopupOpeningEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePopupPlacementEvent@ToolTip@DirectUI@@AEAAJXZ
    long RaisePopupPlacementEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCoreWindowHandler@ToolTip@DirectUI@@AEAAJXZ
    long RemoveCoreWindowHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromPopupParentCollection@ToolTip@DirectUI@@AEAAJXZ
    long RemoveFromPopupParentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveXamlIslandRootHandler@ToolTip@DirectUI@@AEAAJXZ
    long RemoveXamlIslandRootHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookFromCoreWindowOrXamlIslandRoot@ToolTip@DirectUI@@AEAAJXZ
    long UnhookFromCoreWindowOrXamlIslandRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookOwnerLayoutChangedEvent@ToolTip@DirectUI@@AEAAJXZ
    long UnhookOwnerLayoutChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOwnersBoundary@ToolTip@DirectUI@@AEAAJXZ
    long UpdateOwnersBoundary();
};
} // namespace DirectUI
