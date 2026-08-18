#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class LoadedImageSurfaceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLoadFromStream@LoadedImageSurfaceFactory@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUILoadedImageSurface@Media@Xaml@UI@6@@Z
    virtual long StartLoadFromStream(WindissectOpaque *, ::Windows::UI::Xaml::Media::ILoadedImageSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLoadFromStreamWithSize@LoadedImageSurfaceFactory@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@USize@Foundation@6@PEAPEAUILoadedImageSurface@Media@Xaml@UI@6@@Z
    virtual long StartLoadFromStreamWithSize(WindissectOpaque *, WindissectOpaque, ::Windows::UI::Xaml::Media::ILoadedImageSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLoadFromUri@LoadedImageSurfaceFactory@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAUILoadedImageSurface@Media@Xaml@UI@5@@Z
    virtual long StartLoadFromUri(WindissectOpaque *, ::Windows::UI::Xaml::Media::ILoadedImageSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLoadFromUriWithSize@LoadedImageSurfaceFactory@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@USize@45@PEAPEAUILoadedImageSurface@Media@Xaml@UI@5@@Z
    virtual long StartLoadFromUriWithSize(WindissectOpaque *, WindissectOpaque, ::Windows::UI::Xaml::Media::ILoadedImageSurface * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LoadedImageSurfaceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LoadedImageSurfaceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@LoadedImageSurfaceFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LoadedImageSurfaceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLoadFromStreamWithSizeImpl@LoadedImageSurfaceFactory@DirectUI@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@USize@Foundation@6@PEAPEAUILoadedImageSurface@Media@Xaml@UI@6@@Z
    long StartLoadFromStreamWithSizeImpl(WindissectOpaque *, WindissectOpaque, ::Windows::UI::Xaml::Media::ILoadedImageSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLoadFromUriWithSizeImpl@LoadedImageSurfaceFactory@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@USize@45@PEAPEAUILoadedImageSurface@Media@Xaml@UI@5@@Z
    long StartLoadFromUriWithSizeImpl(WindissectOpaque *, WindissectOpaque, ::Windows::UI::Xaml::Media::ILoadedImageSurface * *);
};
} // namespace DirectUI
