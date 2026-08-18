#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ScrollViewerViewChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntermediate@ScrollViewerViewChangedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsIntermediate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsIntermediate@ScrollViewerViewChangedEventArgs@DirectUI@@QEAAJE@Z
    long put_IsIntermediate(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollViewerViewChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollViewerViewChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollViewerViewChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollViewerViewChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
