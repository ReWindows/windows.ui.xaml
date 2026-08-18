#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class BitmapImageFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithUriSource@BitmapImageFactory@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAUIBitmapImage@Imaging@Media@Xaml@UI@5@@Z
    virtual long CreateInstanceWithUriSource(WindissectOpaque *, ::Windows::UI::Xaml::Media::Imaging::IBitmapImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoPlayProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AutoPlayProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreateOptionsProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CreateOptionsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodePixelHeightProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DecodePixelHeightProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodePixelTypeProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DecodePixelTypeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodePixelWidthProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DecodePixelWidthProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAnimatedBitmapProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsAnimatedBitmapProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayingProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsPlayingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriSourceProperty@BitmapImageFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_UriSourceProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BitmapImageFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BitmapImageFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BitmapImageFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BitmapImageFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithUriSourceImpl@BitmapImageFactory@DirectUI@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAUIBitmapImage@Imaging@Media@Xaml@UI@5@@Z
    long CreateInstanceWithUriSourceImpl(WindissectOpaque *, ::Windows::UI::Xaml::Media::Imaging::IBitmapImage * *);
};
} // namespace DirectUI
