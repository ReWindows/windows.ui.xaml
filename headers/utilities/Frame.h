#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
namespace DirectUI {
class Frame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationStateImpl@Frame@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetNavigationStateImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationTransitionInfoOverrideImpl@Frame@DirectUI@@QEAAJPEAPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAE1@Z
    long GetNavigationTransitionInfoOverrideImpl(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo * *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoBackImpl@Frame@DirectUI@@QEAAJPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long GoBackImpl(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoForwardImpl@Frame@DirectUI@@QEAAJXZ
    long GoForwardImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateImpl@Frame@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@567@PEAE@Z
    long NavigateImpl(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToTypeImpl@Frame@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAUIFrameNavigationOptions@Navigation@567@PEAE@Z
    long NavigateToTypeImpl(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, ::Windows::UI::Xaml::Navigation::IFrameNavigationOptions *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Frame@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePageFromCache@Frame@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long RemovePageFromCache(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationStateWithNavigationControlImpl@Frame@DirectUI@@QEAAJPEAUHSTRING__@@E@Z
    long SetNavigationStateWithNavigationControlImpl(HSTRING__*, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTransitionInfoOverrideImpl@Frame@DirectUI@@QEAAJPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long SetNavigationTransitionInfoOverrideImpl(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForwardStackImpl@Frame@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVPageStackEntry@Navigation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_ForwardStackImpl(WindissectOpaque * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Frame@DirectUI@@IEAA@XZ
    Frame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Frame@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Frame@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@Frame@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Frame@DirectUI@@MEAA@XZ
    virtual ~Frame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeContent@Frame@DirectUI@@AEAAJPEAUIInspectable@@00PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long ChangeContent(IInspectable *, IInspectable *, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickHandler@Frame@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long ClickHandler(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyGetOrSetNavigationState@Frame@DirectUI@@AEAAJW4NavigationStateOperation@12@@Z
    long NotifyGetOrSetNavigationState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNavigation@Frame@DirectUI@@AEAAJXZ
    long NotifyNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformNavigation@Frame@DirectUI@@AEAAJXZ
    long PerformNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigated@Frame@DirectUI@@AEAAJPEAUIInspectable@@0PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@@Z
    long RaiseNavigated(IInspectable *, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigating@Frame@DirectUI@@AEAAJPEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@PEAE@Z
    long RaiseNavigating(IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigationFailed@Frame@DirectUI@@AEAAJPEAUHSTRING__@@JPEAE@Z
    long RaiseNavigationFailed(HSTRING__*, long, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigationStopped@Frame@DirectUI@@AEAAJPEAUIInspectable@@0PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@@Z
    long RaiseNavigationStopped(IInspectable *, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUnhandledException@Frame@DirectUI@@AEAAJII@Z
    long RaiseUnhandledException(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNavigation@Frame@DirectUI@@AEAAJXZ
    long StartNavigation();
};
} // namespace DirectUI
