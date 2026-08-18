#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class HubSectionCollectionIterator {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HubSectionCollectionIterator@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HubSectionCollectionIterator@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@HubSectionCollectionIterator@DirectUI@@MEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HubSectionCollectionIterator@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@HubSectionCollectionIterator@DirectUI@@MEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Current(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@HubSectionCollectionIterator@DirectUI@@MEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace DirectUI
