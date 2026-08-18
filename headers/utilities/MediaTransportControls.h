#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 239 member(s).
namespace DirectUI {
class MediaTransportControls {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToFullWindowMediaRoot@MediaTransportControls@DirectUI@@QEAAJXZ
    long AddToFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToMediaElement@MediaTransportControls@DirectUI@@QEAAJXZ
    long AddToMediaElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCaptionStylesSubMenu@MediaTransportControls@DirectUI@@QEAAJXZ
    long AppendCaptionStylesSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MediaTransportControls@DirectUI@@SAJPEAPEAV12@@Z
    static long Create(MediaTransportControls * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeTransportControls@MediaTransportControls@DirectUI@@QEAAJXZ
    long DeinitializeTransportControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeTransportControlsFromME@MediaTransportControls@DirectUI@@QEAAJXZ
    long DeinitializeTransportControlsFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeTransportControlsFromMPE@MediaTransportControls@DirectUI@@QEAAJXZ
    long DeinitializeTransportControlsFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@MediaTransportControls@DirectUI@@QEAAJXZ
    long Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableFromME@MediaTransportControls@DirectUI@@QEAAJXZ
    long DisableFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@MediaTransportControls@DirectUI@@QEAAJXZ
    long Enable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableFromME@MediaTransportControls@DirectUI@@QEAAJXZ
    long EnableFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@MediaTransportControls@DirectUI@@UEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExitFullWindowMode@MediaTransportControls@DirectUI@@QEAAJXZ
    long HandleExitFullWindowMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleItemMediaFailed@MediaTransportControls@DirectUI@@QEAAJPEAUIMediaPlaybackItemFailedEventArgs@Playback@Media@Windows@@@Z
    long HandleItemMediaFailed(::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaFailed@MediaTransportControls@DirectUI@@QEAAJPEAUIMediaPlayerFailedEventArgs@Playback@Media@Windows@@@Z
    long HandleMediaFailed(::Windows::Media::Playback::IMediaPlayerFailedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaFailed@MediaTransportControls@DirectUI@@QEAAJXZ
    long HandleMediaFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSeekCompleted@MediaTransportControls@DirectUI@@QEAAJXZ
    long HandleSeekCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTransportControls@MediaTransportControls@DirectUI@@QEAAJPEAUIMediaElement@Controls@Xaml@UI@Windows@@@Z
    long InitializeTransportControls(::Windows::UI::Xaml::Controls::IMediaElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTransportControls@MediaTransportControls@DirectUI@@QEAAJPEAUIMediaPlayerElement@Controls@Xaml@UI@Windows@@@Z
    long InitializeTransportControls(::Windows::UI::Xaml::Controls::IMediaPlayerElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualState@MediaTransportControls@DirectUI@@QEAAJXZ
    long InitializeVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualStateFromME@MediaTransportControls@DirectUI@@QEAAJXZ
    long InitializeVisualStateFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualStateFromMPE@MediaTransportControls@DirectUI@@QEAAJXZ
    long InitializeVisualStateFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerMPEPropertyChanged@MediaTransportControls@DirectUI@@QEAAJW4KnownPropertyIndex@@@Z
    long OnOwnerMPEPropertyChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerPropertyChanged@MediaTransportControls@DirectUI@@QEAAJW4KnownPropertyIndex@@@Z
    long OnOwnerPropertyChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCCSelectionMenuFlyoutItemClickHandlers@MediaTransportControls@DirectUI@@QEAAXXZ
    void ReleaseCCSelectionMenuFlyoutItemClickHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCaptionStylesClickHandlers@MediaTransportControls@DirectUI@@QEAAXXZ
    void ReleaseCaptionStylesClickHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMenuFlyoutItemClickHandlers@MediaTransportControls@DirectUI@@QEAAXXZ
    void ReleaseMenuFlyoutItemClickHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePlaybackItemReference@MediaTransportControls@DirectUI@@QEAAJXZ
    long ReleasePlaybackItemReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePlaybackRateMenuFlyoutItemClickHandlers@MediaTransportControls@DirectUI@@QEAAXXZ
    void ReleasePlaybackRateMenuFlyoutItemClickHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromFullWindowMediaRoot@MediaTransportControls@DirectUI@@QEAAJXZ
    long RemoveFromFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromMediaElement@MediaTransportControls@DirectUI@@QEAAJXZ
    long RemoveFromMediaElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusAfterEnteringFullWindowMode@MediaTransportControls@DirectUI@@QEAAJXZ
    long SetFocusAfterEnteringFullWindowMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusAfterExitingFullWindowMode@MediaTransportControls@DirectUI@@QEAAJXZ
    long SetFocusAfterExitingFullWindowMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaPlayerElementFullWindow@MediaTransportControls@DirectUI@@SAJV?$ComPtr@UIMediaPlayerElement@Controls@Xaml@UI@Windows@@@ctl@@E@Z
    static long SetMediaPlayerElementFullWindow(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailImage@MediaTransportControls@DirectUI@@QEAAJPEAUIInputStream@Streams@Storage@Windows@@@Z
    long SetThumbnailImage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAfterEnteringFullWindow@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdateAfterEnteringFullWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAudioSelectionFlyout@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdateAudioSelectionFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAudioSelectionFlyoutFromME@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdateAudioSelectionFlyoutFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAudioSelectionFlyoutFromMPE@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdateAudioSelectionFlyoutFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCCSelectionFlyoutFromME@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdateCCSelectionFlyoutFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCCSelectionFlyoutFromMPE@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdateCCSelectionFlyoutFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaybackRateFlyout@MediaTransportControls@DirectUI@@QEAAJXZ
    long UpdatePlaybackRateFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@MediaTransportControls@DirectUI@@QEAAJ_N@Z
    long UpdateVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateFromME@MediaTransportControls@DirectUI@@QEAAJ_N@Z
    long UpdateVisualStateFromME(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateFromMPE@MediaTransportControls@DirectUI@@QEAAJ_N@Z
    long UpdateVisualStateFromMPE(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ThumbnailRequested@MediaTransportControls@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVMediaTransportControls@Controls@Xaml@UI@Windows@@PEAVMediaTransportControlsThumbnailRequestedEventArgs@Media@345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ThumbnailRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ThumbnailRequested@MediaTransportControls@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ThumbnailRequested(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MediaTransportControls@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@MediaTransportControls@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaTransportControls@DirectUI@@IEAA@XZ
    MediaTransportControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MediaTransportControls@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@MediaTransportControls@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaTransportControls@DirectUI@@MEAA@XZ
    virtual ~MediaTransportControls();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMarginsBetweenGroups@MediaTransportControls@DirectUI@@AEAAJXZ
    long AddMarginsBetweenGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRegistrationCoreWindowKeyDown@MediaTransportControls@DirectUI@@AEAAJXZ
    long AddRegistrationCoreWindowKeyDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTooltip@MediaTransportControls@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUHSTRING__@@@Z
    long AddTooltip(::Windows::UI::Xaml::IDependencyObject *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AudioTag@MediaTransportControls@DirectUI@@AEAAJUTrackFields@2@HAEAVString@Internal@Windows@@@Z
    long AudioTag(::DirectUI::TrackFields, int, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDropOutLevel@MediaTransportControls@DirectUI@@AEAAJXZ
    long CalculateDropOutLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareWithOriginalSource@MediaTransportControls@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEAUIInspectable@@PEAE@Z
    long CompareWithOriginalSource(::Windows::UI::Xaml::IRoutedEventArgs *, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConcatFields@MediaTransportControls@DirectUI@@AEAAJPEAVString@Internal@Windows@@AEAV345@PEAHH@Z
    long ConcatFields(::Windows::Internal::String *, ::Windows::Internal::String &, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSecondsToHString@MediaTransportControls@DirectUI@@AEAAJ_JPEAPEAUHSTRING__@@@Z
    long ConvertSecondsToHString(int64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCCFlyoutTrack@MediaTransportControls@DirectUI@@AEAAJPEAUHSTRING__@@HH@Z
    long CreateCCFlyoutTrack(HSTRING__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLanguage@MediaTransportControls@DirectUI@@AEAAJPEBGPEAPEAUILanguage@Globalization@Windows@@@Z
    long CreateLanguage(unsigned short const *, ::Windows::Globalization::ILanguage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dropout@MediaTransportControls@DirectUI@@AEAAJNUSize@Foundation@Windows@@@Z
    long Dropout(double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableValueChangedEventThrottlingOnSliderAutomation@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long EnableValueChangedEventThrottlingOnSliderAutomation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterScrubbingMode@MediaTransportControls@DirectUI@@AEAAJXZ
    long EnterScrubbingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitScrubbingMode@MediaTransportControls@DirectUI@@AEAAJXZ
    long ExitScrubbingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@MediaTransportControls@DirectUI@@AEAAJNUSize@Foundation@Windows@@@Z
    long Expand(double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireThumbnailEvent@MediaTransportControls@DirectUI@@AEAAJXZ
    long FireThumbnailEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsCastingSource@MediaTransportControls@DirectUI@@AEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    long GetAsCastingSource(::Windows::Media::Casting::ICastingSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioTrackCount@MediaTransportControls@DirectUI@@AEAAJPEAH@Z
    long GetAudioTrackCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCCTrackCount@MediaTransportControls@DirectUI@@AEAAJPEAI@Z
    long GetCCTrackCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCastingDevicePicker@MediaTransportControls@DirectUI@@AEAAJAEAV?$ComPtr@UICastingDevicePicker@Casting@Media@Windows@@@ctl@@@Z
    long GetCastingDevicePicker(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSizeConstants@MediaTransportControls@DirectUI@@AEAAJXZ
    long GetComponentSizeConstants();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPlaybackSession@MediaTransportControls@DirectUI@@AEAAJPEAPEAUIMediaPlaybackSession@Playback@Media@Windows@@@Z
    long GetCurrentPlaybackSession(::Windows::Media::Playback::IMediaPlaybackSession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredBoundsMode@MediaTransportControls@DirectUI@@AEBAJPEAW4ApplicationViewBoundsMode@ViewManagement@UI@Windows@@@Z
    long GetDesiredBoundsMode(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadProgress@MediaTransportControls@DirectUI@@AEAAJPEAN@Z
    long GetDownloadProgress(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorResourceID@MediaTransportControls@DirectUI@@AEAAJIEPEAI@Z
    long GetErrorResourceID(unsigned int, unsigned char, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullScreenView@MediaTransportControls@DirectUI@@AEAAJPEAPEAUIApplicationView3@ViewManagement@UI@Windows@@@Z
    long GetFullScreenView(::Windows::UI::ViewManagement::IApplicationView3* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullWindow@MediaTransportControls@DirectUI@@AEAAJPEAE@Z
    long GetFullWindow(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedLanguageName@MediaTransportControls@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAU3@@Z
    long GetLocalizedLanguageName(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaPlaybackDataSource@MediaTransportControls@DirectUI@@AEAAJPEAPEAUIMediaPlaybackDataSource@@@Z
    long GetMediaPlaybackDataSource(IMediaPlaybackDataSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMiniView@MediaTransportControls@DirectUI@@AEAAJPEAPEAUIApplicationView4@ViewManagement@UI@Windows@@@Z
    long GetMiniView(::Windows::UI::ViewManagement::IApplicationView4* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMuted@MediaTransportControls@DirectUI@@AEAAJPEAE@Z
    long GetMuted(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaybackRate@MediaTransportControls@DirectUI@@AEAAJPEAN@Z
    long GetPlaybackRate(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@MediaTransportControls@DirectUI@@AEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    long GetPosition(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRepeatMode@MediaTransportControls@DirectUI@@AEAAJPEAW4RepeatMode@2@@Z
    long GetRepeatMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStretch@MediaTransportControls@DirectUI@@AEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    long GetStretch(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedTrackCount@MediaTransportControls@DirectUI@@AEAAJPEAU?$IVectorView@PEAVTimedMetadataTrack@Core@Media@Windows@@@Collections@Foundation@Windows@@PEAUIMediaPlaybackItem@Playback@Media@6@PEAI@Z
    long GetSupportedTrackCount(WindissectOpaque *, ::Windows::Media::Playback::IMediaPlaybackItem *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolume@MediaTransportControls@DirectUI@@AEAAJPEAN@Z
    long GetVolume(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyOrProgFocus@MediaTransportControls@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEAE@Z
    long HasKeyOrProgFocus(::Windows::UI::Xaml::IRoutedEventArgs *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCastButtonIfNecessary@MediaTransportControls@DirectUI@@AEAAJXZ
    long HideCastButtonIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideControlPanel@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long HideControlPanel(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideControlPanelFromMPE@MediaTransportControls@DirectUI@@AEAAJXZ
    long HideControlPanelFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideMoreButtonIfNecessary@MediaTransportControls@DirectUI@@AEAAJXZ
    long HideMoreButtonIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideVerticalVolume@MediaTransportControls@DirectUI@@AEAAJE@Z
    long HideVerticalVolume(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestHelper@MediaTransportControls@DirectUI@@AEAAJUPoint@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@PEAE@Z
    long HitTestHelper(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupPartsAndHandlers@MediaTransportControls@DirectUI@@AEAAJXZ
    long HookupPartsAndHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupPhoneSpecificPartsAndHandlers@MediaTransportControls@DirectUI@@AEAAJXZ
    long HookupPhoneSpecificPartsAndHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupVolumeAndProgressPartsAndHandlers@MediaTransportControls@DirectUI@@AEAAJXZ
    long HookupVolumeAndProgressPartsAndHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAudio@MediaTransportControls@DirectUI@@AEAAJXZ
    long InitializeAudio();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVideo@MediaTransportControls@DirectUI@@AEAAJXZ
    long InitializeVideo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVolume@MediaTransportControls@DirectUI@@AEAAJXZ
    long InitializeVolume();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsButtonCollapsedbySystem@MediaTransportControls@DirectUI@@AEAAEPEAUIUIElement@Xaml@UI@Windows@@@Z
    unsigned char IsButtonCollapsedbySystem(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLiveContent@MediaTransportControls@DirectUI@@AEAAEXZ
    unsigned char IsLiveContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaStateClosedFromME@MediaTransportControls@DirectUI@@AEAAJPEAE@Z
    long IsMediaStateClosedFromME(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaStateClosedFromMPE@MediaTransportControls@DirectUI@@AEAAJPEAE@Z
    long IsMediaStateClosedFromMPE(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPhoneBlue@MediaTransportControls@DirectUI@@AEAA_NXZ
    bool IsPhoneBlue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaybackRateSupported@MediaTransportControls@DirectUI@@AEAAJNPEAE@Z
    long IsPlaybackRateSupported(double, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreshold@MediaTransportControls@DirectUI@@AEAA_NXZ
    bool IsThreshold();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowsBlue@MediaTransportControls@DirectUI@@AEAA_NXZ
    bool IsWindowsBlue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkLanguageSelection@MediaTransportControls@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAU3@@Z
    long MarkLanguageSelection(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCommandBar@MediaTransportControls@DirectUI@@AEAAJXZ
    long MeasureCommandBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoreControls@MediaTransportControls@DirectUI@@AEAAJXZ
    long MoreControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextTrack@MediaTransportControls@DirectUI@@AEAAJXZ
    long NextTrack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAudioTrackClicked@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnAudioTrackClicked(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBorderSizeChanged@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnBorderSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCCSelectionButtonClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnCCSelectionButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCCTrackClicked@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnCCTrackClicked(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptionSettingsClicked@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnCaptionSettingsClicked(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptionStyleThemeClicked@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnCaptionStyleThemeClicked(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCastButtonClicked@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnCastButtonClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandBarLoaded@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnCommandBarLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControlPanelCaptureLost@MediaTransportControls@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnControlPanelCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControlPanelGotFocus@MediaTransportControls@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnControlPanelGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControlPanelLostFocus@MediaTransportControls@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnControlPanelLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControlPanelTapped@MediaTransportControls@DirectUI@@AEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnControlPanelTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowKeyDown@MediaTransportControls@DirectUI@@AEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowKeyDown(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowLayoutBoundsChanged@MediaTransportControls@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowLayoutBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFullWindowClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnFullWindowClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaPropertyChanged@MediaTransportControls@DirectUI@@AEAAJW4MediaPlayer_Property@2@@Z
    long OnMediaPropertyChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMuteClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnMuteClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlayPauseClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnPlayPauseClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlayPauseFromME@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnPlayPauseFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlayPauseFromMPE@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnPlayPauseFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlaybackRateButtonClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnPlaybackRateButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlaybackRateMenuClicked@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPlaybackRateMenuClicked(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionSliderPressed@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPositionSliderPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionSliderReleased@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPositionSliderReleased(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionSliderValueChanged@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRangeBaseValueChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnPositionSliderValueChanged(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionUpdateTimerTick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnPositionUpdateTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeatButtonClicked@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnRepeatButtonClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootMoved@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnRootMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTHAudioTrackSelectionButtonClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnTHAudioTrackSelectionButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimeElapsedClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnTimeElapsedClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimeRemainingClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnTimeRemainingClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityVisualStateChanged@MediaTransportControls@DirectUI@@AEAAJPEAUIVisualStateChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnVisibilityVisualStateChanged(::Windows::UI::Xaml::IVisualStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVolumeClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnVolumeClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVolumeSliderPointerWheelChanged@MediaTransportControls@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnVolumeSliderPointerWheelChanged(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVolumeSliderValueChanged@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnVolumeSliderValueChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomClick@MediaTransportControls@DirectUI@@AEAAJXZ
    long OnZoomClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long Pause(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long Play(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousTrack@MediaTransportControls@DirectUI@@AEAAJXZ
    long PreviousTrack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRegistrationCoreWindowKeyDown@MediaTransportControls@DirectUI@@AEAAJXZ
    long RemoveRegistrationCoreWindowKeyDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRegistrationCoreWindowLayoutBoundsChanged@MediaTransportControls@DirectUI@@AEAAJXZ
    long RemoveRegistrationCoreWindowLayoutBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMargins@MediaTransportControls@DirectUI@@AEAAJXZ
    long ResetMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPlayBackAfterCasting@MediaTransportControls@DirectUI@@AEAAJXZ
    long ResetPlayBackAfterCasting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTrickMode@MediaTransportControls@DirectUI@@AEAAJXZ
    long ResetTrickMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSystemOverlays@MediaTransportControls@DirectUI@@AEAAJXZ
    long RestoreSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectErrorMessageFormat@MediaTransportControls@DirectUI@@AEAAJIIPEAI@Z
    long SelectErrorMessageFormat(unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAudioTrackFromME@MediaTransportControls@DirectUI@@AEAAJI@Z
    long SetAudioTrackFromME(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAudioTrackFromMPE@MediaTransportControls@DirectUI@@AEAAJI@Z
    long SetAudioTrackFromMPE(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCCTrackFromME@MediaTransportControls@DirectUI@@AEAAJI@Z
    long SetCCTrackFromME(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCCTrackFromMPE@MediaTransportControls@DirectUI@@AEAAJI@Z
    long SetCCTrackFromMPE(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckedProperty@MediaTransportControls@DirectUI@@AEAAJPEAUIToggleButton@Primitives@Controls@Xaml@UI@Windows@@E@Z
    long SetCheckedProperty(::Windows::UI::Xaml::Controls::Primitives::IToggleButton *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullWindow@MediaTransportControls@DirectUI@@AEAAJE@Z
    long SetFullWindow(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMeasureCommandBar@MediaTransportControls@DirectUI@@AEAAJXZ
    long SetMeasureCommandBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMiniView@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long SetMiniView(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMuted@MediaTransportControls@DirectUI@@AEAAJE@Z
    long SetMuted(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaybackRate@MediaTransportControls@DirectUI@@AEAAJN_N@Z
    long SetPlaybackRate(double, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@MediaTransportControls@DirectUI@@AEAAJUTimeSpan@Foundation@Windows@@_N@Z
    long SetPosition(WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRepeatMode@MediaTransportControls@DirectUI@@AEAAJW4RepeatMode@2@@Z
    long SetRepeatMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStretch@MediaTransportControls@DirectUI@@AEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    long SetStretch(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabIndex@MediaTransportControls@DirectUI@@AEAAJXZ
    long SetTabIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVolume@MediaTransportControls@DirectUI@@AEAAJN@Z
    long SetVolume(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDefaultProperties@MediaTransportControls@DirectUI@@AEAAJXZ
    long SetupDefaultProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeInline@MediaTransportControls@DirectUI@@AEAAJPEAE@Z
    long ShouldBeInline(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHideControlPanel@MediaTransportControls@DirectUI@@AEAAEXZ
    unsigned char ShouldHideControlPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHideVerticalVolume@MediaTransportControls@DirectUI@@AEAAEXZ
    unsigned char ShouldHideVerticalVolume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowControlPanel@MediaTransportControls@DirectUI@@AEAAJXZ
    long ShowControlPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowControlPanelFromME@MediaTransportControls@DirectUI@@AEAAJXZ
    long ShowControlPanelFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowControlPanelFromMPE@MediaTransportControls@DirectUI@@AEAAJXZ
    long ShowControlPanelFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHideThumbnail@MediaTransportControls@DirectUI@@AEAAJE@Z
    long ShowHideThumbnail(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowVerticalVolume@MediaTransportControls@DirectUI@@AEAAJXZ
    long ShowVerticalVolume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipBackward@MediaTransportControls@DirectUI@@AEAAJXZ
    long SkipBackward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipForward@MediaTransportControls@DirectUI@@AEAAJXZ
    long SkipForward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartControlPanelHideTimer@MediaTransportControls@DirectUI@@AEAAJXZ
    long StartControlPanelHideTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPositionUpdateTimer@MediaTransportControls@DirectUI@@AEAAJXZ
    long StartPositionUpdateTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartVerticalVolumeHideTimer@MediaTransportControls@DirectUI@@AEAAJXZ
    long StartVerticalVolumeHideTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@MediaTransportControls@DirectUI@@AEAAJXZ
    long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopControlPanelHideTimer@MediaTransportControls@DirectUI@@AEAAJXZ
    long StopControlPanelHideTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopPositionUpdateTimer@MediaTransportControls@DirectUI@@AEAAJXZ
    long StopPositionUpdateTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopVerticalVolumeHideTimer@MediaTransportControls@DirectUI@@AEAAJXZ
    long StopVerticalVolumeHideTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeBreakListEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long SubscribeBreakListEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeMediaPlayerEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long SubscribeMediaPlayerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribePositionChangedEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long SubscribePositionChangedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeTrackEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long SubscribeTrackEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressSystemOverlays@MediaTransportControls@DirectUI@@AEAAJXZ
    long SuppressSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrickModeBackward@MediaTransportControls@DirectUI@@AEAAJXZ
    long TrickModeBackward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrickModeForward@MediaTransportControls@DirectUI@@AEAAJXZ
    long TrickModeForward();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubscribeBreakListEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long UnSubscribeBreakListEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubscribeMediaPlayerEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long UnSubscribeMediaPlayerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubscribePositionChangedEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long UnSubscribePositionChangedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubscribeTrackEvents@MediaTransportControls@DirectUI@@AEAAJXZ
    long UnSubscribeTrackEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAudioSelectionUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateAudioSelectionUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBreakStatus@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long UpdateBreakStatus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBreakUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateBreakUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCCSelectionUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateCCSelectionUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDownloadProgressUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateDownloadProgressUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateErrorUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateErrorUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateErrorUIFromME@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateErrorUIFromME();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateErrorUIFromMPE@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateErrorUIFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullScreenMode@MediaTransportControls@DirectUI@@AEAAJE@Z
    long UpdateFullScreenMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullWindowUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateFullWindowUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMutedUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateIsMutedUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMediaControlAllStates@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateMediaControlAllStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMediaControlState@MediaTransportControls@DirectUI@@AEAAJW4KnownPropertyIndex@@@Z
    long UpdateMediaControlState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMediaTransportBounds@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateMediaTransportBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMiniViewUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateMiniViewUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrientation@MediaTransportControls@DirectUI@@AEAAJW4DisplayOrientations@Display@Graphics@Windows@@E@Z
    long UpdateOrientation(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlayPauseUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdatePlayPauseUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaybackItemReference@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdatePlaybackItemReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaybackRateUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdatePlaybackRateUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdatePositionUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRepeatButtonUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateRepeatButtonUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRepeatButtonUIFromMPE@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateRepeatButtonUIFromMPE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSafeMargins@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long UpdateSafeMargins(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSafeMarginsinFullWindow@MediaTransportControls@DirectUI@@AEAAJ_N@Z
    long UpdateSafeMarginsinFullWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSeekPositionsUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateSeekPositionsUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimeAutomationProperties@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateTimeAutomationProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltipText@MediaTransportControls@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUHSTRING__@@@Z
    long UpdateTooltipText(::Windows::UI::Xaml::IDependencyObject *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTracksUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateTracksUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrickModeButton@MediaTransportControls@DirectUI@@AEAAJN@Z
    long UpdateTrickModeButton(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrickModeFallbackUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateTrickModeFallbackUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVerticalVolumeSliderHeight@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateVerticalVolumeSliderHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVolumeUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateVolumeUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateZoomUI@MediaTransportControls@DirectUI@@AEAAJXZ
    long UpdateZoomUI();
};
} // namespace DirectUI
