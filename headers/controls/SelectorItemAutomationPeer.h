#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SelectorItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelectionImpl@SelectorItemAutomationPeer@DirectUI@@UEAAJXZ
    virtual long AddToSelectionImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@SelectorItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelectionImpl@SelectorItemAutomationPeer@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelectionImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@SelectorItemAutomationPeer@DirectUI@@UEAAJXZ
    virtual long SelectImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectedImpl@SelectorItemAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelectedImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainerImpl@SelectorItemAutomationPeer@DirectUI@@UEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long get_SelectionContainerImpl(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewCommon@SelectorItemAutomationPeer@DirectUI@@IEAAJXZ
    long ScrollIntoViewCommon();
};
} // namespace DirectUI
