#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SplitViewPaneClosingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@SplitViewPaneClosingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@SplitViewPaneClosingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SplitViewPaneClosingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SplitViewPaneClosingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SplitViewPaneClosingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SplitViewPaneClosingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
