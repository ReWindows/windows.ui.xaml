#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SizeChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewSize@SizeChangedEventArgs@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_NewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousSize@SizeChangedEventArgs@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_PreviousSize(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SizeChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SizeChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SizeChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SizeChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
