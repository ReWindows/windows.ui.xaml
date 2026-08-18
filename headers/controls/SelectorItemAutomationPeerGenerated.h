#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class SelectorItemAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@SelectorItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SelectorItemAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@SelectorItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@SelectorItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@SelectorItemAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@SelectorItemAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long get_SelectionContainer(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectorItemAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectorItemAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SelectorItemAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectorItemAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
