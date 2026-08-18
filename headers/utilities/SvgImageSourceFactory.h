#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class SvgImageSourceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SvgImageSourceFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUISvgImageSource@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::ISvgImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithUriSource@SvgImageSourceFactory@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUIInspectable@@PEAPEAU6@PEAPEAUISvgImageSource@Imaging@Media@Xaml@UI@5@@Z
    virtual long CreateInstanceWithUriSource(WindissectOpaque *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::ISvgImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizePixelHeightProperty@SvgImageSourceFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RasterizePixelHeightProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizePixelWidthProperty@SvgImageSourceFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RasterizePixelWidthProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriSourceProperty@SvgImageSourceFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_UriSourceProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SvgImageSourceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SvgImageSourceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SvgImageSourceFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SvgImageSourceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithUriSourceImpl@SvgImageSourceFactory@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUIInspectable@@PEAPEAU6@PEAPEAUISvgImageSource@Imaging@Media@Xaml@UI@5@@Z
    long CreateInstanceWithUriSourceImpl(WindissectOpaque *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::ISvgImageSource * *);
};
} // namespace DirectUI
