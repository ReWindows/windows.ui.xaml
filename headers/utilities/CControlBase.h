#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
class CControlBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleRootObjectReference@CControlBase@@UEAAJPEAXKKPEAKPEAI@Z
    virtual long GetAccessibleRootObjectReference(void *, unsigned long, unsigned long, unsigned long *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseUri@CControlBase@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetBaseUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserHost@CControlBase@@UEBAPEAUIXcpBrowserHost@@XZ
    virtual IXcpBrowserHost * GetBrowserHost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableFrameRateCounter@CControlBase@@UEBAIXZ
    virtual unsigned int GetEnableFrameRateCounter() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableOverdrawHeatMap@CControlBase@@UEBAIXZ
    virtual unsigned int GetEnableOverdrawHeatMap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableRedrawRegions@CControlBase@@UEBAIXZ
    virtual unsigned int GetEnableRedrawRegions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentity@CControlBase@@UEAAIXZ
    virtual unsigned int GetIdentity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecurityUri@CControlBase@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetSecurityUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWindow@CControlBase@@UEAAJPEAVCDependencyObject@@PEAX_NPEAPEAVCUIAWindow@@@Z
    virtual long GetUIAWindow(CDependencyObject *, void *, bool, CUIAWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXcpControlWindow@CControlBase@@UEAAPEAXXZ
    virtual void * GetXcpControlWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXcpDispatcher@CControlBase@@UEAAPEAUIXcpDispatcher@@XZ
    virtual IXcpDispatcher * GetXcpDispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CControlBase@@UEAAJXZ
    virtual long Init();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDependencyObjectValid@CControlBase@@UEAAJPEAVCDependencyObject@@@Z
    virtual long IsDependencyObjectValid(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@CControlBase@@UEAAHXZ
    virtual int IsInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUIAutomationCoreSupported@CControlBase@@UEAAIXZ
    virtual unsigned int IsUIAutomationCoreSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDebugSettingsChanged@CControlBase@@QEAAJXZ
    long OnDebugSettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstFrameDrawn@CControlBase@@UEAAJXZ
    virtual long OnFirstFrameDrawn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppUri@CControlBase@@UEAAJPEAUIPALUri@@@Z
    virtual long SetAppUri(IPALUri *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnableFrameRateCounter@CControlBase@@UEAAJI@Z
    virtual long SetEnableFrameRateCounter(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnableOverdrawHeatMap@CControlBase@@UEAAJI@Z
    virtual long SetEnableOverdrawHeatMap(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnableRedrawRegions@CControlBase@@UEAAJI@Z
    virtual long SetEnableRedrawRegions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAClientsAreListening@CControlBase@@UEAAJW4APAutomationEvents@UIAXcp@@@Z
    virtual long UIAClientsAreListening(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationEvent@CControlBase@@UEAAJPEAVCAutomationPeer@@W4APAutomationEvents@UIAXcp@@@Z
    virtual long UIARaiseAutomationEvent(CAutomationPeer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationPropertyChangedEvent@CControlBase@@UEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEBVCValue@@2@Z
    virtual long UIARaiseAutomationPropertyChangedEvent(CAutomationPeer *, int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseFocusChangedEventOnUIAWindow@CControlBase@@UEAAJXZ
    virtual long UIARaiseFocusChangedEventOnUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseNotificationEvent@CControlBase@@UEAAJPEAVCAutomationPeer@@W4AutomationNotificationKind@UIAXcp@@W4AutomationNotificationProcessing@4@Vxstring_ptr@@3@Z
    virtual long UIARaiseNotificationEvent(CAutomationPeer *, int, int, xstring_ptr, xstring_ptr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseTextEditTextChangedEvent@CControlBase@@UEAAJPEAVCAutomationPeer@@W4AutomationTextEditChangeType@UIAXcp@@PEAVCValue@@@Z
    virtual long UIARaiseTextEditTextChangedEvent(CAutomationPeer *, int, CValue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlBase@@UEAA@XZ
    virtual ~CControlBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckGraphicsSupportOverrides@CControlBase@@IEAAJXZ
    long CheckGraphicsSupportOverrides();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinit@CControlBase@@IEAAXXZ
    void Deinit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientURI@CControlBase@@IEAAJXZ
    long GetClientURI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScriptCallback@CControlBase@@KAJPEAXPEAVCDependencyObject@@UEventHandle@@1PEAVCEventArgs@@HPEAUIScriptObject@@P6AJ13@Z@Z
    static long ScriptCallback(void *, CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, IScriptObject *, long ( *)(CDependencyObject *, CEventArgs *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSource@CControlBase@@IEAAJP6AJPEAXPEAVCDependencyObject@@UEventHandle@@1PEAVCEventArgs@@HPEAUIScriptObject@@P6AJ13@Z@Z@Z
    long UpdateSource(long ( *)(void *, CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, IScriptObject *, long ( *)(CDependencyObject *, CEventArgs *)));
};
