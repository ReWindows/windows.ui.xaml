#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 43 member(s).
namespace DirectUI {
class SemanticZoom {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationGetActivePresenter@SemanticZoom@DirectUI@@QEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long AutomationGetActivePresenter(::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@SemanticZoom@DirectUI@@UEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStateChange@SemanticZoom@DirectUI@@UEAAJW4DMManipulationState@2@MMMMMEEE@Z
    virtual long NotifyStateChange(int, float, float, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@SemanticZoom@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@SemanticZoom@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChanged@SemanticZoom@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerWheelChanged(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@SemanticZoom@DirectUI@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SemanticZoom@DirectUI@@QEAA@XZ
    SemanticZoom();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEnableJumpListBehaviorOnPhone@SemanticZoom@DirectUI@@QEAAJPEAE@Z
    long ShouldEnableJumpListBehaviorOnPhone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleActiveViewFromHeaderItem@SemanticZoom@DirectUI@@QEAAJPEAE@Z
    long ToggleActiveViewFromHeaderItem(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleActiveViewImpl@SemanticZoom@DirectUI@@QEAAJXZ
    long ToggleActiveViewImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleActiveViewWithFocusState@SemanticZoom@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@@Z
    long ToggleActiveViewWithFocusState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SemanticZoom@DirectUI@@UEAA@XZ
    virtual ~SemanticZoom();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@SemanticZoom@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SemanticZoom@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@SemanticZoom@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@SemanticZoom@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStoryboardCompletedHandler@SemanticZoom@DirectUI@@AEAAJPEAUIVisualState@Xaml@UI@Windows@@P812@EAAJPEAUIInspectable@@1@Z@Z
    long AddStoryboardCompletedHandler(::Windows::UI::Xaml::IVisualState *, long ( ::SemanticZoom::*)(IInspectable *, IInspectable *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationReparentPresenters@SemanticZoom@DirectUI@@AEAAJPEAUISemanticZoomAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long AutomationReparentPresenters(::Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBounds@SemanticZoom@DirectUI@@AEAAJPEAUXRECTF_WH@@@Z
    long CalculateBounds(XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeViews@SemanticZoom@DirectUI@@AEAAJXZ
    long ChangeViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHiddenAppBar@SemanticZoom@DirectUI@@AEAAJXZ
    long EnsureHiddenAppBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideZoomOutButton@SemanticZoom@DirectUI@@AEAAJ_N@Z
    long HideZoomOutButton(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSemanticZoomInformation@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@0E@Z
    long InitializeSemanticZoomInformation(IInspectable *, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JumpListChangeViews@SemanticZoom@DirectUI@@AEAAJXZ
    long JumpListChangeViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChangeCompleted@SemanticZoom@DirectUI@@AEAAJPEAUISemanticZoomViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnViewChangeCompleted(::Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChangeStarted@SemanticZoom@DirectUI@@AEAAJPEAUISemanticZoomViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnViewChangeStarted(::Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivated@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowActivatedEventArgs@Core@UI@Windows@@@Z
    long OnWindowActivated(IInspectable *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomOutButtonClick@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnZoomOutButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomOutButtonVisibleStoryboardCompleted@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnZoomOutButtonVisibleStoryboardCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceJumplistPopup@SemanticZoom@DirectUI@@AEAAJXZ
    long PlaceJumplistPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetViewsAndSnapToActiveView@SemanticZoom@DirectUI@@AEAAJXZ
    long ResetViewsAndSnapToActiveView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlternateViewTimer@SemanticZoom@DirectUI@@AEAAJXZ
    long SetAlternateViewTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupAlternateView@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long SetupAlternateView(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToOnWindowActivated@SemanticZoom@DirectUI@@AEAAJXZ
    long SubscribeToOnWindowActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleAppBar@SemanticZoom@DirectUI@@AEAAJE@Z
    long ToggleAppBar(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleBackKeyListener@SemanticZoom@DirectUI@@AEAAJE@Z
    long ToggleBackKeyListener(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromOnWindowActivated@SemanticZoom@DirectUI@@AEAAJXZ
    long UnsubscribeFromOnWindowActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThresholds@SemanticZoom@DirectUI@@AEAAJXZ
    long UpdateThresholds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewChangeAnimationFinished@SemanticZoom@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long ViewChangeAnimationFinished(IInspectable *, IInspectable *);
};
} // namespace DirectUI
