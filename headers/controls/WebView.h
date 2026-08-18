#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 66 member(s).
namespace DirectUI {
class WebView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePreviewToBitmapAsync@WebView@DirectUI@@SAJPEAVCWebView@@@Z
    static long CapturePreviewToBitmapAsync(CWebView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePreviewToStreamAsyncImpl@WebView@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z
    long CapturePreviewToStreamAsyncImpl(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureSelectedContentToDataPackageAsyncImpl@WebView@DirectUI@@QEAAJPEAPEAU?$IAsyncOperation@PEAVDataPackage@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    long CaptureSelectedContentToDataPackageAsyncImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySelectedTextToClipboard@WebView@DirectUI@@SAJPEAVCWebView@@@Z
    static long CopySelectedTextToClipboard(CWebView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponent@WebView@DirectUI@@SAJPEAVCWebView@@PEAXPEAPEAX@Z
    static long CreateComponent(CWebView *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyComponent@WebView@DirectUI@@SAJPEAVCWebView@@@Z
    static long DestroyComponent(CWebView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultExecutionMode@WebView@DirectUI@@SA?AW4WebViewExecutionMode@Controls@Xaml@UI@Windows@@XZ
    static int GetDefaultExecutionMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementRect@WebView@DirectUI@@SAJPEAVCWebView@@PEAUXRECTF_RB@@@Z
    static long GetFocusedElementRect(CWebView *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementRectAsync@WebView@DirectUI@@SAJPEAVCWebView@@@Z
    static long GetFocusedElementRectAsync(CWebView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostedComponentAutomationProvider@WebView@DirectUI@@SAJPEAVCWebView@@PEAPEAUIUnknown@@@Z
    static long GetHostedComponentAutomationProvider(CWebView *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationSettings@WebView@DirectUI@@QEAAJPEAPEAUICoreWebViewNavigationSettings@@@Z
    long GetNavigationSettings(ICoreWebViewNavigationSettings * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@WebView@DirectUI@@UEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(CDependencyProperty const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@WebView@DirectUI@@SAJPEAVCWebView@@W4FocusNavigationDirection@2@PEAUXRECTF_WH@@@Z
    static long NavigateFocus(CWebView *, int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateImpl@WebView@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long NavigateImpl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@WebView@DirectUI@@SAJPEAVCWebView@@@Z
    static long OnResume(CWebView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceSet@WebView@DirectUI@@SAJPEAVCWebView@@AEBVCValue@@@Z
    static long OnSourceSet(CWebView *, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@WebView@DirectUI@@SAJPEAVCWebView@@_N@Z
    static long OnSuspend(CWebView *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@WebView@DirectUI@@SAJPEAVCWebView@@_N11@Z
    static long SetFocus(CWebView *, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInUserAction@WebView@DirectUI@@QEAAJ_N@Z
    long SetInUserAction(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPermissions@WebView@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@W4WebViewPermissionType@Controls@Xaml@UI@5@IKW4WebViewPermissionState@7895@@Z
    long SetPermissions(WindissectOpaque *, int, unsigned int, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@WebView@DirectUI@@SAJPEAVCWebView@@MM@Z
    static long SetSize(CWebView *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformToRoot@WebView@DirectUI@@SAJPEAVCWebView@@PEBVCMILMatrix@@@Z
    static long SetTransformToRoot(CWebView *, CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@WebView@DirectUI@@SAJPEAVCWebView@@PEAUIUnknown@@@Z
    static long SetVisual(CWebView *, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZoom@WebView@DirectUI@@SAJPEAVCWebView@@J@Z
    static long SetZoom(CWebView *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAccelerator@WebView@DirectUI@@SAJPEAVCWebView@@PEAXPEAI@Z
    static long TranslateAccelerator(CWebView *, void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerWheelChanged@WebView@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerWheelChanged(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WebResourceRequested@WebView@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVWebView@Controls@Xaml@UI@Windows@@PEAVWebViewWebResourceRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_WebResourceRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultBackgroundColorImpl@WebView@DirectUI@@QEAAJPEAUColor@UI@Windows@@@Z
    long get_DefaultBackgroundColorImpl(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowedScriptNotifyUris@WebView@DirectUI@@UEAAJPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_AllowedScriptNotifyUris(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WebResourceRequested@WebView@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WebResourceRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebView@DirectUI@@UEAA@XZ
    virtual ~WebView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@WebView@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@WebView@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@WebView@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WebView@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@WebView@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@WebView@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddXamlRootChangedEventHandler@WebView@DirectUI@@AEAAJXZ
    long AddXamlRootChangedEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeInit@WebView@DirectUI@@AEAAXXZ
    void DeInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentCreated@WebView@DirectUI@@AEAAJXZ
    long EnsureComponentCreated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementRect@WebView@DirectUI@@AEAAJPEAUtagRECT@@@Z
    long GetFocusedElementRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentColor@WebView@DirectUI@@CAJPEAUColor@UI@Windows@@@Z
    static long GetTransparentColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@WebView@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceSet@WebView@DirectUI@@AEAAJAEBVCValue@@@Z
    long OnSourceSet(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlRootChanged@WebView@DirectUI@@AEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAUIXamlRootChangedEventArgs@456@@Z
    long OnXamlRootChanged(::Windows::UI::Xaml::IXamlRoot *, ::Windows::UI::Xaml::IXamlRootChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContainsFullScreenElementChangedEvent@WebView@DirectUI@@AEAAJXZ
    long RaiseContainsFullScreenElementChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContentLoadingEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@E@Z
    long RaiseContentLoadingEvent(WindissectOpaque *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDOMContentLoadedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@E@Z
    long RaiseDOMContentLoadedEvent(WindissectOpaque *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLoadCompletedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long RaiseLoadCompletedEvent(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLongRunningScriptDetectedEvent@WebView@DirectUI@@AEAAJUTimeSpan@Foundation@Windows@@PEAE@Z
    long RaiseLongRunningScriptDetectedEvent(WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigationCompletedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@EW4WebErrorStatus@Web@5@E@Z
    long RaiseNavigationCompletedEvent(WindissectOpaque *, unsigned char, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigationFailedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@W4WebErrorStatus@Web@5@@Z
    long RaiseNavigationFailedEvent(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNavigationStartingEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@EIPEBEPEAE@Z
    long RaiseNavigationStartingEvent(WindissectOpaque *, unsigned char, unsigned int, unsigned char const *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNewWindowRequestedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@0PEAE@Z
    long RaiseNewWindowRequestedEvent(WindissectOpaque *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePermissionRequestedEvent@WebView@DirectUI@@AEAAJPEAUCoreWebviewPermissionContext@@@Z
    long RaisePermissionRequestedEvent(CoreWebviewPermissionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseScriptNotifyEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUHSTRING__@@@Z
    long RaiseScriptNotifyEvent(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSeparateProcessLostEvent@WebView@DirectUI@@AEAAJXZ
    long RaiseSeparateProcessLostEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUnsafeContentWarningDisplayingEvent@WebView@DirectUI@@AEAAJXZ
    long RaiseUnsafeContentWarningDisplayingEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUnsupportedUriSchemeIdentifiedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEBEIPEAE@Z
    long RaiseUnsupportedUriSchemeIdentifiedEvent(WindissectOpaque *, unsigned char const *, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUnviewableContentIdentifiedEvent@WebView@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@0PEAUHSTRING__@@@Z
    long RaiseUnviewableContentIdentifiedEvent(WindissectOpaque *, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseWebViewResourceRequestedEvent@WebView@DirectUI@@AEAAJPEAUIWebViewControlWebResourceRequestedEventArgs@UI@Web@Windows@@@Z
    long RaiseWebViewResourceRequestedEvent(::Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveXamlRootChangedEventHandler@WebView@DirectUI@@AEAAJXZ
    long RemoveXamlRootChangedEventHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWebViewBackgroundColor@WebView@DirectUI@@AEAAJUColor@UI@Windows@@@Z
    long SetCoreWebViewBackgroundColor(::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@WebView@DirectUI@@AEAAJMM@Z
    long SetSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeChangedEventHandler@WebView@DirectUI@@AEAAJXZ
    long SetSizeChangedEventHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserVisibilityInternal@WebView@DirectUI@@AEAAJ_N@Z
    long SetUserVisibilityInternal(bool);
};
} // namespace DirectUI
