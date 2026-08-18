#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 50 member(s).
namespace DirectUI {
class FrameworkElementAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildIsAcceptable@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long ChildIsAcceptable(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FrameworkElementAutomationPeer@DirectUI@@QEAA@XZ
    FrameworkElementAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratorKeyCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAcceleratorKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessKeyCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAccessKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotationsCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeerAnnotation@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetAnnotationsCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlType@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationIdCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAutomationIdCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerChildren@FrameworkElementAutomationPeer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    long GetAutomationPeerChildren(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeersForChildrenOfElementImpl@FrameworkElementAutomationPeer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    long GetAutomationPeersForChildrenOfElementImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingRectangleCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetClickablePointCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlledPeersCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetControlledPeersCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPattern@FrameworkElementAutomationPeer@DirectUI@@QEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GetDefaultPattern(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescribedByCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetDescribedByCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowsFromCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetFlowsFromCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowsToCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetFlowsToCoreImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullDescriptionCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetFullDescriptionCoreImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeadingLevelCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationHeadingLevel@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetHeadingLevelCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetHelpTextCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemStatusCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetItemStatusCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemTypeCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetItemTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabeledByCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLabeledByCore(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLandmarkTypeCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationLandmarkType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLandmarkTypeCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLevelCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetLevelCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiveSettingCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationLiveSetting@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLiveSettingCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlType@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlType(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedLandmarkTypeCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedLandmarkTypeCoreImpl(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentElementCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsContentElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlElementCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsControlElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDataValidForFormCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsDataValidForFormCoreImpl(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDialogCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsDialogCoreImpl(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsEnabledCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffscreenCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsOffscreenCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPeripheralCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsPeripheralCoreImpl(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequiredForFormCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsRequiredForFormCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManagedUIElementIsDead@FrameworkElementAutomationPeer@DirectUI@@UEAAJXZ
    virtual long NotifyManagedUIElementIsDead();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusCore@FrameworkElementAutomationPeer@DirectUI@@UEAAJXZ
    virtual long SetFocusCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuCoreImpl@FrameworkElementAutomationPeer@DirectUI@@UEAAJXZ
    virtual long ShowContextMenuCoreImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@FrameworkElementAutomationPeer@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Owner(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Owner@FrameworkElementAutomationPeer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_Owner(::Windows::UI::Xaml::IUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkElementAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~FrameworkElementAutomationPeer();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeerCollection@FrameworkElementAutomationPeer@DirectUI@@IEAAJW4APAutomationProperties@UIAXcp@@PEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long GetAutomationPeerCollection(int, WindissectOpaque * *);
};
} // namespace DirectUI
