#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class MenuFlyoutItemBaseCollectionIterator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutItemBaseCollectionIterator@DirectUI@@QEAA@XZ
    MenuFlyoutItemBaseCollectionIterator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutItemBaseCollectionIterator@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutItemBaseCollectionIterator@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@MenuFlyoutItemBaseCollectionIterator@DirectUI@@MEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutItemBaseCollectionIterator@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@MenuFlyoutItemBaseCollectionIterator@DirectUI@@MEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Current(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@MenuFlyoutItemBaseCollectionIterator@DirectUI@@MEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace DirectUI
