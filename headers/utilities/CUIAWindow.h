#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 88 member(s).
class CUIAWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseEventAdded@CUIAWindow@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventAdded(int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseEventRemoved@CUIAWindow@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventRemoved(int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationPeerAnnotationCollectionToVariant@CUIAWindow@@QEAAJPEAVCAutomationPeerAnnotationCollection@@HPEAUtagVARIANT@@@Z
    long AutomationPeerAnnotationCollectionToVariant(CAutomationPeerAnnotationCollection *, int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CValueToVariant@CUIAWindow@@QEAAJAEBVCValue@@PEAUtagVARIANT@@@Z
    long CValueToVariant(CValue const &, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertEnumToId@CUIAWindow@@QEAAHW4APAutomationEvents@UIAXcp@@@Z
    int ConvertEnumToId(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertIdToAPAutomationControlType@CUIAWindow@@QEAA?AW4APAutomationControlType@UIAXcp@@H@Z
    int ConvertIdToAPAutomationControlType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertIdToAPAutomationProperties@CUIAWindow@@QEAA?AW4APAutomationProperties@UIAXcp@@H@Z
    int ConvertIdToAPAutomationProperties(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWindow@@QEAAJPEAVCAutomationPeerCollection@@PEAUtagVARIANT@@@Z
    long ConvertToVariant(CAutomationPeerCollection *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProviderForAP@CUIAWindow@@QEAAJPEAVCAutomationPeer@@PEAPEAVCUIAWrapper@@@Z
    long CreateProviderForAP(CAutomationPeer *, CUIAWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinit@CUIAWindow@@QEAAXXZ
    void Deinit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementProviderFromPoint@CUIAWindow@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    virtual long ElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementProviderFromPointImpl@CUIAWindow@@QEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    long ElementProviderFromPointImpl(double, double, IRawElementProviderFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElement@CUIAWindow@@UEAAJPEAGPEAPEAUIRawElementProviderFragment@@@Z
    virtual long FindElement(unsigned short *, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeersForRoot@CUIAWindow@@SAIPEAVCUIElement@@PEAPEAPEAVCAutomationPeer@@@Z
    static unsigned int GetAutomationPeersForRoot(CUIElement *, CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentHostElement@CUIAWindow@@UEAAJU_GUID@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetComponentHostElement(_GUID, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteAutomationProxy@CUIAWindow@@QEAAJPEAVCAutomationPeer@@PEAPEAUIRawElementProviderFragment@@@Z
    long GetComponentSiteAutomationProxy(CAutomationPeer *, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@CUIAWindow@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@CUIAWindow@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetFocus(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusImpl@CUIAWindow@@QEAAJPEAPEAUIRawElementProviderFragment@@@Z
    long GetFocusImpl(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CUIAWindow@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverrideProviderForHwnd@CUIAWindow@@UEAAJPEAUHWND__@@PEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetOverrideProviderForHwnd(HWND__*, IRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverrideProviderForHwndImpl@CUIAWindow@@QEAAJPEAUHWND__@@PEAPEAUIRawElementProviderSimple@@@Z
    long GetOverrideProviderForHwndImpl(HWND__*, IRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CUIAWindow@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CUIAWindow@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CUIAWindow@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CUIAWindow@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CUIAWindow@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWindowValidator@CUIAWindow@@QEAAPEAUIUIAWindowValidator@@XZ
    IUIAWindowValidator * GetUIAWindowValidator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualIdentifier@CUIAWindow@@QEAA_KXZ
    uint64_t GetVisualIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeBoundingRectangle@CUIAWindow@@UEAAJPEAUUiaVisualRelativeRectangle@@@Z
    virtual long GetVisualRelativeBoundingRectangle(UiaVisualRelativeRectangle *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeCenterPoint@CUIAWindow@@UEAAJPEAUUiaVisualRelativePoint@@@Z
    virtual long GetVisualRelativeCenterPoint(UiaVisualRelativePoint *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeClickablePoint@CUIAWindow@@UEAAJPEAUUiaVisualRelativePoint@@@Z
    virtual long GetVisualRelativeClickablePoint(UiaVisualRelativePoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CUIAWindow@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CUIAWindow@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateImpl@CUIAWindow@@QEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    long NavigateImpl(int, IRawElementProviderFragment * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAWindow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CUIAWindow@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFrameworkProvideWindowProperties@CUIAWindow@@SA_NXZ
    static bool ShouldFrameworkProvideWindowProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformClientToScreen@CUIAWindow@@QEAAHAEAVUIAHostEnvironmentInfo@@PEAUXRECTF_WH@@@Z
    int TransformClientToScreen(UIAHostEnvironmentInfo &, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAClientsAreListening@CUIAWindow@@QEBAJW4APAutomationEvents@UIAXcp@@@Z
    long UIAClientsAreListening(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationEvent@CUIAWindow@@QEAAJPEAVCAutomationPeer@@W4APAutomationEvents@UIAXcp@@@Z
    long UIARaiseAutomationEvent(CAutomationPeer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseAutomationPropertyChangedEvent@CUIAWindow@@QEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEBVCValue@@2@Z
    long UIARaiseAutomationPropertyChangedEvent(CAutomationPeer *, int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseFocusChangedEventOnUIAWindow@CUIAWindow@@QEAAJXZ
    long UIARaiseFocusChangedEventOnUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseNotificationEvent@CUIAWindow@@QEAAJPEAVCAutomationPeer@@W4AutomationNotificationKind@UIAXcp@@W4AutomationNotificationProcessing@4@AEBVxstring_ptr@@3@Z
    long UIARaiseNotificationEvent(CAutomationPeer *, int, int, xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIARaiseTextEditTextChangedEvent@CUIAWindow@@QEAAJPEAVCAutomationPeer@@W4AutomationTextEditChangeType@UIAXcp@@PEAVCValue@@@Z
    long UIARaiseTextEditTextChangedEvent(CAutomationPeer *, int, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VariantToCValue@CUIAWindow@@QEAAJPEBUtagVARIANT@@PEAVCValue@@@Z
    long VariantToCValue(tagVARIANT const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@CUIAWindow@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@CUIAWindow@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CUIAWindow@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CUIAWindow@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIAWindow@@IEAA@AEBVUIAHostEnvironmentInfo@@PEAUIXcpHostSite@@@Z
    CUIAWindow(UIAHostEnvironmentInfo const &, IXcpHostSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitIds@CUIAWindow@@IEAAJXZ
    long InitIds();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAWindow@@MEAA@XZ
    virtual ~CUIAWindow();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPForHwnd@CUIAWindow@@AEAAJPEAUHWND__@@PEAVCAutomationPeer@@PEAPEAV3@@Z
    long GetAPForHwnd(HWND__*, CAutomationPeer *, CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreventKeyboardDisplayOnProgrammaticFocusId@CUIAWindow@@AEAAJXZ
    long GetPreventKeyboardDisplayOnProgrammaticFocusId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMetadataId@CUIAWindow@@AEAAJXZ
    long GetResourceMetadataId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSeeItSayItCustomPattern@CUIAWindow@@AEAAJXZ
    long RegisterSeeItSayItCustomPattern();
};
