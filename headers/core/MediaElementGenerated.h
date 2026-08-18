#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 111 member(s).
namespace DirectUI {
class MediaElementGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAudioEffect@MediaElementGenerated@DirectUI@@UEAAJPEAUHSTRING__@@EPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long AddAudioEffect(HSTRING__*, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVideoEffect@MediaElementGenerated@DirectUI@@UEAAJPEAUHSTRING__@@EPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long AddVideoEffect(HSTRING__*, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPlayType@MediaElementGenerated@DirectUI@@UEAAJPEAUHSTRING__@@PEAW4MediaCanPlayResponse@Media@Xaml@UI@Windows@@@Z
    virtual long CanPlayType(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsCastingSource@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    virtual long GetAsCastingSource(::Windows::Media::Casting::ICastingSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioStreamLanguage@MediaElementGenerated@DirectUI@@UEAAJPEAU?$IReference@H@Foundation@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long GetAudioStreamLanguage(WindissectOpaque *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferingProgressChangedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetBufferingProgressChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentStateChangedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetCurrentStateChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadProgressChangedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetDownloadProgressChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarkerReachedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UITimelineMarkerRoutedEventHandler@Media@Xaml@UI@Windows@@UIInspectable@@UITimelineMarkerRoutedEventArgs@2345@@2@@Z
    long GetMarkerReachedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaEndedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetMediaEndedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaFailedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIExceptionRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIExceptionRoutedEventArgs@234@@2@@Z
    long GetMediaFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaOpenedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetMediaOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartialMediaFailureDetectedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVMediaElement@Controls@Xaml@UI@Windows@@PEAVPartialMediaFailureDetectedEventArgs@Media@345@@Foundation@Windows@@UIMediaElement@Controls@Xaml@UI@3@UIPartialMediaFailureDetectedEventArgs@Media@673@@2@@Z
    long GetPartialMediaFailureDetectedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRateChangedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRateChangedRoutedEventHandler@Media@Xaml@UI@Windows@@UIInspectable@@UIRateChangedRoutedEventArgs@2345@@2@@Z
    long GetRateChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSeekCompletedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetSeekCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MediaElementGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeChangedEventSourceNoRef@MediaElementGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetVolumeChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@MediaElementGenerated@DirectUI@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@MediaElementGenerated@DirectUI@@UEAAJXZ
    virtual long Play();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllEffects@MediaElementGenerated@DirectUI@@UEAAJXZ
    virtual long RemoveAllEffects();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaStreamSource@MediaElementGenerated@DirectUI@@UEAAJPEAUIMediaSource@Core@Media@Windows@@@Z
    virtual long SetMediaStreamSource(::Windows::Media::Core::IMediaSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaybackSource@MediaElementGenerated@DirectUI@@UEAAJPEAUIMediaPlaybackSource@Playback@Media@Windows@@@Z
    virtual long SetPlaybackSource(::Windows::Media::Playback::IMediaPlaybackSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@MediaElementGenerated@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAUHSTRING__@@@Z
    virtual long SetSource(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@MediaElementGenerated@DirectUI@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BufferingProgressChanged@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_BufferingProgressChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CurrentStateChanged@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CurrentStateChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DownloadProgressChanged@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DownloadProgressChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MarkerReached@MediaElementGenerated@DirectUI@@UEAAJPEAUITimelineMarkerRoutedEventHandler@Media@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MarkerReached(::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MediaEnded@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MediaEnded(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MediaFailed@MediaElementGenerated@DirectUI@@UEAAJPEAUIExceptionRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MediaFailed(::Windows::UI::Xaml::IExceptionRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MediaOpened@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MediaOpened(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PartialMediaFailureDetected@MediaElementGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVMediaElement@Controls@Xaml@UI@Windows@@PEAVPartialMediaFailureDetectedEventArgs@Media@345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PartialMediaFailureDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RateChanged@MediaElementGenerated@DirectUI@@UEAAJPEAUIRateChangedRoutedEventHandler@Media@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RateChanged(::Windows::UI::Xaml::Media::IRateChangedRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SeekCompleted@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SeekCompleted(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VolumeChanged@MediaElementGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VolumeChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualStereo3DVideoPackingMode@MediaElementGenerated@DirectUI@@UEAAJPEAW4Stereo3DVideoPackingMode@Media@Xaml@UI@Windows@@@Z
    virtual long get_ActualStereo3DVideoPackingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreTransportControlsEnabled@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreTransportControlsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AspectRatioHeight@MediaElementGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_AspectRatioHeight(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AspectRatioWidth@MediaElementGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_AspectRatioWidth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioCategory@MediaElementGenerated@DirectUI@@UEAAJPEAW4AudioCategory@Media@Xaml@UI@Windows@@@Z
    virtual long get_AudioCategory(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioDeviceType@MediaElementGenerated@DirectUI@@UEAAJPEAW4AudioDeviceType@Media@Xaml@UI@Windows@@@Z
    virtual long get_AudioDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioStreamCount@MediaElementGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_AudioStreamCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioStreamIndex@MediaElementGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@H@Foundation@Windows@@@Z
    virtual long get_AudioStreamIndex(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoPlay@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AutoPlay(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Balance@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Balance(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BufferingProgress@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_BufferingProgress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanPause@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanPause(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSeek@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanSeek(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentState@MediaElementGenerated@DirectUI@@UEAAJPEAW4MediaElementState@Media@Xaml@UI@Windows@@@Z
    virtual long get_CurrentState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultPlaybackRate@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_DefaultPlaybackRate(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DownloadProgress@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_DownloadProgress(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DownloadProgressOffset@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_DownloadProgressOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAudioOnly@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsAudioOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullWindow@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsFullWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLooping@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsLooping(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMuted@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsMuted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStereo3DVideo@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsStereo3DVideo(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Markers@MediaElementGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTimelineMarker@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Markers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalDuration@MediaElementGenerated@DirectUI@@UEAAJPEAUDuration@Xaml@UI@Windows@@@Z
    virtual long get_NaturalDuration(::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalVideoHeight@MediaElementGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_NaturalVideoHeight(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalVideoWidth@MediaElementGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_NaturalVideoWidth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlayToPreferredSourceUri@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_PlayToPreferredSourceUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlayToSource@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUIPlayToSource@PlayTo@Media@Windows@@@Z
    virtual long get_PlayToSource(::Windows::Media::PlayTo::IPlayToSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaybackRate@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_PlaybackRate(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@MediaElementGenerated@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PosterSource@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long get_PosterSource(::Windows::UI::Xaml::Media::IImageSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProtectionManager@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUIMediaProtectionManager@Protection@Media@Windows@@@Z
    virtual long get_ProtectionManager(::Windows::Media::Protection::IMediaProtectionManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RealTimePlayback@MediaElementGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_RealTimePlayback(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Source(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stereo3DVideoPackingMode@MediaElementGenerated@DirectUI@@UEAAJPEAW4Stereo3DVideoPackingMode@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stereo3DVideoPackingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stereo3DVideoRenderMode@MediaElementGenerated@DirectUI@@UEAAJPEAW4Stereo3DVideoRenderMode@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stereo3DVideoRenderMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@MediaElementGenerated@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransportControls@MediaElementGenerated@DirectUI@@UEAAJPEAPEAUIMediaTransportControls@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TransportControls(::Windows::UI::Xaml::Controls::IMediaTransportControls * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Volume@MediaElementGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Volume(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreTransportControlsEnabled@MediaElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AreTransportControlsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AudioCategory@MediaElementGenerated@DirectUI@@UEAAJW4AudioCategory@Media@Xaml@UI@Windows@@@Z
    virtual long put_AudioCategory(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AudioDeviceType@MediaElementGenerated@DirectUI@@UEAAJW4AudioDeviceType@Media@Xaml@UI@Windows@@@Z
    virtual long put_AudioDeviceType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AudioStreamIndex@MediaElementGenerated@DirectUI@@UEAAJPEAU?$IReference@H@Foundation@Windows@@@Z
    virtual long put_AudioStreamIndex(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoPlay@MediaElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AutoPlay(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Balance@MediaElementGenerated@DirectUI@@UEAAJN@Z
    virtual long put_Balance(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultPlaybackRate@MediaElementGenerated@DirectUI@@UEAAJN@Z
    virtual long put_DefaultPlaybackRate(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFullWindow@MediaElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsFullWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsLooping@MediaElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsLooping(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMuted@MediaElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsMuted(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlayToPreferredSourceUri@MediaElementGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_PlayToPreferredSourceUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaybackRate@MediaElementGenerated@DirectUI@@UEAAJN@Z
    virtual long put_PlaybackRate(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@MediaElementGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Position(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PosterSource@MediaElementGenerated@DirectUI@@UEAAJPEAUIImageSource@Media@Xaml@UI@Windows@@@Z
    virtual long put_PosterSource(::Windows::UI::Xaml::Media::IImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProtectionManager@MediaElementGenerated@DirectUI@@UEAAJPEAUIMediaProtectionManager@Protection@Media@Windows@@@Z
    virtual long put_ProtectionManager(::Windows::Media::Protection::IMediaProtectionManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RealTimePlayback@MediaElementGenerated@DirectUI@@UEAAJE@Z
    virtual long put_RealTimePlayback(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@MediaElementGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_Source(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stereo3DVideoPackingMode@MediaElementGenerated@DirectUI@@UEAAJW4Stereo3DVideoPackingMode@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stereo3DVideoPackingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stereo3DVideoRenderMode@MediaElementGenerated@DirectUI@@UEAAJW4Stereo3DVideoRenderMode@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stereo3DVideoRenderMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@MediaElementGenerated@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransportControls@MediaElementGenerated@DirectUI@@UEAAJPEAUIMediaTransportControls@Controls@Xaml@UI@Windows@@@Z
    virtual long put_TransportControls(::Windows::UI::Xaml::Controls::IMediaTransportControls *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Volume@MediaElementGenerated@DirectUI@@UEAAJN@Z
    virtual long put_Volume(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BufferingProgressChanged@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BufferingProgressChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CurrentStateChanged@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CurrentStateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DownloadProgressChanged@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DownloadProgressChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MarkerReached@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MarkerReached(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MediaEnded@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MediaEnded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MediaFailed@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MediaFailed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MediaOpened@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MediaOpened(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PartialMediaFailureDetected@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PartialMediaFailureDetected(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RateChanged@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SeekCompleted@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SeekCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VolumeChanged@MediaElementGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VolumeChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MediaElementGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MediaElementGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MediaElementGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MediaElementGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
