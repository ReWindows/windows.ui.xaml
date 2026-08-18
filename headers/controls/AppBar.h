#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 56 member(s).
namespace DirectUI {
class AppBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@AppBar@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsElement@AppBar@DirectUI@@UEAAJPEAVDependencyObject@2@PEA_N@Z
    virtual long ContainsElement(::DirectUI::DependencyObject *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@AppBar@DirectUI@@QEAAJPEAPEAVPage@2@@Z
    long GetOwner(::DirectUI::Page * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@AppBar@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AppBar@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonPressed@AppBar@DirectUI@@UEAAJPEAE@Z
    virtual long OnBackButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosedImpl@AppBar@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnClosedImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosingImpl@AppBar@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnClosingImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpenedImpl@AppBar@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnOpenedImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpeningImpl@AppBar@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnOpeningImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@AppBar@DirectUI@@UEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@AppBar@DirectUI@@QEAAJPEAVPage@2@@Z
    long SetOwner(::DirectUI::Page *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppBar@DirectUI@@IEAA@XZ
    AppBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@AppBar@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldOpenUp@AppBar@DirectUI@@IEAAJPEA_N@Z
    long GetShouldOpenUp(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalOffsetNeededToOpenInDefaultDirection@AppBar@DirectUI@@MEAAJPEANPEA_N@Z
    virtual long GetVerticalOffsetNeededToOpenInDefaultDirection(double *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentRootSizeChanged@AppBar@DirectUI@@MEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnContentRootSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@AppBar@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@AppBar@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@AppBar@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@AppBar@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@AppBar@DirectUI@@MEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@AppBar@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@AppBar@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBar@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSavedFocusImpl@AppBar@DirectUI@@MEAAJPEAVDependencyObject@2@W4FocusState@Xaml@UI@Windows@@@Z
    virtual long RestoreSavedFocusImpl(::DirectUI::DependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDismissInlineAppBar@AppBar@DirectUI@@IEAAJPEA_N@Z
    long TryDismissInlineAppBar(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDismissInlineAppBar@AppBar@DirectUI@@IEAAJXZ
    long TryDismissInlineAppBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@AppBar@DirectUI@@MEAAJXZ
    virtual long UpdateTemplateSettings();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppBar@DirectUI@@MEAA@XZ
    virtual ~AppBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLTEs@AppBar@DirectUI@@AEAAJXZ
    long CreateLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyLTEs@AppBar@DirectUI@@AEAAJXZ
    long DestroyLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModesStateChanged@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIVisualStateChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnDisplayModesStateChanged(IInspectable *, ::Windows::UI::Xaml::IVisualStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpandButtonClick@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnExpandButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsOpenChanged@AppBar@DirectUI@@AEAAJ_N@Z
    long OnIsOpenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsOpenChangedForAutomation@AppBar@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnIsOpenChangedForAutomation(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsStickyChanged@AppBar@DirectUI@@AEAAJXZ
    long OnIsStickyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdated@AppBar@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnLayoutUpdated(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverlayElementPointerPressed@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnOverlayElementPointerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@AppBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowSizeChangedEventArgs@Core@UI@Windows@@@Z
    long OnWindowSizeChanged(IInspectable *, ::Windows::UI::Core::IWindowSizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayOverlayClosingAnimation@AppBar@DirectUI@@AEAAJXZ
    long PlayOverlayClosingAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayOverlayOpeningAnimation@AppBar@DirectUI@@AEAAJXZ
    long PlayOverlayOpeningAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionLTEs@AppBar@DirectUI@@AEAAJXZ
    long PositionLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateIsOverlayVisible@AppBar@DirectUI@@AEAAJXZ
    long ReevaluateIsOverlayVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshContentHeight@AppBar@DirectUI@@AEAAJPEA_N@Z
    long RefreshContentHeight(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSavedFocus@AppBar@DirectUI@@AEAAJXZ
    long RestoreSavedFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnAppBar@AppBar@DirectUI@@AEAAJXZ
    long SetFocusOnAppBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupOverlayState@AppBar@DirectUI@@AEAAJXZ
    long SetupOverlayState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseParentedLTE@AppBar@DirectUI@@AEAA_NXZ
    bool ShouldUseParentedLTE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownOverlayState@AppBar@DirectUI@@AEAAJXZ
    long TeardownOverlayState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryQueryDisplayModesStatesGroup@AppBar@DirectUI@@AEAAJXZ
    long TryQueryDisplayModesStatesGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayElementBrush@AppBar@DirectUI@@AEAAJXZ
    long UpdateOverlayElementBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetForOverlayAnimations@AppBar@DirectUI@@AEAAJXZ
    long UpdateTargetForOverlayAnimations();
};
} // namespace DirectUI
