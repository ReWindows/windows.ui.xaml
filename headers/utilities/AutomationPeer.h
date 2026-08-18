#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 69 member(s).
namespace DirectUI {
class AutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePropertyChangedListeners@AutomationPeer@DirectUI@@SAEXZ
    static unsigned char ArePropertyChangedListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallAutomationPeerMethod@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@H@Z
    static long CallAutomationPeerMethod(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAutomationPeerEventsSource@AutomationPeer@DirectUI@@UEAAJPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GenerateAutomationPeerEventsSource(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAutomationPeerEventsSource@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long GenerateAutomationPeerEventsSource(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotationsCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeerAnnotation@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetAnnotationsCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerAPValue@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAPEAV3@@Z
    static long GetAutomationPeerAPValue(CDependencyObject *, int, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerChildren@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@IPEAHPEAPEAPEAV3@@Z
    static long GetAutomationPeerChildren(CDependencyObject *, unsigned int, int *, CDependencyObject * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerDOValue@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAPEAV3@@Z
    static long GetAutomationPeerDOValue(CDependencyObject *, int, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerIntValue@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAH@Z
    static long GetAutomationPeerIntValue(CDependencyObject *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerPointValue@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAUXPOINTF@@@Z
    static long GetAutomationPeerPointValue(CDependencyObject *, int, XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerRectValue@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAUXRECTF_WH@@@Z
    static long GetAutomationPeerRectValue(CDependencyObject *, int, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerStringValue@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAGPEAH@Z
    static long GetAutomationPeerStringValue(CDependencyObject *, int, unsigned short *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenImpl@AutomationPeer@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long GetChildrenImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlledPeersCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetControlledPeersCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCultureCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetCultureCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescribedByCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetDescribedByCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromPoint@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@AEBVCValue@@PEAPEAV3@PEAPEAUIUnknown@@@Z
    static long GetElementFromPoint(CDependencyObject *, CValue const &, CDependencyObject * *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromPointCoreImpl@AutomationPeer@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetElementFromPointCoreImpl(WindissectOpaque, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowsFromCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetFlowsFromCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowsToCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetFlowsToCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@PEAPEAUIUnknown@@@Z
    static long GetFocusedElement(CDependencyObject *, CDependencyObject * *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetFocusedElementCoreImpl(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullDescriptionCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetFullDescriptionCoreImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeadingLevelCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAW4AutomationHeadingLevel@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetHeadingLevelCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLandmarkTypeCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAW4AutomationLandmarkType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLandmarkTypeCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLevelCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetLevelCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCoreImpl@AutomationPeer@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetLocalizedControlTypeCoreImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedLandmarkTypeCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedLandmarkTypeCoreImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentImpl@AutomationPeer@DirectUI@@QEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GetParentImpl(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPattern@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@W4APPatternInterface@UIAXcp@@@Z
    static long GetPattern(CDependencyObject *, CDependencyObject * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrimmedKeyboardAcceleratorTextOverrideStatic@AutomationPeer@DirectUI@@SAJAEAVString@Internal@Windows@@PEAPEAUHSTRING__@@@Z
    static long GetTrimmedKeyboardAcceleratorTextOverrideStatic(::Windows::Internal::String &, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDataValidForFormCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsDataValidForFormCoreImpl(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDialogCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsDialogCoreImpl(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPeripheralCoreImpl@AutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsPeripheralCoreImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenerExistsHelper@AutomationPeer@DirectUI@@SAJW4AutomationEvents@Peers@Automation@Xaml@UI@Windows@@PEAE@Z
    static long ListenerExistsHelper(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4AutomationNavigationDirection@UIAXcp@@PEAPEAV3@PEAPEAUIUnknown@@@Z
    static long Navigate(CDependencyObject *, int, CDependencyObject * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateCoreImpl@AutomationPeer@DirectUI@@QEAAJW4AutomationNavigationDirection@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long NavigateCoreImpl(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManagedUIElementIsDead@AutomationPeer@DirectUI@@UEAAJXZ
    virtual long NotifyManagedUIElementIsDead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNoUIAClientObjectForAP@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long NotifyNoUIAClientObjectForAP(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNoUIAClientObjectToOwner@AutomationPeer@DirectUI@@UEAAJXZ
    virtual long NotifyNoUIAClientObjectToOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeerFromProviderStatic@AutomationPeer@DirectUI@@SAJPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@PEAPEAUIAutomationPeer@Peers@5678@@Z
    static long PeerFromProviderStatic(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple *, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderFromPeerStatic@AutomationPeer@DirectUI@@SAJPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIIRawElementProviderSimple@Provider@5678@@Z
    static long ProviderFromPeerStatic(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationEventImpl@AutomationPeer@DirectUI@@QEAAJW4AutomationEvents@Peers@Automation@Xaml@UI@Windows@@@Z
    long RaiseAutomationEventImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEventIfListener@AutomationPeer@DirectUI@@SAJPEAVUIElement@2@W4AutomationEvents@Peers@Automation@Xaml@UI@Windows@@@Z
    static long RaiseEventIfListener(::DirectUI::UIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNotificationEventImpl@AutomationPeer@DirectUI@@QEAAJW4AutomationNotificationKind@Peers@Automation@Xaml@UI@Windows@@W4AutomationNotificationProcessing@45678@PEAUHSTRING__@@2@Z
    long RaiseNotificationEventImpl(int, int, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEvent@AutomationPeer@DirectUI@@QEAAJPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@AEBVCValue@@1@Z
    long RaisePropertyChangedEvent(::Windows::UI::Xaml::Automation::IAutomationProperty *, CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEventById@AutomationPeer@DirectUI@@QEAAJW4APAutomationProperties@UIAXcp@@EE@Z
    long RaisePropertyChangedEventById(int, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEventById@AutomationPeer@DirectUI@@QEAAJW4APAutomationProperties@UIAXcp@@PEAUHSTRING__@@1@Z
    long RaisePropertyChangedEventById(int, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEventImpl@AutomationPeer@DirectUI@@QEAAJPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@PEAUIInspectable@@1@Z
    long RaisePropertyChangedEventImpl(::Windows::UI::Xaml::Automation::IAutomationProperty *, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStructureChangedEventImpl@AutomationPeer@DirectUI@@QEAAJW4AutomationStructureChangeType@Peers@Automation@Xaml@UI@Windows@@PEAUIAutomationPeer@45678@@Z
    long RaiseStructureChangedEventImpl(int, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTextEditTextChangedEventImpl@AutomationPeer@DirectUI@@QEAAJW4AutomationTextEditChangeType@Automation@Xaml@UI@Windows@@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@7@@Z
    long RaiseTextEditTextChangedEventImpl(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuCoreImpl@AutomationPeer@DirectUI@@UEAAJXZ
    virtual long ShowContextMenuCoreImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAPatternInvoke@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@W4APPatternInterface@UIAXcp@@HHPEAXPEAVCValue@Automation@@@Z
    static long UIAPatternInvoke(CDependencyObject *, int, int, int, void *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIATextRangeInvoke@AutomationPeer@DirectUI@@SAJPEAVCDependencyObject@@HHPEAXPEAVCValue@Automation@@@Z
    static long UIATextRangeInvoke(CDependencyObject *, int, int, void *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventsSource@AutomationPeer@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long get_EventsSource(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EventsSource@AutomationPeer@DirectUI@@UEAAJPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long put_EventsSource(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutomationPeer@DirectUI@@IEAA@XZ
    AutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutomationPeer@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutomationPeer@DirectUI@@MEAA@XZ
    virtual ~AutomationPeer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxArrayOfHStrings@AutomationPeer@DirectUI@@CAJPEAVCValue@Automation@@HPEAPEAUHSTRING__@@@Z
    static long BoxArrayOfHStrings(::Automation::CValue *, int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxArrayOfRawElementProviderSimple@AutomationPeer@DirectUI@@CAJPEAVCValue@Automation@@HPEAPEAUIIRawElementProviderSimple@Provider@4Xaml@UI@Windows@@@Z
    static long BoxArrayOfRawElementProviderSimple(::Automation::CValue *, int, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerDOValueFromIterable@AutomationPeer@DirectUI@@CAJPEAVCDependencyObject@@W4APAutomationProperties@UIAXcp@@PEAPEAV3@@Z
    static long GetAutomationPeerDOValueFromIterable(CDependencyObject *, int, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPropertyFromUIAXcpEnum@AutomationPeer@DirectUI@@CAJW4APAutomationProperties@UIAXcp@@PEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    static long GetAutomationPropertyFromUIAXcpEnum(int, ::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueFromCValue@AutomationPeer@DirectUI@@CAJW4APAutomationProperties@UIAXcp@@VCValue@Automation@@PEAPEAUIInspectable@@@Z
    static long GetPropertyValueFromCValue(int, ::Automation::CValue, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFromCValue@AutomationPeer@DirectUI@@CAJPEAVCValue@Automation@@PEAPEAUHSTRING__@@@Z
    static long GetStringFromCValue(::Automation::CValue *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveNativeNodeOrAPFromIInspectable@AutomationPeer@DirectUI@@CAXPEAUIInspectable@@PEAPEAVCDependencyObject@@PEAPEAUIUnknown@@@Z
    static void RetrieveNativeNodeOrAPFromIInspectable(IInspectable *, CDependencyObject * *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCValueFromString@AutomationPeer@DirectUI@@CAJPEAVCValue@Automation@@PEAUHSTRING__@@@Z
    static long SetCValueFromString(::Automation::CValue *, HSTRING__*);
};
} // namespace DirectUI
