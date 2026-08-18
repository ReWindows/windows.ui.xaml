#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class TextCompositionChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@TextCompositionChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_Length(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartIndex@TextCompositionChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_StartIndex(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextCompositionChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextCompositionChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextCompositionChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextCompositionChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
