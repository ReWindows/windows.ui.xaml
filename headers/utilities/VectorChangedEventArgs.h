#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class VectorChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionChange@VectorChangedEventArgs@DirectUI@@UEAAJPEAW4CollectionChange@Collections@Foundation@Windows@@@Z
    virtual long get_CollectionChange(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@VectorChangedEventArgs@DirectUI@@UEAAJPEAI@Z
    virtual long get_Index(unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VectorChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VectorChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VectorChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
