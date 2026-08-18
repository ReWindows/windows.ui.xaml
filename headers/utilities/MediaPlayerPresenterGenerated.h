#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class MediaPlayerPresenterGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MediaPlayerPresenterGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullWindow@MediaPlayerPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsFullWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MediaPlayer@MediaPlayerPresenterGenerated@DirectUI@@UEAAJPEAPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    virtual long get_MediaPlayer(::Windows::Media::Playback::IMediaPlayer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@MediaPlayerPresenterGenerated@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFullWindow@MediaPlayerPresenterGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsFullWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MediaPlayer@MediaPlayerPresenterGenerated@DirectUI@@UEAAJPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    virtual long put_MediaPlayer(::Windows::Media::Playback::IMediaPlayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@MediaPlayerPresenterGenerated@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MediaPlayerPresenterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MediaPlayerPresenterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MediaPlayerPresenterGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MediaPlayerPresenterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
