#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class InternalStringCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@InternalStringCollection@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InternalStringCollection@DirectUI@@UEAA@XZ
    virtual ~InternalStringCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InternalStringCollection@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InternalStringCollection@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InternalStringCollection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
