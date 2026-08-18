#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 109 member(s).
class CMediaElement {
public:
    class CPosterImageReportCallback;
    class MediaEngineServiceNotify;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAudioEffect@CMediaElement@@QEAAJAEBVxstring_ptr_view@@EPEAUIUnknown@@@Z
    long AddAudioEffect(xstring_ptr_view const &, unsigned char, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVideoEffect@CMediaElement@@QEAAJAEBVxstring_ptr_view@@EPEAUIUnknown@@@Z
    long AddVideoEffect(xstring_ptr_view const &, unsigned char, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CMediaElement@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPause@CMediaElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanPause(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSeek@CMediaElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanSeek(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CMediaElement@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CMediaElement@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioStreamLanguage@CMediaElement@@QEAAJPEAU?$IReference@H@Foundation@Windows@@PEAVxstring_ptr@@@Z
    long GetAudioStreamLanguage(WindissectOpaque *, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCastingSource@CMediaElement@@QEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    long GetCastingSource(::Windows::Media::Casting::ICastingSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInRenderOrder@CMediaElement@@UEAAXPEAPEAPEAVCUIElement@@PEAI@Z
    virtual void GetChildrenInRenderOrder(CUIElement * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMediaElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CMediaElement@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoFrameProvider@CMediaElement@@UEAAPEAUIXcpVideoFrameProvider@@XZ
    virtual IXcpVideoFrameProvider * GetVideoFrameProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaEvent@CMediaElement@@UEAAJPEAUIObject@@H@Z
    virtual long HandleMediaEvent(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CMediaElement@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CMediaElement@@UEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullScreen@CMediaElement@@UEBAIXZ
    virtual unsigned int IsFullScreen() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullWindow@CMediaElement@@UEBAIXZ
    virtual unsigned int IsFullWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CMediaElement@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CMediaElement@@UEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWIsContentDirty@CMediaElement@@UEAAIXZ
    virtual unsigned int NWIsContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetMediaSourceDirty@CMediaElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetMediaSourceDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@CMediaElement@@UEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CMediaElement@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CMediaElement@@UEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@CMediaElement@@UEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@CMediaElement@@QEAAJXZ
    long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueErrorEvent@CMediaElement@@QEAAJGJ@Z
    long QueueErrorEvent(unsigned short, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CMediaElement@@QEAAJW4Enum@MediaEngineElementEvent@@PEAVCMediaEventState@@PEAUIMediaQueueTest@@@Z
    long QueueEvent(int, CMediaEventState *, IMediaQueueTest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CMediaElement@@QEAAJPEAVCValue@@AEBVxstring_ptr_view@@@Z
    long SetSource(CValue *, xstring_ptr_view const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CMediaElement@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CMediaElement@@QEAAJXZ
    long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMethodObject@CMediaElement@@SAJPEAVCDependencyObject@@@Z
    static long ValidateMethodObject(CDependencyObject *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CMediaElement@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCurrentItemChangedInternalHandler@CMediaElement@@AEAAJXZ
    long AddCurrentItemChangedInternalHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFullWindowState@CMediaElement@@AEAAJXZ
    long ApplyFullWindowState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPositionUpdateState@CMediaElement@@AEAAJXZ
    long ApplyPositionUpdateState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPosterSource@CMediaElement@@AEAAJXZ
    long ApplyPosterSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CMediaElement@@EEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaElement@@AEAA@PEAVCCoreServices@@@Z
    CMediaElement(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampValueGivenRange@CMediaElement@@AEAAXPEAVCValue@@MM@Z
    void ClampValueGivenRange(CValue *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMediaEffectsLists@CMediaElement@@AEAAJXZ
    long ClearMediaEffectsLists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMedia@CMediaElement@@EEAAXXZ
    virtual void CloseMedia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMedia@CMediaElement@@EEAAJXZ
    virtual long EnsureMedia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFullWindowMode@CMediaElement@@AEAAJXZ
    long EnterFullWindowMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitFullWindowMode@CMediaElement@@AEAAJXZ
    long ExitFullWindowMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireMarkerReachedEvent@CMediaElement@@AEAAJPEAVCTimelineMarker@@I@Z
    long FireMarkerReachedEvent(CTimelineMarker *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireNearbyMarkers@CMediaElement@@AEAAJXZ
    long FireNearbyMarkers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPlaybackTime@CMediaElement@@AEAANXZ
    double GetCurrentPlaybackTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorMessage@CMediaElement@@CAJGJPEAVxstring_ptr@@@Z
    static long GetErrorMessage(unsigned short, long, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaEngineErrorMessage@CMediaElement@@CAPEBGG@Z
    static unsigned short const * GetMediaEngineErrorMessage(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartTime@CMediaElement@@AEAANXZ
    double GetStartTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBufferingEndedEvent@CMediaElement@@AEAAJXZ
    long HandleBufferingEndedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBufferingProgressEvent@CMediaElement@@AEAAJXZ
    long HandleBufferingProgressEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBufferingStartedEvent@CMediaElement@@AEAAJXZ
    long HandleBufferingStartedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDownloadCompleteEvent@CMediaElement@@AEAAJXZ
    long HandleDownloadCompleteEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleErrorEvent@CMediaElement@@AEAAJPEAVMediaErrorEventState@@@Z
    long HandleErrorEvent(MediaErrorEventState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFormatChange@CMediaElement@@AEAAJXZ
    long HandleFormatChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMarkerReachedEvent@CMediaElement@@AEAAJXZ
    long HandleMarkerReachedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePartialMediaFailureDetectedEvent@CMediaElement@@AEAAJXZ
    long HandlePartialMediaFailureDetectedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePlayToConnectionChanged@CMediaElement@@AEAAJI@Z
    long HandlePlayToConnectionChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePlayingEvent@CMediaElement@@AEAAJXZ
    long HandlePlayingEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePosterImageReady@CMediaElement@@AEAAXXZ
    void HandlePosterImageReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleProgressEvent@CMediaElement@@AEAAJXZ
    long HandleProgressEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRateChangedEvent@CMediaElement@@AEAAJXZ
    long HandleRateChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleReadyToLaunchMediaEngineEvent@CMediaElement@@AEAAJXZ
    long HandleReadyToLaunchMediaEngineEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSeekedEvent@CMediaElement@@AEAAJXZ
    long HandleSeekedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSourceReadyEvent@CMediaElement@@AEAAJXZ
    long HandleSourceReadyEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleStoppedOnRemoteDMR@CMediaElement@@AEAAJXZ
    long HandleStoppedOnRemoteDMR();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSwapChainAvailable@CMediaElement@@AEAAJXZ
    long HandleSwapChainAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVolumeChangedEvent@CMediaElement@@AEAAJXZ
    long HandleVolumeChangedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidMarkers@CMediaElement@@AEAAIXZ
    unsigned int HasValidMarkers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidMediaSource@CMediaElement@@EEAA_NXZ
    virtual bool HasValidMediaSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IssuePropertyChangedNotification@CMediaElement@@AEAAJW4KnownPropertyIndex@@@Z
    long IssuePropertyChangedNotification(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CMediaElement@@EEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenMedia@CMediaElement@@AEAAJXZ
    long OpenMedia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseMediaEvent@CMediaElement@@AEAAXUEventHandle@@PEAVCEventArgs@@@Z
    void RaiseMediaEvent(EventHandle, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadMediaInternal@CMediaElement@@AEAAJXZ
    long ReloadMediaInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePlaybackListItemChangedHandler@CMediaElement@@AEAAXXZ
    void RemovePlaybackListItemChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInternalState@CMediaElement@@AEAAXH@Z
    void ResetInternalState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMarkerState@CMediaElement@@AEAAX_N@Z
    void ResetMarkerState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekInternal@CMediaElement@@AEAAJN@Z
    long SeekInternal(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMediaEngineCorrelationTelemetry@CMediaElement@@AEAAJXZ
    long SendMediaEngineCorrelationTelemetry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentState@CMediaElement@@AEAAJW4MediaElementState@DirectUI@@@Z
    long SetCurrentState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNextMarker@CMediaElement@@AEAAJI@Z
    long SetNextMarker(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSuppressMarkers@CMediaElement@@AEAAIXZ
    unsigned int ShouldSuppressMarkers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMediaElement@@EEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAspectRatioHeight@CMediaElement@@AEAAJXZ
    long UpdateAspectRatioHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAspectRatioWidth@CMediaElement@@AEAAJXZ
    long UpdateAspectRatioWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAudioStreamCount@CMediaElement@@AEAAJXZ
    long UpdateAudioStreamCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCastingSource@CMediaElement@@AEAAJXZ
    long UpdateCastingSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullWindowVisibility@CMediaElement@@AEAAJW4Visibility@DirectUI@@@Z
    long UpdateFullWindowVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderMarkerIndex@CMediaElement@@AEAAXXZ
    void UpdateHeaderMarkerIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderMarkerIndexOnInsertion@CMediaElement@@AEAAJI@Z
    long UpdateHeaderMarkerIndexOnInsertion(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsAudioOnly@CMediaElement@@AEAAJXZ
    long UpdateIsAudioOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMuted@CMediaElement@@AEAAJXZ
    long UpdateIsMuted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsStereo3DVideo@CMediaElement@@AEAAJXZ
    long UpdateIsStereo3DVideo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNativeHeight@CMediaElement@@AEAAJXZ
    long UpdateNativeHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNativeWidth@CMediaElement@@AEAAJXZ
    long UpdateNativeWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNaturalDuration@CMediaElement@@AEAAJXZ
    long UpdateNaturalDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaybackRate@CMediaElement@@AEAAJXZ
    long UpdatePlaybackRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosition@CMediaElement@@AEAAJI@Z
    long UpdatePosition(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosterSourceStretch@CMediaElement@@AEAAJXZ
    long UpdatePosterSourceStretch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePowerSettings@CMediaElement@@AEAAXXZ
    void UpdatePowerSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStereo3DPackingMode@CMediaElement@@AEAAJXZ
    long UpdateStereo3DPackingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibilityHandling@CMediaElement@@AEAAJXZ
    long UpdateVisibilityHandling();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaElement@@EEAA@XZ
    virtual ~CMediaElement();
};
