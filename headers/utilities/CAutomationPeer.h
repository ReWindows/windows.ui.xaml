#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 59 member(s).
class CAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsHostedComponentSite@CAutomationPeer@@QEAA_NXZ
    bool ContainsHostedComponentSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinit@CAutomationPeer@@QEAAXXZ
    void Deinit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCachedPattern@CAutomationPeer@@QEAAIW4APPatternInterface@UIAXcp@@PEAVCDependencyObject@@PEAPEAUIUIAProvider@@@Z
    unsigned int FindCachedPattern(int, CDependencyObject *, IUIAProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPEventsSource@CAutomationPeer@@QEAAPEAV1@XZ
    CAutomationPeer * GetAPEventsSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPParent@CAutomationPeer@@UEAAPEAV1@XZ
    virtual CAutomationPeer * GetAPParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotations@CAutomationPeer@@QEAAJPEAPEAVCAutomationPeerAnnotationCollection@@@Z
    long GetAnnotations(CAutomationPeerAnnotationCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationComponentPropertyValue@CAutomationPeer@@QEAAJPEAVCUIAWindow@@W4APAutomationProperties@UIAXcp@@PEAUtagVARIANT@@@Z
    long GetAutomationComponentPropertyValue(CUIAWindow *, int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlType@CAutomationPeer@@QEAAJPEAW4APAutomationControlType@UIAXcp@@@Z
    long GetAutomationControlType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationIdHelper@CAutomationPeer@@QEAAJPEAVxstring_ptr@@@Z
    long GetAutomationIdHelper(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CAutomationPeer@@QEAAHPEAPEAPEAV1@@Z
    int GetChildren(CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlledPeers@CAutomationPeer@@QEAAJPEAPEAVCAutomationPeerCollection@@@Z
    long GetControlledPeers(CAutomationPeerCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCultureHelper@CAutomationPeer@@UEAAJPEAH@Z
    virtual long GetCultureHelper(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescribedBy@CAutomationPeer@@QEAAJPEAPEAVCAutomationPeerCollection@@@Z
    long GetDescribedBy(CAutomationPeerCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromPoint@CAutomationPeer@@QEAAJPEAUXPOINTF@@PEAPEAV1@PEAPEAUIUnknown@@@Z
    long GetElementFromPoint(XPOINTF *, CAutomationPeer * *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowsFrom@CAutomationPeer@@QEAAJPEAPEAVCAutomationPeerCollection@@@Z
    long GetFlowsFrom(CAutomationPeerCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowsTo@CAutomationPeer@@QEAAJPEAPEAVCAutomationPeerCollection@@@Z
    long GetFlowsTo(CAutomationPeerCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@CAutomationPeer@@QEAAJPEAPEAV1@PEAPEAUIUnknown@@@Z
    long GetFocusedElement(CAutomationPeer * *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeadingLevel@CAutomationPeer@@QEAAJPEAW4AutomationHeadingLevel@UIAXcp@@@Z
    long GetHeadingLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteropHwnd@CAutomationPeer@@UEAAPEAXXZ
    virtual void * GetInteropHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiveSetting@CAutomationPeer@@QEAAJPEAW4LiveSetting@UIAXcp@@@Z
    long GetLiveSetting(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalAPParent@CAutomationPeer@@QEAAPEAV1@XZ
    CAutomationPeer * GetLogicalAPParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientation@CAutomationPeer@@QEAAJPEAW4OrientationType@UIAXcp@@@Z
    long GetOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPattern@CAutomationPeer@@QEAAPEAUIUIAProvider@@W4APPatternInterface@UIAXcp@@@Z
    IUIAProvider * GetPattern(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreventKeyboardDisplayOnProgrammaticFocus@CAutomationPeer@@UEAAIXZ
    virtual unsigned int GetPreventKeyboardDisplayOnProgrammaticFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMetadata@CAutomationPeer@@QEAAJPEAVxstring_ptr@@@Z
    long GetResourceMetadata(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootChildrenCore@CAutomationPeer@@UEAAHPEAPEAPEAV1@@Z
    virtual int GetRootChildrenCore(CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootNoRef@CAutomationPeer@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * GetRootNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CAutomationPeer@@QEAAHXZ
    int GetRuntimeId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextRangePattern@CAutomationPeer@@QEAAPEAUIUIATextRangeProvider@@PEAVCDependencyObject@@@Z
    IUIATextRangeProvider * GetTextRangePattern(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnwrappedPattern@CAutomationPeer@@UEAAPEAXH@Z
    virtual void * GetUnwrappedPattern(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowlessRawElementProviderSimple@CAutomationPeer@@UEAAPEAXXZ
    virtual void * GetWindowlessRawElementProviderSimple();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocusHelper@CAutomationPeer@@UEAAJPEAE@Z
    virtual long HasKeyboardFocusHelper(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CAutomationPeer@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidatePeer@CAutomationPeer@@QEAAXXZ
    void InvalidatePeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateUIAWrapper@CAutomationPeer@@QEAAXXZ
    void InvalidateUIAWrapper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledHelper@CAutomationPeer@@UEAAJPEAE@Z
    virtual long IsEnabledHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindowlessElementFromPointProvider@CAutomationPeer@@UEAAIXZ
    virtual unsigned int IsHostedWindowlessElementFromPointProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindowlessElementProvider@CAutomationPeer@@UEAAIXZ
    virtual unsigned int IsHostedWindowlessElementProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteropPeer@CAutomationPeer@@UEAAIXZ
    virtual unsigned int IsInteropPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableHelper@CAutomationPeer@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableHelper(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffscreenHelper@CAutomationPeer@@UEAAJ_NPEAE@Z
    virtual long IsOffscreenHelper(bool, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CAutomationPeer@@QEAAJW4AutomationNavigationDirection@UIAXcp@@PEAPEAV1@PEAPEAUIUnknown@@@Z
    long Navigate(int, CAutomationPeer * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomaticPropertyChanges@CAutomationPeer@@QEAAXI@Z
    void RaiseAutomaticPropertyChanges(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationEvent@CAutomationPeer@@QEAAXW4APAutomationEvents@UIAXcp@@@Z
    void RaiseAutomationEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNotificationEvent@CAutomationPeer@@QEAAXW4AutomationNotificationKind@UIAXcp@@W4AutomationNotificationProcessing@3@Vxstring_ptr@@2@Z
    void RaiseNotificationEvent(int, int, xstring_ptr, xstring_ptr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEvent@CAutomationPeer@@QEAAXW4APAutomationProperties@UIAXcp@@AEBVCValue@@1@Z
    void RaisePropertyChangedEvent(int, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTextEditTextChangedEvent@CAutomationPeer@@QEAAXW4AutomationTextEditChangeType@UIAXcp@@PEAVCValue@@@Z
    void RaiseTextEditTextChangedEvent(int, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAPParent@CAutomationPeer@@QEAAXPEAV1@@Z
    void SetAPParent(CAutomationPeer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusHelper@CAutomationPeer@@UEAAJXZ
    virtual long SetFocusHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuHelper@CAutomationPeer@@UEAAJXZ
    virtual long ShowContextMenuHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutomationPeer@@UEAA@XZ
    virtual ~CAutomationPeer();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutomationPeer@@IEAA@PEAVCCoreServices@@AEAVCValue@@@Z
    CAutomationPeer(CCoreServices *, CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerDOValueFromManaged@CAutomationPeer@@IEAAJW4APAutomationProperties@UIAXcp@@PEAPEAVCDependencyObject@@@Z
    long GetAutomationPeerDOValueFromManaged(int, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerIntValueFromManaged@CAutomationPeer@@IEAAJW4APAutomationProperties@UIAXcp@@PEAH@Z
    long GetAutomationPeerIntValueFromManaged(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerStringValueFromManaged@CAutomationPeer@@IEAAJW4APAutomationProperties@UIAXcp@@PEAVxstring_ptr@@@Z
    long GetAutomationPeerStringValueFromManaged(int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManagerNoRef@CAutomationPeer@@IEBAPEAVCFocusManager@@XZ
    CFocusManager * GetFocusManagerNoRef() const;
};
