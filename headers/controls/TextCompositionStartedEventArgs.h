#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class TextCompositionStartedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@TextCompositionStartedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_Length(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartIndex@TextCompositionStartedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_StartIndex(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextCompositionStartedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextCompositionStartedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextCompositionStartedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextCompositionStartedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
