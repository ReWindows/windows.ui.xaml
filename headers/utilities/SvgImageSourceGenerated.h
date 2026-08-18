#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class SvgImageSourceGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenFailedEventSourceNoRef@SvgImageSourceGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSvgImageSource@Imaging@Media@Xaml@UI@Windows@@PEAVSvgImageSourceFailedEventArgs@23456@@Foundation@Windows@@UISvgImageSource@Imaging@Media@Xaml@UI@3@UISvgImageSourceFailedEventArgs@56783@@2@@Z
    long GetOpenFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenedEventSourceNoRef@SvgImageSourceGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSvgImageSource@Imaging@Media@Xaml@UI@Windows@@PEAVSvgImageSourceOpenedEventArgs@23456@@Foundation@Windows@@UISvgImageSource@Imaging@Media@Xaml@UI@3@UISvgImageSourceOpenedEventArgs@56783@@2@@Z
    long GetOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SvgImageSourceGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceAsync@SvgImageSourceGenerated@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4SvgImageSourceLoadStatus@Imaging@Media@Xaml@UI@Windows@@@Foundation@6@@Z
    virtual long SetSourceAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OpenFailed@SvgImageSourceGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSvgImageSource@Imaging@Media@Xaml@UI@Windows@@PEAVSvgImageSourceFailedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OpenFailed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Opened@SvgImageSourceGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSvgImageSource@Imaging@Media@Xaml@UI@Windows@@PEAVSvgImageSourceOpenedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Opened(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizePixelHeight@SvgImageSourceGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_RasterizePixelHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizePixelWidth@SvgImageSourceGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_RasterizePixelWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriSource@SvgImageSourceGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_UriSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RasterizePixelHeight@SvgImageSourceGenerated@DirectUI@@UEAAJN@Z
    virtual long put_RasterizePixelHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RasterizePixelWidth@SvgImageSourceGenerated@DirectUI@@UEAAJN@Z
    virtual long put_RasterizePixelWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UriSource@SvgImageSourceGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_UriSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OpenFailed@SvgImageSourceGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OpenFailed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Opened@SvgImageSourceGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Opened(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SvgImageSourceGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SvgImageSourceGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SvgImageSourceGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SvgImageSourceGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
