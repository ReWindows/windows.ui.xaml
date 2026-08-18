#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ListViewBaseItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ListViewBaseItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrabbedItemsImpl@ListViewBaseItemAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetGrabbedItemsImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ListViewBaseItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAutomationPeer@DirectUI@@QEAA@XZ
    ListViewBaseItemAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffectsImpl@ListViewBaseItemAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUHSTRING__@@@Z
    long get_DropEffectsImpl(unsigned int *, HSTRING__* * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGrabbedImpl@ListViewBaseItemAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsGrabbedImpl(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~ListViewBaseItemAutomationPeer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSupportInvokePattern@ListViewBaseItemAutomationPeer@DirectUI@@AEAAJPEAVListViewBaseItem@2@PEA_N@Z
    long ShouldSupportInvokePattern(::DirectUI::ListViewBaseItem *, bool *);
};
} // namespace DirectUI
