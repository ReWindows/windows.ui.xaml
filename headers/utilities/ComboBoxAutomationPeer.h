#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class ComboBoxAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseImpl@ComboBoxAutomationPeer@DirectUI@@QEAAJXZ
    long CollapseImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandImpl@ComboBoxAutomationPeer@DirectUI@@QEAAJXZ
    long ExpandImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ComboBoxAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@ComboBoxAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ComboBoxAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ComboBoxAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ComboBoxAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeerImpl@ComboBoxAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeerImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@ComboBoxAutomationPeer@DirectUI@@QEAAJE@Z
    long RaiseExpandCollapseAutomationEvent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseStateImpl@ComboBoxAutomationPeer@DirectUI@@QEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    long get_ExpandCollapseStateImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnlyImpl@ComboBoxAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsReadOnlyImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequiredImpl@ComboBoxAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelectionRequiredImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueImpl@ComboBoxAutomationPeer@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_ValueImpl(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComboBoxAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~ComboBoxAutomationPeer();
};
} // namespace DirectUI
