#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 63 member(s).
class CJupiterControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CJupiterControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientToScreen@CJupiterControl@@QEAAXPEAUtagPOINT@@@Z
    void ClientToScreen(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCoreWindow@CJupiterControl@@QEAAJPEAUICoreWindow@Core@UI@Windows@@_N@Z
    long ConfigureCoreWindow(::Windows::UI::Core::ICoreWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CJupiterControl@@SAJPEAPEAV1@@Z
    static long Create(CJupiterControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CJupiterControl@@QEAAJPEBUWindowCreationParameters@Xaml@UI@Windows@@PEAPEAUICoreWindow@Core@45@@Z
    long CreateCoreWindow(::Windows::UI::Xaml::WindowCreationParameters const *, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResourceManager@CJupiterControl@@UEAAJPEAPEAUIPALResourceManager@@@Z
    virtual long CreateResourceManager(IPALResourceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@CJupiterControl@@QEAAXXZ
    void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUIA@CJupiterControl@@QEAAXXZ
    void DisconnectUIA();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CJupiterControl@@UEAAJPEAI@Z
    virtual long GetActualHeight(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CJupiterControl@@UEAAJPEAI@Z
    virtual long GetActualWidth(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreServices@CJupiterControl@@QEBAPEAVCCoreServices@@XZ
    CCoreServices * GetCoreServices() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWindow@CJupiterControl@@UEAAJPEAVCDependencyObject@@PEAX_NPEAPEAVCUIAWindow@@@Z
    virtual long GetUIAWindow(CDependencyObject *, void *, bool, CUIAWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXcpControlWindow@CJupiterControl@@UEAAPEAXXZ
    virtual void * GetXcpControlWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGetObjectMessage@CJupiterControl@@QEAA_JI_K_J@Z
    int64_t HandleGetObjectMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerMessage@CJupiterControl@@QEAAII_K_JPEAVCContentRoot@@PEAUIPointerPoint@Input@UI@Windows@@PEAUIPointerEventArgs@Core@56@@Z
    unsigned int HandlePointerMessage(unsigned int, uint64_t, int64_t, CContentRoot *, ::Windows::UI::Input::IPointerPoint *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePromotedTick@CJupiterControl@@QEAAXXZ
    void HandlePromotedTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWindowMessage@CJupiterControl@@QEAAII_K_JPEAVCContentRoot@@@Z
    unsigned int HandleWindowMessage(unsigned int, uint64_t, int64_t, CContentRoot *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasFocusIO@CJupiterControl@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementReference@CJupiterControl@@UEAAXXZ
    virtual void IncrementReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CJupiterControl@@UEAAJXZ
    virtual long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateView@CJupiterControl@@UEAAXPEAUXRECT_WH@@@Z
    virtual void InvalidateView(XRECT_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisplayOn@CJupiterControl@@UEAAIXZ
    virtual unsigned int IsDisplayOn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHdrOutput@CJupiterControl@@UEBA_NXZ
    virtual bool IsHdrOutput() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowDestroyed@CJupiterControl@@UEAAIXZ
    virtual unsigned int IsWindowDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkMessageHandlerEnter@CJupiterControl@@QEAAIXZ
    unsigned int MarkMessageHandlerEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkMessageHandlerExit@CJupiterControl@@QEAAIXZ
    unsigned int MarkMessageHandlerExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImmersiveColorSetChanged@CJupiterControl@@QEAAJXZ
    long NotifyImmersiveColorSetChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstFrameDrawn@CJupiterControl@@UEAAJXZ
    virtual long OnFirstFrameDrawn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnJupiterWindowSizeChanged@CJupiterControl@@QEAAJAEAVCJupiterWindow@@@Z
    long OnJupiterWindowSizeChanged(CJupiterWindow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReentrancyDetected@CJupiterControl@@UEAAXXZ
    virtual void OnReentrancyDetected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CJupiterControl@@QEAAJXZ
    long OnThemeChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CJupiterControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CJupiterControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseReference@CJupiterControl@@UEAAXXZ
    virtual void ReleaseReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CJupiterControl@@UEAAXPEAUIErrorService@@@Z
    virtual void ReportError(IErrorService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVisualTree@CJupiterControl@@QEAAJXZ
    long ResetVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunMessageLoop@CJupiterControl@@QEAAJXZ
    long RunMessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenToClient@CJupiterControl@@QEAAXPEAUtagPOINT@@@Z
    void ScreenToClient(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHdrOutputOverride@CJupiterControl@@QEAAX_N@Z
    void SetHdrOutputOverride(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTicksEnabled@CJupiterControl@@QEAAJI@Z
    long SetTicksEnabled(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CJupiterControl@@QEAAJPEAVCJupiterWindow@@_N@Z
    long SetWindow(CJupiterWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CJupiterControl@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetCursorToCoreWindowCursor@CJupiterControl@@UEAAJPEAI@Z
    virtual long TrySetCursorToCoreWindowCursor(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAClientsAreListening@CJupiterControl@@UEAAJW4APAutomationEvents@UIAXcp@@@Z
    virtual long UIAClientsAreListening(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationEvent@CJupiterControl@@UEAAJPEAVCAutomationPeer@@W4APAutomationEvents@UIAXcp@@@Z
    virtual long UIARaiseAutomationEvent(CAutomationPeer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationPropertyChangedEvent@CJupiterControl@@UEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEBVCValue@@2@Z
    virtual long UIARaiseAutomationPropertyChangedEvent(CAutomationPeer *, int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseFocusChangedEventOnUIAWindow@CJupiterControl@@UEAAJXZ
    virtual long UIARaiseFocusChangedEventOnUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseNotificationEvent@CJupiterControl@@UEAAJPEAVCAutomationPeer@@W4AutomationNotificationKind@UIAXcp@@W4AutomationNotificationProcessing@4@Vxstring_ptr@@3@Z
    virtual long UIARaiseNotificationEvent(CAutomationPeer *, int, int, xstring_ptr, xstring_ptr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseTextEditTextChangedEvent@CJupiterControl@@UEAAJPEAVCAutomationPeer@@W4AutomationTextEditChangeType@UIAXcp@@PEAVCValue@@@Z
    virtual long UIARaiseTextEditTextChangedEvent(CAutomationPeer *, int, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CJupiterControl@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFontScale@CJupiterControl@@QEAAJM@Z
    long UpdateFontScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSource@CJupiterControl@@UEAAJXZ
    virtual long UpdateSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapHwnd@CJupiterControl@@QEAAJPEAUHWND__@@@Z
    long WrapHwnd(HWND__*);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CJupiterControl@@AEAA@XZ
    CJupiterControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGenericMessage@CJupiterControl@@AEAAII_K_JPEAVCContentRoot@@@Z
    unsigned int HandleGenericMessage(unsigned int, uint64_t, int64_t, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeyMessage@CJupiterControl@@AEAAII_K_JPEAVCContentRoot@@@Z
    unsigned int HandleKeyMessage(unsigned int, uint64_t, int64_t, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CJupiterControl@@AEAAXXZ
    void Paint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHdr@CJupiterControl@@AEBAJXZ
    long UpdateHdr() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CJupiterControl@@EEAA@XZ
    virtual ~CJupiterControl();
};
