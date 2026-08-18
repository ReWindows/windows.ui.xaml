#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class MediaPlayerElementGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInit@MediaPlayerElementGenerated@DirectUI@@UEAAJXZ
    virtual long BeginInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInit@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAVXamlServiceProviderContext@@@Z
    virtual long EndInit(XamlServiceProviderContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MediaPlayerElementGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaPlayerElementGenerated@DirectUI@@QEAA@XZ
    MediaPlayerElementGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MediaPlayerElementGenerated@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaPlayer@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    virtual long SetMediaPlayer(::Windows::Media::Playback::IMediaPlayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreTransportControlsEnabled@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreTransportControlsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoPlay@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AutoPlay(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullWindow@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsFullWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MediaPlayer@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    virtual long get_MediaPlayer(::Windows::Media::Playback::IMediaPlayer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PosterSource@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long get_PosterSource(::Windows::UI::Xaml::Media::IImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAPEAUIMediaPlaybackSource@Playback@Media@Windows@@@Z
    virtual long get_Source(::Windows::Media::Playback::IMediaPlaybackSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransportControls@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAPEAUIMediaTransportControls@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TransportControls(::Windows::UI::Xaml::Controls::IMediaTransportControls * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreTransportControlsEnabled@MediaPlayerElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AreTransportControlsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoPlay@MediaPlayerElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AutoPlay(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFullWindow@MediaPlayerElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsFullWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PosterSource@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long put_PosterSource(::Windows::UI::Xaml::Media::IImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAUIMediaPlaybackSource@Playback@Media@Windows@@@Z
    virtual long put_Source(::Windows::Media::Playback::IMediaPlaybackSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@MediaPlayerElementGenerated@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransportControls@MediaPlayerElementGenerated@DirectUI@@UEAAJPEAUIMediaTransportControls@Controls@Xaml@UI@Windows@@@Z
    virtual long put_TransportControls(::Windows::UI::Xaml::Controls::IMediaTransportControls *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaPlayerElementGenerated@DirectUI@@UEAA@XZ
    virtual ~MediaPlayerElementGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MediaPlayerElementGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MediaPlayerElementGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MediaPlayerElementGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MediaPlayerElementGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
