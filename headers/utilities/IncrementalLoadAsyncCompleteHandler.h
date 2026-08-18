#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class IncrementalLoadAsyncCompleteHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@IncrementalLoadAsyncCompleteHandler@DirectUI@@UEAAJPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    virtual long Invoke(WindissectOpaque *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@IncrementalLoadAsyncCompleteHandler@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@IncrementalLoadAsyncCompleteHandler@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@IncrementalLoadAsyncCompleteHandler@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IncrementalLoadAsyncCompleteHandler@DirectUI@@MEAA@XZ
    virtual ~IncrementalLoadAsyncCompleteHandler();
};
} // namespace DirectUI
