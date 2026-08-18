#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TextAlternativesAsyncCompleteHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@TextAlternativesAsyncCompleteHandler@DirectUI@@UEAAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    virtual long Invoke(WindissectOpaque *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextAlternativesAsyncCompleteHandler@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextAlternativesAsyncCompleteHandler@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextAlternativesAsyncCompleteHandler@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextAlternativesAsyncCompleteHandler@DirectUI@@MEAA@XZ
    virtual ~TextAlternativesAsyncCompleteHandler();
};
} // namespace DirectUI
