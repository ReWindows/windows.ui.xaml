#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SurfaceImageSourceFactoryGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensions@SurfaceImageSourceFactoryGenerated@DirectUI@@UEAAJHHPEAUIInspectable@@PEAPEAU3@PEAPEAUISurfaceImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithDimensions(int, int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensionsAndOpacity@SurfaceImageSourceFactoryGenerated@DirectUI@@UEAAJHHEPEAUIInspectable@@PEAPEAU3@PEAPEAUISurfaceImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithDimensionsAndOpacity(int, int, unsigned char, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SurfaceImageSourceFactoryGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SurfaceImageSourceFactoryGenerated@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SurfaceImageSourceFactoryGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensionsAndOpacityImpl@SurfaceImageSourceFactoryGenerated@DirectUI@@AEAAJHHEPEAUIInspectable@@PEAPEAU3@PEAPEAUISurfaceImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    long CreateInstanceWithDimensionsAndOpacityImpl(int, int, unsigned char, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource * *);
};
} // namespace DirectUI
