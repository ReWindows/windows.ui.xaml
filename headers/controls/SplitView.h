#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
namespace DirectUI {
class SplitView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonPressed@SplitView@DirectUI@@UEAAJPEAE@Z
    virtual long OnBackButtonPressed(unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SplitView@DirectUI@@QEAA@XZ
    SplitView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@SplitView@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@SplitView@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@SplitView@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@SplitView@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@SplitView@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@SplitView@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@SplitView@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopOverride@SplitView@DirectUI@@MEAAJPEAVDependencyObject@2@00_NPEAPEAV32@PEAE@Z
    virtual long ProcessCandidateTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@SplitView@DirectUI@@MEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SplitView@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SplitView@DirectUI@@MEAA@XZ
    virtual ~SplitView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePolygonalPath@SplitView@DirectUI@@CAJPEAUIGrid@Controls@Xaml@UI@Windows@@_KPEAPEAUIPath@Shapes@567@@Z
    static long CreatePolygonalPath(::Windows::UI::Xaml::Controls::IGrid *, uint64_t, ::Windows::UI::Xaml::Shapes::IPath * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeChanged@SplitView@DirectUI@@AEAAJXZ
    long OnDisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeStateChanged@SplitView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIVisualStateChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnDisplayModeStateChanged(IInspectable *, ::Windows::UI::Xaml::IVisualStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsPaneOpenChanged@SplitView@DirectUI@@AEAAJ_N@Z
    long OnIsPaneOpenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@SplitView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOuterDismissElementPointerPressed@SplitView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnOuterDismissElementPointerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneOpenedOrClosed@SplitView@DirectUI@@AEAAJ_N@Z
    long OnPaneOpenedOrClosed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@SplitView@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@SplitView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@SplitView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowSizeChangedEventArgs@Core@UI@Windows@@@Z
    long OnWindowSizeChanged(IInspectable *, ::Windows::UI::Core::IWindowSizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopInternal@SplitView@DirectUI@@AEAAJPEAVDependencyObject@2@0_NPEAPEAV32@@Z
    long ProcessTabStopInternal(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForDisplayModeStatesChangedEvent@SplitView@DirectUI@@AEAAJXZ
    long RegisterForDisplayModeStatesChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupOuterDismissLayer@SplitView@DirectUI@@AEAAJXZ
    long SetupOuterDismissLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownOuterDismissLayer@SplitView@DirectUI@@AEAAJXZ
    long TeardownOuterDismissLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePolygonalPath@SplitView@DirectUI@@CAJPEAUIPath@Shapes@Xaml@UI@Windows@@_KPEAUPoint@Foundation@7@@Z
    static long UpdatePolygonalPath(::Windows::UI::Xaml::Shapes::IPath *, uint64_t, WindissectOpaque *);
};
} // namespace DirectUI
