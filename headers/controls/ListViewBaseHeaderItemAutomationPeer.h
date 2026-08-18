#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ListViewBaseHeaderItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingRectangleCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLevelCoreImpl@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetLevelCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseHeaderItemAutomationPeer@DirectUI@@QEAA@XZ
    ListViewBaseHeaderItemAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentItemsControlAutomationPeer@ListViewBaseHeaderItemAutomationPeer@DirectUI@@QEAAJPEAPEAUIItemsControlAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long get_ParentItemsControlAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseHeaderItemAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~ListViewBaseHeaderItemAutomationPeer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSupportInvokePattern@ListViewBaseHeaderItemAutomationPeer@DirectUI@@AEAAJPEAVListViewBaseHeaderItem@2@PEA_N@Z
    long ShouldSupportInvokePattern(::DirectUI::ListViewBaseHeaderItem *, bool *);
};
} // namespace DirectUI
