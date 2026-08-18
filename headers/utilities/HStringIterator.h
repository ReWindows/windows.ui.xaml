#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class HStringIterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@HStringIterator@DirectUI@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@HStringIterator@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Current(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@HStringIterator@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HStringIterator@DirectUI@@UEAA@XZ
    virtual ~HStringIterator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HStringIterator@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HStringIterator@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HStringIterator@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
