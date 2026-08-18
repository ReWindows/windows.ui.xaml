#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class VisualStateManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomVSMGoToState@VisualStateManager@DirectUI@@SAJPEAVCDependencyObject@@VVisualStateToken@@H_NPEA_N@Z
    static long CustomVSMGoToState(CDependencyObject *, VisualStateToken, int, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@VisualStateManager@DirectUI@@SAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUHSTRING__@@EPEAE@Z
    static long GoToState(::Windows::UI::Xaml::Controls::IControl *, HSTRING__*, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateCoreImpl@VisualStateManager@DirectUI@@QEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@567@PEAUHSTRING__@@PEAUIVisualStateGroup@567@PEAUIVisualState@567@EPEAE@Z
    long GoToStateCoreImpl(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::IFrameworkElement *, HSTRING__*, ::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateImpl@VisualStateManager@DirectUI@@SAJPEAUIControl@Controls@Xaml@UI@Windows@@VVisualStateToken@@PEAUHSTRING__@@HEPEAE@Z
    static long GoToStateImpl(::Windows::UI::Xaml::Controls::IControl *, VisualStateToken, HSTRING__*, int, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentStateChangedImpl@VisualStateManager@DirectUI@@QEAAJPEAUIVisualStateGroup@Xaml@UI@Windows@@PEAUIVisualState@456@1PEAUIControl@Controls@456@@Z
    long RaiseCurrentStateChangedImpl(::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentStateChangingImpl@VisualStateManager@DirectUI@@QEAAJPEAUIVisualStateGroup@Xaml@UI@Windows@@PEAUIVisualState@456@1PEAUIControl@Controls@456@@Z
    long RaiseCurrentStateChangingImpl(::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetState@VisualStateManager@DirectUI@@SAJPEAUIControl@Controls@Xaml@UI@Windows@@PEBGPEAPEAUIVisualStateGroup@567@PEAPEAUIVisualState@567@PEAE@Z
    static long TryGetState(::Windows::UI::Xaml::Controls::IControl *, unsigned short const *, ::Windows::UI::Xaml::IVisualStateGroup * *, ::Windows::UI::Xaml::IVisualState * *, unsigned char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateCorePrivate@VisualStateManager@DirectUI@@CAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@567@PEAUIVisualStateGroup@567@PEAUIVisualState@567@EPEAE4@Z
    static long GoToStateCorePrivate(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, unsigned char, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStatePrivate@VisualStateManager@DirectUI@@CAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUHSTRING__@@PEAUIVisualState@567@PEAUIVisualStateGroup@567@EPEAE4@Z
    static long GoToStatePrivate(::Windows::UI::Xaml::Controls::IControl *, HSTRING__*, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualStateGroup *, unsigned char, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetryGoToStateAfterRefreshingInheritanceContext@VisualStateManager@DirectUI@@CAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@567@PEAUIVisualStateGroup@567@PEAUIVisualState@567@EPEAE@Z
    static long RetryGoToStateAfterRefreshingInheritanceContext(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, unsigned char, unsigned char *);
};
} // namespace DirectUI
