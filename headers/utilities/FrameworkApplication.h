#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 38 member(s).
namespace DirectUI {
class FrameworkApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIslandImpl@FrameworkApplication@DirectUI@@QEAAJPEAPEAUIXamlIsland@Hosting@Xaml@UI@Windows@@@Z
    long CreateIslandImpl(::Windows::UI::Xaml::Hosting::IXamlIsland * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIslandWithAppWindowImpl@FrameworkApplication@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIXamlIsland@Hosting@Xaml@UI@Windows@@@Z
    long CreateIslandWithAppWindowImpl(IInspectable *, ::Windows::UI::Xaml::Hosting::IXamlIsland * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIslandWithContentBridgeImpl@FrameworkApplication@DirectUI@@QEAAJPEAUIInspectable@@0PEAPEAUIXamlIsland@Hosting@Xaml@UI@Windows@@@Z
    long CreateIslandWithContentBridgeImpl(IInspectable *, IInspectable *, ::Windows::UI::Xaml::Hosting::IXamlIsland * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchBackgroundActivated@FrameworkApplication@DirectUI@@QEAAJPEAUIInspectable@@PEAUIBackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@@Z
    long DispatchBackgroundActivated(IInspectable *, ::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchGenericActivation@FrameworkApplication@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long DispatchGenericActivation(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitImpl@FrameworkApplication@DirectUI@@QEAAJXZ
    long ExitImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationRequestedTheme@FrameworkApplication@DirectUI@@SA?AW4Theme@Theming@@XZ
    static int GetApplicationRequestedTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentNoRef@FrameworkApplication@DirectUI@@SAPEAV12@XZ
    static FrameworkApplication * GetCurrentNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalDeinit@FrameworkApplication@DirectUI@@SAXXZ
    static void GlobalDeinit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnWindowCreated@FrameworkApplication@DirectUI@@QEAAJXZ
    long InvokeOnWindowCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponent@FrameworkApplication@DirectUI@@SAJPEAUIInspectable@@AEBVxstring_ptr@@W4ComponentResourceLocation@Primitives@Controls@Xaml@UI@Windows@@@Z
    static long LoadComponent(IInspectable *, xstring_ptr const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MainASTAInitialize@FrameworkApplication@DirectUI@@SAJXZ
    static long MainASTAInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowCreatedImpl@FrameworkApplication@DirectUI@@UEAAJPEAUIWindowCreatedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnWindowCreatedImpl(::Windows::UI::Xaml::IWindowCreatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUnhandledExceptionEvent@FrameworkApplication@DirectUI@@QEAAJJPEAUHSTRING__@@PEAI@Z
    long RaiseUnhandledExceptionEvent(long, HSTRING__*, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCurrent@FrameworkApplication@DirectUI@@SAXXZ
    static void ReleaseCurrent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOnCurrentThreadImpl@FrameworkApplication@DirectUI@@QEAAJPEAUIApplicationInitializationCallback@Xaml@UI@Windows@@@Z
    long StartOnCurrentThreadImpl(::Windows::UI::Xaml::IApplicationInitializationCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnteredBackground@FrameworkApplication@DirectUI@@UEAAJPEAUIEnteredBackgroundEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EnteredBackground(::Windows::UI::Xaml::IEnteredBackgroundEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LeavingBackground@FrameworkApplication@DirectUI@@UEAAJPEAUILeavingBackgroundEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LeavingBackground(::Windows::UI::Xaml::ILeavingBackgroundEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Resuming@FrameworkApplication@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Resuming(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Suspending@FrameworkApplication@DirectUI@@UEAAJPEAUISuspendingEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Suspending(::Windows::UI::Xaml::ISuspendingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UnhandledException@FrameworkApplication@DirectUI@@UEAAJPEAUIUnhandledExceptionEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_UnhandledException(::Windows::UI::Xaml::IUnhandledExceptionEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DebugSettingsImpl@FrameworkApplication@DirectUI@@QEAAJPEAPEAUIDebugSettings@Xaml@UI@Windows@@@Z
    long get_DebugSettingsImpl(::Windows::UI::Xaml::IDebugSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourcesImpl@FrameworkApplication@DirectUI@@QEAAJPEAPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    long get_ResourcesImpl(::Windows::UI::Xaml::IResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FocusVisualKindImpl@FrameworkApplication@DirectUI@@QEAAJW4FocusVisualKind@Xaml@UI@Windows@@@Z
    long put_FocusVisualKindImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequestedThemeImpl@FrameworkApplication@DirectUI@@QEAAJW4ApplicationTheme@Xaml@UI@Windows@@@Z
    long put_RequestedThemeImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ResourcesImpl@FrameworkApplication@DirectUI@@QEAAJPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    long put_ResourcesImpl(::Windows::UI::Xaml::IResourceDictionary *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnteredBackground@FrameworkApplication@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnteredBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LeavingBackground@FrameworkApplication@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LeavingBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Resuming@FrameworkApplication@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Resuming(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Suspending@FrameworkApplication@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Suspending(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UnhandledException@FrameworkApplication@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UnhandledException(EventRegistrationToken);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FrameworkApplication@DirectUI@@IEAA@XZ
    FrameworkApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FrameworkApplication@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkApplication@DirectUI@@MEAA@XZ
    virtual ~FrameworkApplication();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFocusVisualKindOverrideIfNeeded@FrameworkApplication@DirectUI@@CAXPEAW4FocusVisualKind@Xaml@UI@Windows@@@Z
    static void ApplyFocusVisualKindOverrideIfNeeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDesignMode@FrameworkApplication@DirectUI@@AEAAJXZ
    long CheckDesignMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPLMHandlerForCallingThread@FrameworkApplication@DirectUI@@AEAAJPEAPEAVPLMHandler@PLM@XAML@@@Z
    long GetPLMHandlerForCallingThread(::XAML::PLM::PLMHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookBackgroundActivationEvents@FrameworkApplication@DirectUI@@AEAAJ_N@Z
    long HookBackgroundActivationEvents(bool);
};
} // namespace DirectUI
