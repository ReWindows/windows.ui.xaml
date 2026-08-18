#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 133 member(s).
namespace DirectUI {
class CoreWebViewHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWebAllowedObjectImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    long AddWebAllowedObjectImpl(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowFocusChange@CoreWebViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long AllowFocusChange(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildLocalStreamUriImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUHSTRING__@@0PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long BuildLocalStreamUriImpl(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePreviewToBitmapAsync@CoreWebViewHost@DirectUI@@QEAAJXZ
    long CapturePreviewToBitmapAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeHostingContext@CoreWebViewHost@DirectUI@@QEAAXPEAUHWND__@@I@Z
    void ChangeHostingContext(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStatics@CoreWebViewHost@DirectUI@@SAXXZ
    static void ClearStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControllerNavigationDisable@CoreWebViewHost@DirectUI@@UEAAJXZ
    virtual long ControllerNavigationDisable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControllerNavigationEnable@CoreWebViewHost@DirectUI@@UEAAJKUtagRECT@@UtagPOINT@@@Z
    virtual long ControllerNavigationEnable(unsigned long, tagRECT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertRectForFocusEvents@CoreWebViewHost@DirectUI@@UEAAXPEAMKW4CoreWebViewRectTransformType@@@Z
    virtual void ConvertRectForFocusEvents(float *, unsigned long, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreWebViewHost@DirectUI@@QEAA@XZ
    CoreWebViewHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponent@CoreWebViewHost@DirectUI@@QEAAJPEAUHWND__@@PEAPEAU3@@Z
    long CreateComponent(HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputContext@CoreWebViewHost@DirectUI@@UEAAJHPEAUWebPlatformWindowlessInputContext@@@Z
    virtual long CreateInputContext(int, WebPlatformWindowlessInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTooltipControl@CoreWebViewHost@DirectUI@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateTooltipControl(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredPermissionRequestByIdImpl@CoreWebViewHost@DirectUI@@QEAAJIPEAPEAUIWebViewDeferredPermissionRequest@Controls@Xaml@UI@Windows@@@Z
    long DeferredPermissionRequestByIdImpl(unsigned int, ::Windows::UI::Xaml::Controls::IWebViewDeferredPermissionRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentCreated@CoreWebViewHost@DirectUI@@QEAAJXZ
    long EnsureComponentCreated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppContext@CoreWebViewHost@DirectUI@@UEAAJPEAUIUri@@PEAW4WebPlatformApplicationContext@@@Z
    virtual long GetAppContext(IUri *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationLanguageListAsMuiForm@CoreWebViewHost@DirectUI@@UEAAJPEAPEAG@Z
    virtual long GetApplicationLanguageListAsMuiForm(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindow@CoreWebViewHost@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetCoreWindow(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultBackgroundColor@CoreWebViewHost@DirectUI@@QEAAJPEAKPEAM@Z
    long GetDefaultBackgroundColor(unsigned long *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiagnosticModeHostConsent@CoreWebViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetDiagnosticModeHostConsent(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostedComponentAutomationProvider@CoreWebViewHost@DirectUI@@QEAAJPEAPEAUIUnknown@@@Z
    long GetHostedComponentAutomationProvider(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationSettings@CoreWebViewHost@DirectUI@@QEAAJPEAPEAUICoreWebViewNavigationSettings@@@Z
    long GetNavigationSettings(ICoreWebViewNavigationSettings * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerWindow@CoreWebViewHost@DirectUI@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetOwnerWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentAutomationProvider@CoreWebViewHost@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetParentAutomationProvider(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellScaleFactor@CoreWebViewHost@DirectUI@@UEAAJPEAM@Z
    virtual long GetShellScaleFactor(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewRect@CoreWebViewHost@DirectUI@@UEAAJPEAUWEBPLATFORM_VIEW_RECTF@@@Z
    virtual long GetViewRect(WEBPLATFORM_VIEW_RECTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebPlatformSecurityManager@CoreWebViewHost@DirectUI@@SAJPEAPEAUIWebPlatformPermanentSecurityManager@@@Z
    static long GetWebPlatformSecurityManager(IWebPlatformPermanentSecurityManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoBackImpl@CoreWebViewHost@DirectUI@@QEAAJXZ
    long GoBackImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoForwardImpl@CoreWebViewHost@DirectUI@@QEAAJXZ
    long GoForwardImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeScriptAsyncImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@67@@Z
    long InvokeScriptAsyncImpl(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeScriptImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUHSTRING__@@IQEAPEAU3@PEAPEAU3@@Z
    long InvokeScriptImpl(HSTRING__*, unsigned int, HSTRING__* * const, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScriptNotifyAllowed@CoreWebViewHost@DirectUI@@UEAAJPEAUIUri@@PEAH@Z
    virtual long IsScriptNotifyAllowed(IUri *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUriInPackageNavigationDomain@CoreWebViewHost@DirectUI@@UEAAJPEAUIUri@@PEAH@Z
    virtual long IsUriInPackageNavigationDomain(IUri *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@CoreWebViewHost@DirectUI@@QEAAJW4FocusNavigationDirection@2@PEAUXRECTF_WH@@@Z
    long NavigateFocus(int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToLocalStreamUriImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUIUriToStreamResolver@Web@5@@Z
    long NavigateToLocalStreamUriImpl(WindissectOpaque *, ::Windows::Web::IUriToStreamResolver *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToStringImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long NavigateToStringImpl(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateWithHttpRequestMessageImpl@CoreWebViewHost@DirectUI@@QEAAJPEAUIHttpRequestMessage@Http@Web@Windows@@@Z
    long NavigateWithHttpRequestMessageImpl(::Windows::Web::Http::IHttpRequestMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutomationProviderInvalidated@CoreWebViewHost@DirectUI@@UEAAJXZ
    virtual long OnAutomationProviderInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClipboardControlsUpdate@CoreWebViewHost@DirectUI@@UEAAJUtagRECT@@0PEAGHHH@Z
    virtual long OnClipboardControlsUpdate(tagRECT, tagRECT, unsigned short *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandStateChange@CoreWebViewHost@DirectUI@@UEAAJW4CommandStateChangeConstants@@H@Z
    virtual long OnCommandStateChange(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentFullScreen@CoreWebViewHost@DirectUI@@UEAAJH@Z
    virtual long OnContentFullScreen(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewContentLoading@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAG_K@Z
    virtual long OnCoreWebViewContentLoading(ICoreWebViewPrivate *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewDOMContentLoaded@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAG_K@Z
    virtual long OnCoreWebViewDOMContentLoaded(ICoreWebViewPrivate *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewFrameContentLoading@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAG_K@Z
    virtual long OnCoreWebViewFrameContentLoading(ICoreWebViewPrivate *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewFrameDOMContentLoaded@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAG_K@Z
    virtual long OnCoreWebViewFrameDOMContentLoaded(ICoreWebViewPrivate *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewFrameNavigationCompleted@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUCoreWebViewNavigationCompleteEventDetails@@_K@Z
    virtual long OnCoreWebViewFrameNavigationCompleted(ICoreWebViewPrivate *, CoreWebViewNavigationCompleteEventDetails *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewFrameNavigationStarting@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUCoreWebViewNavigationStartingEventDetails@@PEAH@Z
    virtual long OnCoreWebViewFrameNavigationStarting(ICoreWebViewPrivate *, CoreWebViewNavigationStartingEventDetails *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewLongRunningScriptDetected@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@KPEAH@Z
    virtual long OnCoreWebViewLongRunningScriptDetected(ICoreWebViewPrivate *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewNavigationCompleted@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUCoreWebViewNavigationCompleteEventDetails@@_K@Z
    virtual long OnCoreWebViewNavigationCompleted(ICoreWebViewPrivate *, CoreWebViewNavigationCompleteEventDetails *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewNavigationStarting@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUCoreWebViewNavigationStartingEventDetails@@PEAH@Z
    virtual long OnCoreWebViewNavigationStarting(ICoreWebViewPrivate *, CoreWebViewNavigationStartingEventDetails *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewNewWindowRequested@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUIUri@@1HPEAUICoreWebViewNewWindowRequest@@@Z
    virtual long OnCoreWebViewNewWindowRequested(ICoreWebViewPrivate *, IUri *, IUri *, int, ICoreWebViewNewWindowRequest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewPermissionRequested@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUCoreWebviewPermissionContext@@@Z
    virtual long OnCoreWebViewPermissionRequested(ICoreWebViewPrivate *, CoreWebviewPermissionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewScriptNotify@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAG1@Z
    virtual long OnCoreWebViewScriptNotify(ICoreWebViewPrivate *, unsigned short *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewUnsafeContentWarningDisplaying@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@@Z
    virtual long OnCoreWebViewUnsafeContentWarningDisplaying(ICoreWebViewPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewUnsupportedUriSchemeIdentified@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUCoreWebViewUnsupportedUriSchemeEventDetails@@PEAH@Z
    virtual long OnCoreWebViewUnsupportedUriSchemeIdentified(ICoreWebViewPrivate *, CoreWebViewUnsupportedUriSchemeEventDetails *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWebViewUnviewableContentIdentified@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUIUri@@PEAG2HH_K@Z
    virtual long OnCoreWebViewUnviewableContentIdentified(ICoreWebViewPrivate *, IUri *, unsigned short *, unsigned short *, int, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDepartingFocus@CoreWebViewHost@DirectUI@@UEAAJPEAUWebPlatformNavigateFocusInfo@@@Z
    virtual long OnDepartingFocus(WebPlatformNavigateFocusInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEngagementStateChange@CoreWebViewHost@DirectUI@@UEAAJW4CoreWebViewEngagementState@@@Z
    virtual long OnEngagementStateChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusedElementRectAvailable@CoreWebViewHost@DirectUI@@UEAAJUtagRECT@@@Z
    virtual long OnFocusedElementRectAvailable(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureChanged@CoreWebViewHost@DirectUI@@UEAAJI@Z
    virtual long OnPointerCaptureChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerUp@CoreWebViewHost@DirectUI@@UEAAJI@Z
    virtual long OnPointerUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyStateTransitionFinished@CoreWebViewHost@DirectUI@@UEAAXXZ
    virtual void OnProxyStateTransitionFinished();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyStateTransitionStarted@CoreWebViewHost@DirectUI@@UEAAXXZ
    virtual void OnProxyStateTransitionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyUpdate@CoreWebViewHost@DirectUI@@UEAAJW4tagWEBPLATFORM_PROXYSTATE@@@Z
    virtual long OnProxyUpdate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetContact@CoreWebViewHost@DirectUI@@UEAAJI@Z
    virtual long OnSetContact(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@CoreWebViewHost@DirectUI@@UEAAJH@Z
    virtual long OnSetFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourcePropertyChanged@CoreWebViewHost@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long OnSourcePropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleChange@CoreWebViewHost@DirectUI@@UEAAJPEBG@Z
    virtual long OnTitleChange(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnhandledInput@CoreWebViewHost@DirectUI@@UEAAJI_K_JPEAH@Z
    virtual long OnUnhandledInput(unsigned int, uint64_t, int64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUninitialized@CoreWebViewHost@DirectUI@@UEAAJXZ
    virtual long OnUninitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWebResourceRequested@CoreWebViewHost@DirectUI@@UEAAJPEAUICoreWebViewPrivate@@PEAUIUnknown@@@Z
    virtual long OnWebResourceRequested(ICoreWebViewPrivate *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomPercentChanged@CoreWebViewHost@DirectUI@@UEAAJK@Z
    virtual long OnZoomPercentChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAccelerator@CoreWebViewHost@DirectUI@@QEAAJPEAUtagMSG@@PEAH@Z
    long ProcessAccelerator(tagMSG *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CoreWebViewHost@DirectUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconnectVisualToComponent@CoreWebViewHost@DirectUI@@UEAAXXZ
    virtual void ReconnectVisualToComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWebViewPermanentSecurityManager@CoreWebViewHost@DirectUI@@SAJXZ
    static long RegisterWebViewPermanentSecurityManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetComponentNeedingReconnect@CoreWebViewHost@DirectUI@@UEAAXXZ
    virtual void ResetComponentNeedingReconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMouseWheelToHost@CoreWebViewHost@DirectUI@@UEAAJI_K_J@Z
    virtual long SendMouseWheelToHost(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultBackgroundColor@CoreWebViewHost@DirectUI@@QEAAJKM@Z
    long SetDefaultBackgroundColor(unsigned long, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDocumentSuspendLevel@CoreWebViewHost@DirectUI@@QEAAJI@Z
    long SetDocumentSuspendLevel(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CoreWebViewHost@DirectUI@@QEAAJ_N00@Z
    long SetFocus(bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageHandlesAllApplicationActivations@CoreWebViewHost@DirectUI@@UEAAJH@Z
    virtual long SetPageHandlesAllApplicationActivations(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPermissions@CoreWebViewHost@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@W4WebViewPermissionType@Controls@Xaml@UI@5@IKW4WebViewPermissionState@7895@@Z
    long SetPermissions(WindissectOpaque *, int, unsigned int, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CoreWebViewHost@DirectUI@@QEAAJMM@Z
    long SetSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadQueueMergeSetting@CoreWebViewHost@DirectUI@@UEAAJKK@Z
    virtual long SetThreadQueueMergeSetting(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformToRoot@CoreWebViewHost@DirectUI@@QEAAJPEBVCMILMatrix@@@Z
    long SetTransformToRoot(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CoreWebViewHost@DirectUI@@QEAAJPEAUIUnknown@@@Z
    long SetVisual(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWebView@CoreWebViewHost@DirectUI@@QEAAJPEAVWebView@2@@Z
    long SetWebView(::DirectUI::WebView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCustomSelectionUI@CoreWebViewHost@DirectUI@@UEAAJPEAUCustomUISelectionInfo@@IHPEAH@Z
    virtual long ShowCustomSelectionUI(CustomUISelectionInfo *, unsigned int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvokeLauncher@CoreWebViewHost@DirectUI@@SAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    static long TryInvokeLauncher(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledAcceleratorMessage@CoreWebViewHost@DirectUI@@UEAAJPEAUtagMSG@@@Z
    virtual long UnhandledAcceleratorMessage(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnyScriptNotifyUri@CoreWebViewHost@DirectUI@@SAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    static long get_AnyScriptNotifyUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanGoBackImpl@CoreWebViewHost@DirectUI@@QEAAJPEAE@Z
    long get_CanGoBackImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanGoForwardImpl@CoreWebViewHost@DirectUI@@QEAAJPEAE@Z
    long get_CanGoForwardImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferredPermissionRequestsImpl@CoreWebViewHost@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVWebViewDeferredPermissionRequest@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_DeferredPermissionRequestsImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentTitleImpl@CoreWebViewHost@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_DocumentTitleImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SettingsImpl@CoreWebViewHost@DirectUI@@QEAAJPEAPEAUIWebViewSettings@Controls@Xaml@UI@Windows@@@Z
    long get_SettingsImpl(::Windows::UI::Xaml::Controls::IWebViewSettings * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWebViewHost@DirectUI@@UEAA@XZ
    virtual ~CoreWebViewHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CoreWebViewHost@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CoreWebViewHost@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CoreWebViewHost@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareWithAllowedScriptNotifyUris@CoreWebViewHost@DirectUI@@AEAAJPEBGPEAH@Z
    long CompareWithAllowedScriptNotifyUris(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataObjectToDataPackage@CoreWebViewHost@DirectUI@@CAJPEAUIUnknown@@PEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    static long ConvertDataObjectToDataPackage(IUnknown *, ::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreWebViewSubclassWndProc@CoreWebViewHost@DirectUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t CoreWebViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeInit@CoreWebViewHost@DirectUI@@AEAAXH@Z
    void DeInit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnyScriptNotifyUri@CoreWebViewHost@DirectUI@@CAJXZ
    static long EnsureAnyScriptNotifyUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureApplicationContentUriRulesList@CoreWebViewHost@DirectUI@@AEAAJXZ
    long EnsureApplicationContentUriRulesList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWebViewHostWindowClassRegistered@CoreWebViewHost@DirectUI@@AEAAJPEAUHINSTANCE__@@@Z
    long EnsureWebViewHostWindowClassRegistered(HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumChildProc@CoreWebViewHost@DirectUI@@CAHPEAUHWND__@@_J@Z
    static int EnumChildProc(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindScheme@CoreWebViewHost@DirectUI@@CAJPEAUHSTRING__@@QEAPEBG_KPEAH@Z
    static long FindScheme(HSTRING__*, unsigned short const * * const, uint64_t, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorNoRef@CoreWebViewHost@DirectUI@@AEAAPEAUICompositor@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositor * GetCompositorNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataTransferPackage@CoreWebViewHost@DirectUI@@AEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    long GetDataTransferPackage(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIERasterizationScalesToRoot@CoreWebViewHost@DirectUI@@AEAAMXZ
    float GetUIERasterizationScalesToRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostWndProc@CoreWebViewHost@DirectUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t HostWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeLauncher@CoreWebViewHost@DirectUI@@CAJPEAUIUriRuntimeClass@Foundation@Windows@@H@Z
    static long InvokeLauncher(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCapturePreviewToBitmapAsyncOperationCompleted@CoreWebViewHost@DirectUI@@AEAAJPEAU?$IAsyncOperation@PEAUIInspectable@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnCapturePreviewToBitmapAsyncOperationCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoMoreTabStops@CoreWebViewHost@DirectUI@@AEAAJ_NPEAH@Z
    long OnNoMoreTabStops(bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabFromWindowProc@CoreWebViewHost@DirectUI@@AEAA_JXZ
    int64_t OnTabFromWindowProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHandledPointerWheel@CoreWebViewHost@DirectUI@@AEAAJI_K_J@Z
    long OnUnHandledPointerWheel(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlRootVisibilityChanged@CoreWebViewHost@DirectUI@@AEAAJ_N@Z
    long OnXamlRootVisibilityChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubclassCoreWebViewWindow@CoreWebViewHost@DirectUI@@AEAAJXZ
    long SubclassCoreWebViewWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubclassCoreWebViewWindow@CoreWebViewHost@DirectUI@@AEAAJXZ
    long UnSubclassCoreWebViewWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementState@CoreWebViewHost@DirectUI@@AEAAXW4CoreWebViewEngagementState@@@Z
    void UpdateEngagementState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRootVisual@CoreWebViewHost@DirectUI@@AEAAJXZ
    long UpdateRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowlessProxyRootVisual@CoreWebViewHost@DirectUI@@AEAAJXZ
    long UpdateWindowlessProxyRootVisual();
};
} // namespace DirectUI
