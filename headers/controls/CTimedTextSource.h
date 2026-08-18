#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 52 member(s).
namespace DirectUI {
class CTimedTextSource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTimedTextSource@DirectUI@@QEAA@XZ
    CTimedTextSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTimedTextSource@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIUIElement@456@PEAPEAV12@@Z
    static long Create(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement *, CTimedTextSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTimedTextSource@DirectUI@@SAJPEAUIMediaElement@Controls@Xaml@UI@Windows@@PEAPEAV12@@Z
    static long Create(::Windows::UI::Xaml::Controls::IMediaElement *, CTimedTextSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterClosedCaptionPreviewMode@CTimedTextSource@DirectUI@@QEAAJXZ
    long EnterClosedCaptionPreviewMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalVideoSize@CTimedTextSource@DirectUI@@UEAAJPEAH0@Z
    virtual long GetNaturalVideoSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCaptionPresentationEnabled@CTimedTextSource@DirectUI@@QEBAJPEA_N@Z
    long IsCaptionPresentationEnabled(bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedTrack@CTimedTextSource@DirectUI@@SA_NPEAUITimedMetadataTrack@Core@Media@Windows@@PEAUIMediaPlaybackItem@Playback@56@@Z
    static bool IsSupportedTrack(::Windows::Media::Core::ITimedMetadataTrack *, ::Windows::Media::Playback::IMediaPlaybackItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisibleTrack@CTimedTextSource@DirectUI@@SA_NPEAUITimedMetadataTrack@Core@Media@Windows@@PEAUIMediaPlaybackItem@Playback@56@@Z
    static bool IsVisibleTrack(::Windows::Media::Core::ITimedMetadataTrack *, ::Windows::Media::Playback::IMediaPlaybackItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosedCaptionPropertiesChanged@CTimedTextSource@DirectUI@@QEAAJPEAUIInspectable@@0@Z
    long OnClosedCaptionPropertiesChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTimedTextSource@DirectUI@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetActiveCues@CTimedTextSource@DirectUI@@UEAAJXZ
    virtual long ResetActiveCues();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMTCOffset@CTimedTextSource@DirectUI@@UEAAJN@Z
    virtual long SetMTCOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaPlayer@CTimedTextSource@DirectUI@@QEAAJPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    long SetMediaPlayer(::Windows::Media::Playback::IMediaPlayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSampleCueIfAppropriate@CTimedTextSource@DirectUI@@QEAAJXZ
    long ShowSampleCueIfAppropriate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullWindow@CTimedTextSource@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsFullWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@CTimedTextSource@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimedTextSource@DirectUI@@UEAA@XZ
    virtual ~CTimedTextSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CTimedTextSource@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CTimedTextSource@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCueCallbacks@CTimedTextSource@DirectUI@@AEAAJPEAUITimedMetadataTrack@Core@Media@Windows@@I@Z
    long AddCueCallbacks(::Windows::Media::Core::ITimedMetadataTrack *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCuePresentationModeChangedCallback@CTimedTextSource@DirectUI@@AEAAJXZ
    long AddCuePresentationModeChangedCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMediaPlayerEventRegistrations@CTimedTextSource@DirectUI@@AEAAJXZ
    long AddMediaPlayerEventRegistrations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrackCallback@CTimedTextSource@DirectUI@@AEAAJXZ
    long AddTrackCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrackEventListeners@CTimedTextSource@DirectUI@@AEAAJXZ
    long AddTrackEventListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAndShowSampleCue@CTimedTextSource@DirectUI@@AEAAJXZ
    long BuildAndShowSampleCue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingDeferral@CTimedTextSource@DirectUI@@AEAAJ_N@Z
    long CancelPendingDeferral(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSampleCueRegion@CTimedTextSource@DirectUI@@AEAAJAEBV?$ComPtr@UITimedTextCue@Core@Media@Windows@@@ctl@@@Z
    long CreateSampleCueRegion(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSampleCueStyle@CTimedTextSource@DirectUI@@AEAAJAEBV?$ComPtr@UITimedTextCue@Core@Media@Windows@@@ctl@@@Z
    long CreateSampleCueStyle(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSampleCueText@CTimedTextSource@DirectUI@@AEAAJAEBV?$ComPtr@UITimedTextCue@Core@Media@Windows@@@ctl@@@Z
    long CreateSampleCueText(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePreviewTimer@CTimedTextSource@DirectUI@@AEAAJXZ
    long EnsurePreviewTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTimedTextSource@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIUIElement@456@@Z
    long Initialize(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromME@CTimedTextSource@DirectUI@@AEAAJPEAUIMediaElement@Controls@Xaml@UI@Windows@@@Z
    long InitializeFromME(::Windows::UI::Xaml::Controls::IMediaElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedCue@CTimedTextSource@DirectUI@@AEBA_NAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@@Z
    bool IsSupportedCue(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCueEntered@CTimedTextSource@DirectUI@@AEAAJPEAUITimedMetadataTrack@Core@Media@Windows@@PEAUIMediaCueEventArgs@456@@Z
    long OnCueEntered(::Windows::Media::Core::ITimedMetadataTrack *, ::Windows::Media::Core::IMediaCueEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCueExited@CTimedTextSource@DirectUI@@AEAAJPEAUITimedMetadataTrack@Core@Media@Windows@@PEAUIMediaCueEventArgs@456@@Z
    long OnCueExited(::Windows::Media::Core::ITimedMetadataTrack *, ::Windows::Media::Core::IMediaCueEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCuePresentationModeChanged@CTimedTextSource@DirectUI@@AEAAJPEAUITimedMetadataPresentationModeChangedEventArgs@Playback@Media@Windows@@@Z
    long OnCuePresentationModeChanged(::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaCurrentItemChanged@CTimedTextSource@DirectUI@@AEAAJXZ
    long OnMediaCurrentItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaPlayerSourceChanged@CTimedTextSource@DirectUI@@AEAAJXZ
    long OnMediaPlayerSourceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewTimerTick@CTimedTextSource@DirectUI@@AEAAJXZ
    long OnPreviewTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimedMetadataTracksChanged@CTimedTextSource@DirectUI@@AEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long OnTimedMetadataTracksChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllTrackCallbacks@CTimedTextSource@DirectUI@@AEAAJXZ
    long RemoveAllTrackCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCuePresentationModeChangedCallback@CTimedTextSource@DirectUI@@AEAAJXZ
    long RemoveCuePresentationModeChangedCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMediaPlayerEventRegistrations@CTimedTextSource@DirectUI@@AEAAJXZ
    long RemoveMediaPlayerEventRegistrations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSampleCue@CTimedTextSource@DirectUI@@AEAAJXZ
    long RemoveSampleCue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTrackEventListeners@CTimedTextSource@DirectUI@@AEAAJXZ
    long RemoveTrackEventListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDeferredCueOrShowSample@CTimedTextSource@DirectUI@@AEAAJXZ
    long RestoreDeferredCueOrShowSample();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDeferCueRemoval@CTimedTextSource@DirectUI@@AEAA_NAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@@Z
    bool ShouldDeferCueRemoval(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDeferralTimer@CTimedTextSource@DirectUI@@AEAAJAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@_J@Z
    long StartDeferralTimer(WindissectOpaque const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentItem@CTimedTextSource@DirectUI@@AEAAJXZ
    long UpdateCurrentItem();
};
} // namespace DirectUI
