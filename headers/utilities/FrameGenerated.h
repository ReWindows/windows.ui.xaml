#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 45 member(s).
namespace DirectUI {
class FrameGenerated {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FrameGenerated@DirectUI@@QEAA@XZ
    FrameGenerated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigatedEventSourceNoRef@FrameGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UINavigatedEventHandler@Navigation@Xaml@UI@Windows@@UIInspectable@@UINavigationEventArgs@2345@@2@@Z
    long GetNavigatedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigatingEventSourceNoRef@FrameGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UINavigatingCancelEventHandler@Navigation@Xaml@UI@Windows@@UIInspectable@@UINavigatingCancelEventArgs@2345@@2@@Z
    long GetNavigatingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationFailedEventSourceNoRef@FrameGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UINavigationFailedEventHandler@Navigation@Xaml@UI@Windows@@UIInspectable@@UINavigationFailedEventArgs@2345@@2@@Z
    long GetNavigationFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationState@FrameGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNavigationState(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationStoppedEventSourceNoRef@FrameGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UINavigationStoppedEventHandler@Navigation@Xaml@UI@Windows@@UIInspectable@@UINavigationEventArgs@2345@@2@@Z
    long GetNavigationStoppedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationTransitionInfoOverride@FrameGenerated@DirectUI@@UEAAJPEAPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAE1@Z
    virtual long GetNavigationTransitionInfoOverride(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo * *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FrameGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoBack@FrameGenerated@DirectUI@@UEAAJXZ
    virtual long GoBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoForward@FrameGenerated@DirectUI@@UEAAJXZ
    virtual long GoForward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@FrameGenerated@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAE@Z
    virtual long Navigate(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@FrameGenerated@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@567@PEAE@Z
    long Navigate(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@FrameGenerated@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAE@Z
    virtual long Navigate(::Windows::UI::Xaml::Interop::TypeName, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToType@FrameGenerated@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAUIFrameNavigationOptions@Navigation@567@PEAE@Z
    long NavigateToType(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, ::Windows::UI::Xaml::Navigation::IFrameNavigationOptions *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@FrameGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetNavigationState(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationStateWithNavigationControl@FrameGenerated@DirectUI@@QEAAJPEAUHSTRING__@@E@Z
    long SetNavigationStateWithNavigationControl(HSTRING__*, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationTransitionInfoOverride@FrameGenerated@DirectUI@@UEAAJPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long SetNavigationTransitionInfoOverride(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Navigated@FrameGenerated@DirectUI@@UEAAJPEAUINavigatedEventHandler@Navigation@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Navigated(::Windows::UI::Xaml::Navigation::INavigatedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Navigating@FrameGenerated@DirectUI@@UEAAJPEAUINavigatingCancelEventHandler@Navigation@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Navigating(::Windows::UI::Xaml::Navigation::INavigatingCancelEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_NavigationFailed@FrameGenerated@DirectUI@@UEAAJPEAUINavigationFailedEventHandler@Navigation@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_NavigationFailed(::Windows::UI::Xaml::Navigation::INavigationFailedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_NavigationStopped@FrameGenerated@DirectUI@@UEAAJPEAUINavigationStoppedEventHandler@Navigation@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_NavigationStopped(::Windows::UI::Xaml::Navigation::INavigationStoppedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackStack@FrameGenerated@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVPageStackEntry@Navigation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_BackStack(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackStackDepth@FrameGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_BackStackDepth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheSize@FrameGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_CacheSize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanGoBack@FrameGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanGoBack(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanGoForward@FrameGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanGoForward(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSourcePageType@FrameGenerated@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_CurrentSourcePageType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForwardStack@FrameGenerated@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVPageStackEntry@Navigation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_ForwardStack(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePageType@FrameGenerated@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_SourcePageType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackStackDepth@FrameGenerated@DirectUI@@QEAAJH@Z
    long put_BackStackDepth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CacheSize@FrameGenerated@DirectUI@@UEAAJH@Z
    virtual long put_CacheSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanGoBack@FrameGenerated@DirectUI@@QEAAJE@Z
    long put_CanGoBack(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanGoForward@FrameGenerated@DirectUI@@QEAAJE@Z
    long put_CanGoForward(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentSourcePageType@FrameGenerated@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@@Z
    long put_CurrentSourcePageType(::Windows::UI::Xaml::Interop::TypeName);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourcePageType@FrameGenerated@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long put_SourcePageType(::Windows::UI::Xaml::Interop::TypeName);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Navigated@FrameGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Navigated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Navigating@FrameGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Navigating(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_NavigationFailed@FrameGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_NavigationFailed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_NavigationStopped@FrameGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_NavigationStopped(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FrameGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@FrameGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@FrameGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FrameGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FrameGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FrameGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
