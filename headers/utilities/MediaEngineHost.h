#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 109 member(s).
class MediaEngineHost {
public:
    class AudioStreamMapEntry;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MediaEngineHost@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDeferredSettingsOnMediaEngine@MediaEngineHost@@UEAAJXZ
    virtual long ApplyDeferredSettingsOnMediaEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMediaEffect@MediaEngineHost@@UEAAJPEAVMediaEffectNative@@@Z
    virtual long ApplyMediaEffect(MediaEffectNative *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPlayType@MediaEngineHost@@UEAAJAEBVxstring_ptr_view@@PEAW4MediaCanPlayResponse@DirectUI@@@Z
    virtual long CanPlayType(xstring_ptr_view const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTimelineMarker@MediaEngineHost@@UEAAJXZ
    virtual long CancelTimelineMarker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@MediaEngineHost@@UEAAJPEAUIMFSharingEngineClassFactory@@_N@Z
    virtual long Connect(IMFSharingEngineClassFactory *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MediaEngineHost@@SAJPEAUIMediaServices@@PEAUIXcpMediaEngineServiceNotify@@PEAVMediaSource@@PEAU_GUID@@PEAUIPALUri@@PEAPEAUIXcpMediaEngineService@@@Z
    static long Create(IMediaServices *, IXcpMediaEngineServiceNotify *, MediaSource *, _GUID *, IPALUri *, IXcpMediaEngineService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachCallback@MediaEngineHost@@UEAAXXZ
    virtual void DetachCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableVisibilityHandling@MediaEngineHost@@UEAAJXZ
    virtual long DisableVisibilityHandling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@MediaEngineHost@@UEAAJXZ
    virtual long Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindowlessSwapchainMode@MediaEngineHost@@UEAAJAEBUXRECTF_RB@@AEBUXRECT_WH@@@Z
    virtual long EnableWindowlessSwapchainMode(XRECTF_RB const &, XRECT_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveAudioStream@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetActiveAudioStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualStereo3DVideoPackingMode@MediaEngineHost@@UEAA?AW4Stereo3DVideoPackingMode@DirectUI@@XZ
    virtual int GetActualStereo3DVideoPackingMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioStreamCount@MediaEngineHost@@UEAAJPEAH@Z
    virtual long GetAudioStreamCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioStreamIndex@MediaEngineHost@@UEAAJPEAH@Z
    virtual long GetAudioStreamIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioStreamLanguage@MediaEngineHost@@UEAAJHPEAVxstring_ptr@@@Z
    virtual long GetAudioStreamLanguage(int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBalance@MediaEngineHost@@UEAAMXZ
    virtual float GetBalance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferedTimes@MediaEngineHost@@UEAAJPEAPEAUXTIMERANGE@@PEAI@Z
    virtual long GetBufferedTimes(XTIMERANGE * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferingProgress@MediaEngineHost@@UEAAJPEAM@Z
    virtual long GetBufferingProgress(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanPause@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetCanPause();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanSeek@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetCanSeek();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@MediaEngineHost@@UEAAJPEAW4PLAYTO_SOURCE_CREATEFLAGS@@@Z
    virtual long GetCapabilities(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPlaybackItem@MediaEngineHost@@UEAAJPEAPEAUIMediaPlaybackItem@Playback@Media@Windows@@@Z
    virtual long GetCurrentPlaybackItem(::Windows::Media::Playback::IMediaPlaybackItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPlaybackTime@MediaEngineHost@@UEAANXZ
    virtual double GetCurrentPlaybackTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadProgressAndOffset@MediaEngineHost@@UEAAJPEAM0@Z
    virtual long GetDownloadProgressAndOffset(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDuration@MediaEngineHost@@UEAANXZ
    virtual double GetDuration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMuted@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetIsMuted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsStereo3DVideo@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetIsStereo3DVideo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlayToSource@MediaEngineHost@@UEAAJPEAVCValue@@@Z
    virtual long GetPlayToSource(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaybackRate@MediaEngineHost@@UEAAMXZ
    virtual float GetPlaybackRate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartTime@MediaEngineHost@@UEAANXZ
    virtual double GetStartTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapchainHandle@MediaEngineHost@@UEBAPEAXXZ
    virtual void * GetSwapchainHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoAspectRatio@MediaEngineHost@@UEAAJPEAI0@Z
    virtual long GetVideoAspectRatio(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolume@MediaEngineHost@@UEAAMXZ
    virtual float GetVolume();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@MediaEngineHost@@UEAAIXZ
    virtual unsigned int GetWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAudio@MediaEngineHost@@UEAAIXZ
    virtual unsigned int HasAudio();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVideo@MediaEngineHost@@UEAAIXZ
    virtual unsigned int HasVideo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCasting@MediaEngineHost@@UEAAJPEAUIInspectable@@PEAUIUnknown@@PEAUICastingSource@Casting@Media@Windows@@@Z
    virtual long InitializeCasting(IInspectable *, IUnknown *, ::Windows::Media::Casting::ICastingSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrm@MediaEngineHost@@UEAAJPEAI@Z
    virtual long IsDrm(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnded@MediaEngineHost@@UEAAIXZ
    virtual unsigned int IsEnded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPaused@MediaEngineHost@@UEAAIXZ
    virtual unsigned int IsPaused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReady@MediaEngineHost@@UEAAIXZ
    virtual unsigned int IsReady();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSeeking@MediaEngineHost@@UEAAIXZ
    virtual unsigned int IsSeeking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchMediaEngine@MediaEngineHost@@UEAAJPEAV?$CXcpList@VMediaEffectNative@@@@0@Z
    virtual long LaunchMediaEngine(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceChanged@MediaEngineHost@@UEAAXXZ
    virtual void OnGraphicsDeviceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@MediaEngineHost@@UEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@MediaEngineHost@@UEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@MediaEngineHost@@UEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainAvailable@MediaEngineHost@@UEAAJXZ
    virtual long OnSwapChainAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainUnavailable@MediaEngineHost@@UEAAJXZ
    virtual long OnSwapChainUnavailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@MediaEngineHost@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@MediaEngineHost@@UEAAJXZ
    virtual long Play();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MediaEngineHost@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllEffects@MediaEngineHost@@UEAAJXZ
    virtual long RemoveAllEffects();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAudioCategory@MediaEngineHost@@UEAAXW4AudioCategory@DirectUI@@@Z
    virtual void SetAudioCategory(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAudioDeviceType@MediaEngineHost@@UEAAXW4AudioDeviceType@DirectUI@@@Z
    virtual void SetAudioDeviceType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAudioStreamIndex@MediaEngineHost@@UEAAJH@Z
    virtual long SetAudioStreamIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoPlay@MediaEngineHost@@UEAAJI@Z
    virtual long SetAutoPlay(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBalance@MediaEngineHost@@UEAAJM@Z
    virtual long SetBalance(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPlaybackTime@MediaEngineHost@@UEAAJN@Z
    virtual long SetCurrentPlaybackTime(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultPlaybackRate@MediaEngineHost@@UEAAJM@Z
    virtual long SetDefaultPlaybackRate(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMuted@MediaEngineHost@@UEAAJI@Z
    virtual long SetIsMuted(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLoop@MediaEngineHost@@UEAAJI@Z
    virtual long SetLoop(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaybackRate@MediaEngineHost@@UEAAJM@Z
    virtual long SetPlaybackRate(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionUpdateState@MediaEngineHost@@UEAAJI@Z
    virtual long SetPositionUpdateState(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProtectionManager@MediaEngineHost@@UEAAJPEAVCValue@@@Z
    virtual long SetProtectionManager(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealTimePlayback@MediaEngineHost@@UEAAXI@Z
    virtual void SetRealTimePlayback(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@MediaEngineHost@@UEAAJPEAVMediaSource@@@Z
    virtual long SetSource(MediaSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStereo3DVideoPackingMode@MediaEngineHost@@UEAAJW4Stereo3DVideoPackingMode@DirectUI@@@Z
    virtual long SetStereo3DVideoPackingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStereo3DVideoRenderMode@MediaEngineHost@@UEAAJW4Stereo3DVideoRenderMode@DirectUI@@@Z
    virtual long SetStereo3DVideoRenderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimelineMarker@MediaEngineHost@@UEAAJN@Z
    virtual long SetTimelineMarker(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVolume@MediaEngineHost@@UEAAJM@Z
    virtual long SetVolume(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@MediaEngineHost@@MEAAXXZ
    virtual void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventProcCallback@MediaEngineHost@@MEAAJK_KK@Z
    virtual long EventProcCallback(unsigned long, uint64_t, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@MediaEngineHost@@MEAA_NXZ
    virtual bool HasSwapChainContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MediaEngineHost@@IEAAJPEAUIXcpMediaEngineServiceNotify@@PEAVMediaSource@@PEAUIPALUri@@@Z
    long Initialize(IXcpMediaEngineServiceNotify *, MediaSource *, IPALUri *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaEngineHost@@IEAA@PEAUIMediaServices@@PEAU_GUID@@@Z
    MediaEngineHost(IMediaServices *, _GUID *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaEngineHost@@MEAA@XZ
    virtual ~MediaEngineHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyInitialSettingsOnMediaEngine@MediaEngineHost@@AEAAJXZ
    long ApplyInitialSettingsOnMediaEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyStereo3DRenderMode@MediaEngineHost@@AEAAJXZ
    long ApplyStereo3DRenderMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyStereo3DVideoPackingMode@MediaEngineHost@@AEAAJXZ
    long ApplyStereo3DVideoPackingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForReady@MediaEngineHost@@AEAAJXZ
    long CheckForReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseActiveByteStream@MediaEngineHost@@AEAAXXZ
    void CloseActiveByteStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMediaEngine@MediaEngineHost@@AEAAPEAUIMFMediaEngineEx@@XZ
    IMFMediaEngineEx * GetCurrentMediaEngine();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGraphicsDeviceForVideo@MediaEngineHost@@AEAAJXZ
    long GetGraphicsDeviceForVideo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaEngineEventErrorCode@MediaEngineHost@@AEAAXAEBW4MF_MEDIA_ENGINE_EVENT@@_KKPEAGPEAJ@Z
    void GetMediaEngineEventErrorCode(int const &, uint64_t, unsigned long, unsigned short *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXTIMERANGEFromMFMediaTimeRange@MediaEngineHost@@AEAAJPEAUIMFMediaTimeRange@@PEAPEAUXTIMERANGE@@PEAI@Z
    long GetXTIMERANGEFromMFMediaTimeRange(IMFMediaTimeRange *, XTIMERANGE * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAudioStreamInfo@MediaEngineHost@@AEAAJXZ
    long InitializeAudioStreamInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStereo3DSupportedByGraphicsDevice@MediaEngineHost@@AEAAIXZ
    unsigned int IsStereo3DSupportedByGraphicsDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@MediaEngineHost@@EEAAXXZ
    virtual void ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveUri@MediaEngineHost@@AEAAJAEBVxstring_ptr@@PEAPEAUIPALResource@@@Z
    long ResolveUri(xstring_ptr const &, IPALResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaEngineServiceNotify@MediaEngineHost@@AEAAJPEAUIXcpMediaEngineServiceNotify@@@Z
    long SetMediaEngineServiceNotify(IXcpMediaEngineServiceNotify *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceInternal@MediaEngineHost@@AEAAJPEAUIMFMediaEngineEx@@@Z
    long SetSourceInternal(IMFMediaEngineEx *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceInternal_SourceUrl@MediaEngineHost@@AEAAJPEAUIMFMediaEngineEx@@@Z
    long SetSourceInternal_SourceUrl(IMFMediaEngineEx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapMediaEngine@MediaEngineHost@@AEAAJPEAUIMFMediaEngineEx@@@Z
    long SwapMediaEngine(IMFMediaEngineEx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibilityHandling@MediaEngineHost@@AEAAJPEAUIMFMediaEngineEx@@@Z
    long UpdateVisibilityHandling(IMFMediaEngineEx *);
};
