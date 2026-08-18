#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class BitmapImageGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadProgressEventSourceNoRef@BitmapImageGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIDownloadProgressEventHandler@Imaging@Media@Xaml@UI@Windows@@UIInspectable@@UIDownloadProgressEventArgs@23456@@2@@Z
    long GetDownloadProgressEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageFailedEventSourceNoRef@BitmapImageGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIExceptionRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIExceptionRoutedEventArgs@234@@2@@Z
    long GetImageFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageOpenedEventSourceNoRef@BitmapImageGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetImageOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BitmapImageGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@BitmapImageGenerated@DirectUI@@UEAAJXZ
    virtual long Play();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@BitmapImageGenerated@DirectUI@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DownloadProgress@BitmapImageGenerated@DirectUI@@UEAAJPEAUIDownloadProgressEventHandler@Imaging@Media@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DownloadProgress(::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ImageFailed@BitmapImageGenerated@DirectUI@@UEAAJPEAUIExceptionRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ImageFailed(::Windows::UI::Xaml::IExceptionRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ImageOpened@BitmapImageGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ImageOpened(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoPlay@BitmapImageGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AutoPlay(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreateOptions@BitmapImageGenerated@DirectUI@@UEAAJPEAW4BitmapCreateOptions@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long get_CreateOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodePixelHeight@BitmapImageGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_DecodePixelHeight(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodePixelType@BitmapImageGenerated@DirectUI@@UEAAJPEAW4DecodePixelType@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long get_DecodePixelType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DecodePixelWidth@BitmapImageGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_DecodePixelWidth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAnimatedBitmap@BitmapImageGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsAnimatedBitmap(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlaying@BitmapImageGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsPlaying(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriSource@BitmapImageGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_UriSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoPlay@BitmapImageGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AutoPlay(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CreateOptions@BitmapImageGenerated@DirectUI@@UEAAJW4BitmapCreateOptions@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long put_CreateOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DecodePixelHeight@BitmapImageGenerated@DirectUI@@UEAAJH@Z
    virtual long put_DecodePixelHeight(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DecodePixelType@BitmapImageGenerated@DirectUI@@UEAAJW4DecodePixelType@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long put_DecodePixelType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DecodePixelWidth@BitmapImageGenerated@DirectUI@@UEAAJH@Z
    virtual long put_DecodePixelWidth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UriSource@BitmapImageGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_UriSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DownloadProgress@BitmapImageGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DownloadProgress(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ImageFailed@BitmapImageGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ImageFailed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ImageOpened@BitmapImageGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ImageOpened(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BitmapImageGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BitmapImageGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BitmapImageGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
