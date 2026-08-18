#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 62 member(s).
class CXcpBrowserHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAsync@CXcpBrowserHost@@UEAAXPEAUIPALAbortableOperation@@@Z
    virtual void AbortAsync(IPALAbortableOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAsyncCallback@CXcpBrowserHost@@SAJPEAUIObject@@@Z
    static long AbortAsyncCallback(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationStartupEventComplete@CXcpBrowserHost@@UEAAXXZ
    virtual void ApplicationStartupEventComplete();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXcpBrowserHost@@QEAA@XZ
    CXcpBrowserHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPreviousPointerUpdate@CXcpBrowserHost@@UEAAXXZ
    virtual void ClearPreviousPointerUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CXcpBrowserHost@@SAJPEAUIXcpHostSite@@PEAUIXcpDispatcher@@PEAPEAUIXcpBrowserHost@@@Z
    static long Create(IXcpHostSite *, IXcpDispatcher *, IXcpBrowserHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDownloadRequest@CXcpBrowserHost@@UEAAJPEAUIDownloader@@PEAUIPALUri@@PEAUIPALDownloadRequest@@HHPEAPEAUIPALAbortableOperation@@@Z
    virtual long CreateDownloadRequest(IDownloader *, IPALUri *, IPALDownloadRequest *, int, int, IPALAbortableOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHwndHost@CXcpBrowserHost@@UEAAPEAUIPALHwndHost@@XZ
    virtual IPALHwndHost * CreateHwndHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowlessHost@CXcpBrowserHost@@UEAAPEAUIPALWindowlessHost@@PEAUIXcpHostSite@@PEAVCDependencyObject@@I@Z
    virtual IPALWindowlessHost * CreateWindowlessHost(IXcpHostSite *, CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinit@CXcpBrowserHost@@UEAAXXZ
    virtual void Deinit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireApplicationLoadComplete@CXcpBrowserHost@@UEAAXXZ
    virtual void FireApplicationLoadComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireApplicationStartupEventComplete@CXcpBrowserHost@@UEAAXXZ
    virtual void FireApplicationStartupEventComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireExecuteOnUIThreadMessage@CXcpBrowserHost@@UEAAJPEAUIPALExecuteOnUIThread@@I@Z
    virtual long FireExecuteOnUIThreadMessage(IPALExecuteOnUIThread *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireForceGCCollectEvent@CXcpBrowserHost@@UEAAXXZ
    virtual void FireForceGCCollectEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeResourceLibraries@CXcpBrowserHost@@UEAAXXZ
    virtual void FreeResourceLibraries();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CXcpBrowserHost@@UEAAJPEAI@Z
    virtual long GetActualHeight(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CXcpBrowserHost@@UEAAJPEAI@Z
    virtual long GetActualWidth(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextInterface@CXcpBrowserHost@@UEAAPEAVCCoreServices@@XZ
    virtual CCoreServices * GetContextInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedResourceString@CXcpBrowserHost@@UEAAJIPEAVxstring_ptr@@@Z
    virtual long GetLocalizedResourceString(unsigned int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonLocalizedErrorString@CXcpBrowserHost@@UEAAJIPEAVxstring_ptr@@@Z
    virtual long GetNonLocalizedErrorString(unsigned int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonLocalizedResourceString@CXcpBrowserHost@@UEAAJIPEAVxstring_ptr@@@Z
    virtual long GetNonLocalizedResourceString(unsigned int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceData@CXcpBrowserHost@@UEAAJIAEBVxstring_ptr_view@@PEAVRawData@@@Z
    virtual long GetResourceData(unsigned int, xstring_ptr_view const &, RawData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputMessage@CXcpBrowserHost@@UEAAXIPEAUMsgPacket@@PEAVCContentRoot@@AEA_N@Z
    virtual void HandleInputMessage(unsigned int, MsgPacket *, CContentRoot *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePromotedTick@CXcpBrowserHost@@UEAAXXZ
    virtual void HandlePromotedTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkMessageHandlerEnter@CXcpBrowserHost@@UEAAIXZ
    virtual unsigned int MarkMessageHandlerEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkMessageHandlerExit@CXcpBrowserHost@@UEAAIXZ
    virtual unsigned int MarkMessageHandlerExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayChange@CXcpBrowserHost@@UEAAXXZ
    virtual void OnDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaint@CXcpBrowserHost@@UEAAJXZ
    virtual long OnPaint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTick@CXcpBrowserHost@@UEAAJXZ
    virtual long OnTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostAsyncScriptCallbackRequest@CXcpBrowserHost@@SAJPEAXPEAVCDependencyObject@@UEventHandle@@1PEAVCEventArgs@@HPEAUIScriptObject@@P6AJ13@Z@Z
    static long PostAsyncScriptCallbackRequest(void *, CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, IScriptObject *, long ( *)(CDependencyObject *, CEventArgs *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAllDeferredInvokes@CXcpBrowserHost@@UEAAXXZ
    virtual void ProcessAllDeferredInvokes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMouseCapture@CXcpBrowserHost@@UEAAXXZ
    virtual void ReleaseMouseCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplayPreviousPointerUpdate@CXcpBrowserHost@@UEAAXI@Z
    virtual void ReplayPreviousPointerUpdate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CXcpBrowserHost@@UEAAXXZ
    virtual void ReportError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestReplayPreviousPointerUpdate@CXcpBrowserHost@@UEAAXXZ
    virtual void RequestReplayPreviousPointerUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCore@CXcpBrowserHost@@UEAAJXZ
    virtual long ResetCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CXcpBrowserHost@@UEAAJXZ
    virtual long ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeTickPromotion@CXcpBrowserHost@@UEAAXXZ
    virtual void ResumeTickPromotion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMouseCapture@CXcpBrowserHost@@UEAAXPEAUHWND__@@@Z
    virtual void SetMouseCapture(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMouseCursor@CXcpBrowserHost@@UEAAJW4MouseCursor@@@Z
    virtual long SetMouseCursor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSizeOverride@CXcpBrowserHost@@UEAAJPEBUXSIZE@@PEAX@Z
    virtual long SetWindowSizeOverride(XSIZE const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsyncDownloadTrigger@CXcpBrowserHost@@UEAAJXZ
    virtual long StartAsyncDownloadTrigger();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendTickPromotion@CXcpBrowserHost@@UEAAXXZ
    virtual void SuspendTickPromotion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncScriptCallbackRequest@CXcpBrowserHost@@SAJPEAXPEAVCDependencyObject@@UEventHandle@@1PEAVCEventArgs@@HPEAUIScriptObject@@P6AJ13@Z@Z
    static long SyncScriptCallbackRequest(void *, CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, IScriptObject *, long ( *)(CDependencyObject *, CEventArgs *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAClientsAreListening@CXcpBrowserHost@@UEAAJW4APAutomationEvents@UIAXcp@@@Z
    virtual long UIAClientsAreListening(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationEvent@CXcpBrowserHost@@UEAAJPEAVCAutomationPeer@@W4APAutomationEvents@UIAXcp@@@Z
    virtual long UIARaiseAutomationEvent(CAutomationPeer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationPropertyChangedEvent@CXcpBrowserHost@@UEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEBVCValue@@2@Z
    virtual long UIARaiseAutomationPropertyChangedEvent(CAutomationPeer *, int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseFocusChangedEventOnUIAWindow@CXcpBrowserHost@@UEAAJXZ
    virtual long UIARaiseFocusChangedEventOnUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseNotificationEvent@CXcpBrowserHost@@UEAAJPEAVCAutomationPeer@@W4AutomationNotificationKind@UIAXcp@@W4AutomationNotificationProcessing@4@Vxstring_ptr@@3@Z
    virtual long UIARaiseNotificationEvent(CAutomationPeer *, int, int, xstring_ptr, xstring_ptr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseTextEditTextChangedEvent@CXcpBrowserHost@@UEAAJPEAVCAutomationPeer@@W4AutomationTextEditChangeType@UIAXcp@@PEAVCValue@@@Z
    virtual long UIARaiseTextEditTextChangedEvent(CAutomationPeer *, int, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EmptySource@CXcpBrowserHost@@UEAAJI@Z
    virtual long put_EmptySource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@CXcpBrowserHost@@UEAAJIPEAEPEAUIPALMemory@@@Z
    virtual long put_Source(unsigned int, unsigned char *, IPALMemory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXcpBrowserHost@@UEAA@XZ
    virtual ~CXcpBrowserHost();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceString@CXcpBrowserHost@@AEAAJPEAUHINSTANCE__@@IPEAVxstring_ptr@@@Z
    long GetResourceString(HINSTANCE__*, unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeyboardMessage@CXcpBrowserHost@@AEAAXIPEAUMsgPacket@@PEAUInputMessage@@AEA_N@Z
    void HandleKeyboardMessage(unsigned int, MsgPacket *, InputMessage *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CXcpBrowserHost@@EEAAJPEAUIXcpHostSite@@PEAUIXcpDispatcher@@@Z
    virtual long Init(IXcpHostSite *, IXcpDispatcher *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPreviousPointerUpdateMessageValid@CXcpBrowserHost@@AEAA_NI@Z
    bool IsPreviousPointerUpdateMessageValid(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResourceSatelliteDlls@CXcpBrowserHost@@AEAAJXZ
    long LoadResourceSatelliteDlls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStringResource@CXcpBrowserHost@@AEAAJPEAUHINSTANCE__@@IAEAV?$TStringBuilder@$0GA@@@PEAI@Z
    long LoadStringResource(HINSTANCE__*, unsigned int, WindissectOpaque &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreen@CXcpBrowserHost@@EEAAXI@Z
    virtual void SetFullScreen(unsigned int);
};
