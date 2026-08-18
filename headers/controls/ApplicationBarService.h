#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 49 member(s).
namespace DirectUI {
class ApplicationBarService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationBarService@DirectUI@@QEAA@XZ
    ApplicationBarService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCaches@ApplicationBarService@DirectUI@@UEAAJXZ
    virtual long ClearCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllNonStickyAppBars@ApplicationBarService@DirectUI@@UEAAJPEA_N@Z
    virtual long CloseAllNonStickyAppBars(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllNonStickyAppBars@ApplicationBarService@DirectUI@@UEAAJXZ
    virtual long CloseAllNonStickyAppBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseApplicationBar@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long CloseApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusApplicationBar@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@W4FocusState@Xaml@UI@Windows@@@Z
    virtual long FocusApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusSavedElement@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@@Z
    virtual long FocusSavedElement(::DirectUI::AppBar *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppBarStatus@ApplicationBarService@DirectUI@@UEAAJPEAI0PEAM10011@Z
    virtual long GetAppBarStatus(unsigned int *, unsigned int *, float *, float *, unsigned int *, unsigned int *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementFromAppBars@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@0W4AppBarTabPriority@2@EPEAPEAVCDependencyObject@@@Z
    virtual long GetFirstFocusableElementFromAppBars(::DirectUI::AppBar *, ::DirectUI::AppBar *, int, unsigned char, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopAndBottomAppBars@ApplicationBarService@DirectUI@@UEAAJPEAPEAVAppBar@2@0@Z
    virtual long GetTopAndBottomAppBars(::DirectUI::AppBar * *, ::DirectUI::AppBar * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopAndBottomOpenAppBars@ApplicationBarService@DirectUI@@UEAAJPEAPEAVAppBar@2@0PEAE@Z
    virtual long GetTopAndBottomOpenAppBars(::DirectUI::AppBar * *, ::DirectUI::AppBar * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleApplicationBarClosedDisplayModeChange@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long HandleApplicationBarClosedDisplayModeChange(::DirectUI::AppBar *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppBarRegistered@ApplicationBarService@DirectUI@@QEAAJPEAVAppBar@2@PEAE@Z
    long IsAppBarRegistered(::DirectUI::AppBar *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanged@ApplicationBarService@DirectUI@@UEAAJE@Z
    virtual long OnBoundsChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenApplicationBar@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long OpenApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@ApplicationBarService@DirectUI@@UEAAJPEAVDependencyObject@2@0EPEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, unsigned char, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessToggleApplicationBarsFromMouseRightTapped@ApplicationBarService@DirectUI@@UEAAJXZ
    virtual long ProcessToggleApplicationBarsFromMouseRightTapped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterApplicationBar@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long RegisterApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFocusReturnState@ApplicationBarService@DirectUI@@UEAAXXZ
    virtual void ResetFocusReturnState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveCurrentFocusedElement@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@@Z
    virtual long SaveCurrentFocusedElement(::DirectUI::AppBar *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusReturnState@ApplicationBarService@DirectUI@@UEAAXW4FocusState@Xaml@UI@Windows@@@Z
    virtual void SetFocusReturnState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleApplicationBars@ApplicationBarService@DirectUI@@UEAAJXZ
    virtual long ToggleApplicationBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterApplicationBar@ApplicationBarService@DirectUI@@UEAAJPEAVAppBar@2@@Z
    virtual long UnregisterApplicationBar(::DirectUI::AppBar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDismissLayer@ApplicationBarService@DirectUI@@UEAAJXZ
    virtual long UpdateDismissLayer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationBarService@DirectUI@@UEAA@XZ
    virtual ~ApplicationBarService();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ApplicationBarService@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ApplicationBarService@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationBarService@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ApplicationBarService@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApplicationBarToVisualTree@ApplicationBarService@DirectUI@@AEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    long AddApplicationBarToVisualTree(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupOpenEventHooks@ApplicationBarService@DirectUI@@AEAAJXZ
    long CleanupOpenEventHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverlayAnimations@ApplicationBarService@DirectUI@@AEAAJXZ
    long CreateOverlayAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBounds@ApplicationBarService@DirectUI@@AEAAJPEAE@Z
    long EnsureBounds(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOpenEventsAreHooked@ApplicationBarService@DirectUI@@AEAAJXZ
    long EnsureOpenEventsAreHooked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluatePopupState@ApplicationBarService@DirectUI@@AEAAJXZ
    long EvaluatePopupState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldEnterAppBar@ApplicationBarService@DirectUI@@AEAA_NPEAVCDependencyObject@@E@Z
    bool GetShouldEnterAppBar(CDependencyObject *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldExitAppBar@ApplicationBarService@DirectUI@@AEAAJPEAVAppBar@2@PEAVCDependencyObject@@EPEAE@Z
    long GetShouldExitAppBar(::DirectUI::AppBar *, CDependencyObject *, unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldHostAppBarWhenClosed@ApplicationBarService@DirectUI@@AEAAJPEAVAppBar@2@PEA_N@Z
    long GetShouldHostAppBarWhenClosed(::DirectUI::AppBar *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopAndBottomAppBars@ApplicationBarService@DirectUI@@AEAAJ_NPEAPEAVAppBar@2@1PEAE@Z
    long GetTopAndBottomAppBars(bool, ::DirectUI::AppBar * *, ::DirectUI::AppBar * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppBarUnloaded@ApplicationBarService@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnAppBarUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissLayerPointerReleased@ApplicationBarService@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnDismissLayerPointerReleased(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissLayerPressed@ApplicationBarService@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnDismissLayerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissLayerRightTapped@ApplicationBarService@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnDismissLayerRightTapped(IInspectable *, ::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEdgeGestureCompleted@ApplicationBarService@DirectUI@@AEAAJPEAUIEdgeGesture@Input@UI@Windows@@PEAUIEdgeGestureEventArgs@456@@Z
    long OnEdgeGestureCompleted(::Windows::UI::Input::IEdgeGesture *, ::Windows::UI::Input::IEdgeGestureEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivated@ApplicationBarService@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowActivatedEventArgs@Core@UI@Windows@@@Z
    long OnWindowActivated(IInspectable *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateIsOverlayVisible@ApplicationBarService@DirectUI@@AEAAJXZ
    long ReevaluateIsOverlayVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveApplicationBarFromVisualTree@ApplicationBarService@DirectUI@@AEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    long RemoveApplicationBarFromVisualTree(::DirectUI::AppBar *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppBarOwnerPropertiesOnHost@ApplicationBarService@DirectUI@@AEAAJPEAVBorder@2@@Z
    long SetAppBarOwnerPropertiesOnHost(::DirectUI::Border *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetForOverlayAnimations@ApplicationBarService@DirectUI@@AEAAJXZ
    long UpdateTargetForOverlayAnimations();
};
} // namespace DirectUI
