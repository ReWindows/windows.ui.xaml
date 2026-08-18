#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class LoadedImageSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@LoadedImageSurface@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealSurface@LoadedImageSurface@DirectUI@@UEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z
    virtual long GetRealSurface(::Windows::UI::Composition::ICompositionSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromStream@LoadedImageSurface@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@USize@Foundation@6@@Z
    long InitFromStream(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromUri@LoadedImageSurface@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@USize@45@@Z
    long InitFromUri(WindissectOpaque *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadedImageSurface@DirectUI@@UEAA@XZ
    virtual ~LoadedImageSurface();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LoadedImageSurface@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LoadedImageSurface@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LoadedImageSurface@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamReadCompleted@LoadedImageSurface@DirectUI@@AEAAJPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnStreamReadCompleted(WindissectOpaque *, int);
};
} // namespace DirectUI
