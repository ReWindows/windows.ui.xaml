#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class ImageGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMask@ImageGenerated@DirectUI@@UEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long GetAlphaMask(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsCastingSource@ImageGenerated@DirectUI@@UEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    virtual long GetAsCastingSource(::Windows::Media::Casting::ICastingSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageFailedEventSourceNoRef@ImageGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIExceptionRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIExceptionRoutedEventArgs@234@@2@@Z
    long GetImageFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageOpenedEventSourceNoRef@ImageGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetImageOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ImageGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ImageFailed@ImageGenerated@DirectUI@@UEAAJPEAUIExceptionRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ImageFailed(::Windows::UI::Xaml::IExceptionRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ImageOpened@ImageGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ImageOpened(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NineGrid@ImageGenerated@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_NineGrid(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlayToSource@ImageGenerated@DirectUI@@UEAAJPEAPEAUIPlayToSource@PlayTo@Media@Windows@@@Z
    virtual long get_PlayToSource(::Windows::Media::PlayTo::IPlayToSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@ImageGenerated@DirectUI@@UEAAJPEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long get_Source(::Windows::UI::Xaml::Media::IImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@ImageGenerated@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NineGrid@ImageGenerated@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_NineGrid(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@ImageGenerated@DirectUI@@UEAAJPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long put_Source(::Windows::UI::Xaml::Media::IImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@ImageGenerated@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ImageFailed@ImageGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ImageFailed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ImageOpened@ImageGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ImageOpened(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ImageGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ImageGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ImageGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ImageGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
