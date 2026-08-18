#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 54 member(s).
class CommonBrowserHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CommonBrowserHost@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CLR_FireEvent@CommonBrowserHost@@UEAAJPEAVCDependencyObject@@UEventHandle@@0PEAVCEventArgs@@I@Z
    virtual long CLR_FireEvent(CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUri@CommonBrowserHost@@UEAAJAEBVxstring_ptr@@IPEAH@Z
    virtual long CheckUri(xstring_ptr const &, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUri@CommonBrowserHost@@UEAAJPEAUIPALUri@@IPEAH@Z
    virtual long CheckUri(IPALUri *, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRenderTarget@CommonBrowserHost@@UEAAJXZ
    virtual long CleanupRenderTarget();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommonBrowserHost@@QEAA@XZ
    CommonBrowserHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromXaml@CommonBrowserHost@@UEAAJIPEBG_N11PEAPEAVCDependencyObject@@@Z
    virtual long CreateFromXaml(unsigned int, unsigned short const *, bool, bool, bool, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTarget@CommonBrowserHost@@UEAAJXZ
    virtual long CreateRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachCore@CommonBrowserHost@@UEAAJXZ
    virtual long DetachCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorScheduler@CommonBrowserHost@@UEAAPEAVCompositorScheduler@@XZ
    virtual CompositorScheduler * GetCompositorScheduler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextInterface@CommonBrowserHost@@UEAAPEAVCCoreServices@@XZ
    virtual CCoreServices * GetContextInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloaderSiteBaseUri@CommonBrowserHost@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long GetDownloaderSiteBaseUri(IPALUri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloaderSiteSecurityUri@CommonBrowserHost@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long GetDownloaderSiteSecurityUri(IPALUri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorService@CommonBrowserHost@@UEAAJPEAPEAUIErrorService@@@Z
    virtual long GetErrorService(IErrorService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameScheduler@CommonBrowserHost@@UEAAPEAUITickableFrameScheduler@@XZ
    virtual ITickableFrameScheduler * GetFrameScheduler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGraphicsDeviceManager@CommonBrowserHost@@UEAAPEAVWindowsGraphicsDeviceManager@@XZ
    virtual WindowsGraphicsDeviceManager * GetGraphicsDeviceManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMouseCursor@CommonBrowserHost@@UEAA?AW4MouseCursor@@XZ
    virtual int GetMouseCursor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicOrFullScreenRootVisual@CommonBrowserHost@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetPublicOrFullScreenRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisual@CommonBrowserHost@@UEAAJPEAPEAVCDependencyObject@@@Z
    virtual long GetRootVisual(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemGlyphTypefaces@CommonBrowserHost@@UEAAJPEAPEAVCDependencyObject@@@Z
    virtual long GetSystemGlyphTypefaces(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderTarget@CommonBrowserHost@@UEAAIXZ
    virtual unsigned int HasRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CommonBrowserHost@@UEAAJPEAUIXcpHostSite@@PEAUIXcpDispatcher@@@Z
    virtual long Init(IXcpHostSite *, IXcpDispatcher *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNetworkingUnrestricted@CommonBrowserHost@@UEAAIXZ
    virtual unsigned int IsNetworkingUnrestricted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReentrancyAllowed@CommonBrowserHost@@UEAAJPEAH@Z
    virtual long IsReentrancyAllowed(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShuttingDown@CommonBrowserHost@@UEAAIXZ
    virtual unsigned int IsShuttingDown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTestBrowserHost@CommonBrowserHost@@UEBAIXZ
    virtual unsigned int IsTestBrowserHost() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessExecuteMessage@CommonBrowserHost@@UEAAJXZ
    virtual long ProcessExecuteMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeThreadMessages@CommonBrowserHost@@UEAAXXZ
    virtual void PurgeThreadMessages();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CommonBrowserHost@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDownloader@CommonBrowserHost@@UEAAXXZ
    virtual void ResetDownloader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVisualTree@CommonBrowserHost@@UEAAJXZ
    virtual long ResetVisualTree();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShuttingDown@CommonBrowserHost@@UEAAXI@Z
    virtual void SetShuttingDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFireEvent@CommonBrowserHost@@UEAAJPEAVCDependencyObject@@UEventHandle@@0PEAVCEventArgs@@HPEAH@Z
    virtual long ShouldFireEvent(CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAClientsAreListening@CommonBrowserHost@@UEAAJW4APAutomationEvents@UIAXcp@@@Z
    virtual long UIAClientsAreListening(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationEvent@CommonBrowserHost@@UEAAJPEAVCAutomationPeer@@W4APAutomationEvents@UIAXcp@@@Z
    virtual long UIARaiseAutomationEvent(CAutomationPeer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationPropertyChangedEvent@CommonBrowserHost@@UEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEBVCValue@@2@Z
    virtual long UIARaiseAutomationPropertyChangedEvent(CAutomationPeer *, int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseFocusChangedEventOnUIAWindow@CommonBrowserHost@@UEAAJXZ
    virtual long UIARaiseFocusChangedEventOnUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsecureDownload@CommonBrowserHost@@UEAAJPEAUIPALDownloadRequest@@PEAPEAUIPALAbortableOperation@@PEAUIPALUri@@@Z
    virtual long UnsecureDownload(IPALDownloadRequest *, IPALAbortableOperation * *, IPALUri *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseUri@CommonBrowserHost@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long get_BaseUri(IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrFrameRate@CommonBrowserHost@@UEAAMXZ
    virtual float get_CurrFrameRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableFrameRateCounter@CommonBrowserHost@@UEAAJPEAI@Z
    virtual long get_EnableFrameRateCounter(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableOverdrawHeatMap@CommonBrowserHost@@UEAAJPEAI@Z
    virtual long get_EnableOverdrawHeatMap(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableRedrawRegions@CommonBrowserHost@@UEAAJPEAI@Z
    virtual long get_EnableRedrawRegions(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecurityUri@CommonBrowserHost@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long get_SecurityUri(IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_EnableFrameRateCounter@CommonBrowserHost@@UEAAJI@Z
    virtual long set_EnableFrameRateCounter(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_EnableOverdrawHeatMap@CommonBrowserHost@@UEAAJI@Z
    virtual long set_EnableOverdrawHeatMap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_EnableRedrawRegions@CommonBrowserHost@@UEAAJI@Z
    virtual long set_EnableRedrawRegions(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommonBrowserHost@@UEAA@XZ
    virtual ~CommonBrowserHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupCommon@CommonBrowserHost@@IEAAXXZ
    void CleanupCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDownloader@CommonBrowserHost@@IEAAJXZ
    long EnsureDownloader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDownloads@CommonBrowserHost@@IEAAJXZ
    long StopDownloads();
};
