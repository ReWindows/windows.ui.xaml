#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class LoadedImageSurfaceGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoadCompletedEventSourceNoRef@LoadedImageSurfaceGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVLoadedImageSurface@Media@Xaml@UI@Windows@@PEAVLoadedImageSourceLoadCompletedEventArgs@2345@@Foundation@Windows@@UILoadedImageSurface@Media@Xaml@UI@3@UILoadedImageSourceLoadCompletedEventArgs@5673@@2@@Z
    long GetLoadCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@LoadedImageSurfaceGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LoadCompleted@LoadedImageSurfaceGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVLoadedImageSurface@Media@Xaml@UI@Windows@@PEAVLoadedImageSourceLoadCompletedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LoadCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodedPhysicalSize@LoadedImageSurfaceGenerated@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_DecodedPhysicalSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodedSize@LoadedImageSurfaceGenerated@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_DecodedSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalSize@LoadedImageSurfaceGenerated@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_NaturalSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LoadCompleted@LoadedImageSurfaceGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LoadCompleted(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LoadedImageSurfaceGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@LoadedImageSurfaceGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LoadedImageSurfaceGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
