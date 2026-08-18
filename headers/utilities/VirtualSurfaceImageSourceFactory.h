#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class VirtualSurfaceImageSourceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensions@VirtualSurfaceImageSourceFactory@DirectUI@@UEAAJHHPEAPEAUIVirtualSurfaceImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithDimensions(int, int, ::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensionsAndOpacity@VirtualSurfaceImageSourceFactory@DirectUI@@UEAAJHHEPEAPEAUIVirtualSurfaceImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithDimensionsAndOpacity(int, int, unsigned char, ::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VirtualSurfaceImageSourceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VirtualSurfaceImageSourceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VirtualSurfaceImageSourceFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VirtualSurfaceImageSourceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensionsAndOpacityImpl@VirtualSurfaceImageSourceFactory@DirectUI@@AEAAJHHEPEAPEAUIVirtualSurfaceImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    long CreateInstanceWithDimensionsAndOpacityImpl(int, int, unsigned char, ::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource * *);
};
} // namespace DirectUI
