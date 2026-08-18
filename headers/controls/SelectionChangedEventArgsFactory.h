#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class SelectionChangedEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithRemovedItemsAndAddedItems@SelectionChangedEventArgsFactory@DirectUI@@UEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@0PEAUIInspectable@@PEAPEAU7@PEAPEAUISelectionChangedEventArgs@Controls@Xaml@UI@6@@Z
    virtual long CreateInstanceWithRemovedItemsAndAddedItems(WindissectOpaque *, WindissectOpaque *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectionChangedEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectionChangedEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectionChangedEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithRemovedItemsAndAddedItemsImpl@SelectionChangedEventArgsFactory@DirectUI@@AEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@0PEAUIInspectable@@PEAPEAU7@PEAPEAUISelectionChangedEventArgs@Controls@Xaml@UI@6@@Z
    long CreateInstanceWithRemovedItemsAndAddedItemsImpl(WindissectOpaque *, WindissectOpaque *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs * *);
};
} // namespace DirectUI
