#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ImageBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageFailedEventSourceNoRef@ImageBrush@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIExceptionRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIExceptionRoutedEventArgs@234@@2@@Z
    long GetImageFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageOpenedEventSourceNoRef@ImageBrush@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetImageOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ImageBrush@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ImageFailed@ImageBrush@DirectUI@@UEAAJPEAUIExceptionRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ImageFailed(::Windows::UI::Xaml::IExceptionRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ImageOpened@ImageBrush@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ImageOpened(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImageSource@ImageBrush@DirectUI@@UEAAJPEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long get_ImageSource(::Windows::UI::Xaml::Media::IImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ImageSource@ImageBrush@DirectUI@@UEAAJPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long put_ImageSource(::Windows::UI::Xaml::Media::IImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ImageFailed@ImageBrush@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ImageFailed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ImageOpened@ImageBrush@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ImageOpened(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ImageBrush@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ImageBrush@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ImageBrush@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ImageBrush@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
