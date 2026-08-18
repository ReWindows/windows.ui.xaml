#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 86 member(s).
namespace DirectUI {
class MediaPlayerElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInitImpl@MediaPlayerElement@DirectUI@@QEAAJPEAVXamlServiceProviderContext@@@Z
    long EndInitImpl(XamlServiceProviderContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@MediaPlayerElement@DirectUI@@UEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MediaPlayerElement@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMTCVisible@MediaPlayerElement@DirectUI@@QEAAJN@Z
    long OnMTCVisible(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@MediaPlayerElement@DirectUI@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@MediaPlayerElement@DirectUI@@UEAAJXZ
    virtual long PrepareState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaPlayerImpl@MediaPlayerElement@DirectUI@@QEAAJPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    long SetMediaPlayerImpl(::Windows::Media::Playback::IMediaPlayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextCanceled@MediaPlayerElement@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVRoutedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextCanceled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextRequested@MediaPlayerElement@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVContextRequestedEventArgs@Input@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DoubleTapped@MediaPlayerElement@DirectUI@@UEAAJPEAUIDoubleTappedEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DoubleTapped(::Windows::UI::Xaml::Input::IDoubleTappedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragEnter@MediaPlayerElement@DirectUI@@UEAAJPEAUIDragEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragEnter(::Windows::UI::Xaml::IDragEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragLeave@MediaPlayerElement@DirectUI@@UEAAJPEAUIDragEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragLeave(::Windows::UI::Xaml::IDragEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragOver@MediaPlayerElement@DirectUI@@UEAAJPEAUIDragEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragOver(::Windows::UI::Xaml::IDragEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragStarting@MediaPlayerElement@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVDragStartingEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragStarting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Drop@MediaPlayerElement@DirectUI@@UEAAJPEAUIDragEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Drop(::Windows::UI::Xaml::IDragEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DropCompleted@MediaPlayerElement@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVDropCompletedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DropCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@MediaPlayerElement@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GotFocus(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Holding@MediaPlayerElement@DirectUI@@UEAAJPEAUIHoldingEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Holding(::Windows::UI::Xaml::Input::IHoldingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyDown@MediaPlayerElement@DirectUI@@UEAAJPEAUIKeyEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyDown(::Windows::UI::Xaml::Input::IKeyEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyUp@MediaPlayerElement@DirectUI@@UEAAJPEAUIKeyEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyUp(::Windows::UI::Xaml::Input::IKeyEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LostFocus@MediaPlayerElement@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LostFocus(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationCompleted@MediaPlayerElement@DirectUI@@UEAAJPEAUIManipulationCompletedEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationCompleted(::Windows::UI::Xaml::Input::IManipulationCompletedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationDelta@MediaPlayerElement@DirectUI@@UEAAJPEAUIManipulationDeltaEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationDelta(::Windows::UI::Xaml::Input::IManipulationDeltaEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationInertiaStarting@MediaPlayerElement@DirectUI@@UEAAJPEAUIManipulationInertiaStartingEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationInertiaStarting(::Windows::UI::Xaml::Input::IManipulationInertiaStartingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationStarted@MediaPlayerElement@DirectUI@@UEAAJPEAUIManipulationStartedEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationStarted(::Windows::UI::Xaml::Input::IManipulationStartedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationStarting@MediaPlayerElement@DirectUI@@UEAAJPEAUIManipulationStartingEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationStarting(::Windows::UI::Xaml::Input::IManipulationStartingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerCanceled@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerCanceled(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerCaptureLost@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerCaptureLost(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerEntered@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerEntered(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerExited@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerExited(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerMoved@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerMoved(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerPressed@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerPressed(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerReleased@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerReleased(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerWheelChanged@MediaPlayerElement@DirectUI@@UEAAJPEAUIPointerEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerWheelChanged(::Windows::UI::Xaml::Input::IPointerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RightTapped@MediaPlayerElement@DirectUI@@UEAAJPEAUIRightTappedEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RightTapped(::Windows::UI::Xaml::Input::IRightTappedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Tapped@MediaPlayerElement@DirectUI@@UEAAJPEAUITappedEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Tapped(::Windows::UI::Xaml::Input::ITappedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceImpl@MediaPlayerElement@DirectUI@@QEAAJPEAPEAUIMediaPlaybackSource@Playback@Media@Windows@@@Z
    long get_SourceImpl(::Windows::Media::Playback::IMediaPlaybackSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransportControlsImpl@MediaPlayerElement@DirectUI@@QEAAJPEAUIMediaTransportControls@Controls@Xaml@UI@Windows@@@Z
    long put_TransportControlsImpl(::Windows::UI::Xaml::Controls::IMediaTransportControls *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextCanceled@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextCanceled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextRequested@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DoubleTapped@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DoubleTapped(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragEnter@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragEnter(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragLeave@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragLeave(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragOver@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragOver(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragStarting@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragStarting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Drop@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Drop(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DropCompleted@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DropCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GotFocus@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GotFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Holding@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Holding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyDown@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyUp@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyUp(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LostFocus@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LostFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationCompleted@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationDelta@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationDelta(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationInertiaStarting@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationInertiaStarting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationStarted@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationStarting@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationStarting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerCanceled@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerCanceled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerCaptureLost@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerCaptureLost(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerEntered@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerEntered(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerExited@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerExited(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerMoved@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerMoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerPressed@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerReleased@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerWheelChanged@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerWheelChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RightTapped@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RightTapped(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Tapped@MediaPlayerElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Tapped(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaPlayerElement@DirectUI@@UEAA@XZ
    virtual ~MediaPlayerElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@MediaPlayerElement@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToFullWindowMediaRoot@MediaPlayerElement@DirectUI@@AEAAJXZ
    long AddToFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMediaPlayer@MediaPlayerElement@DirectUI@@AEAAJPEAUIMediaPlayer@Playback@Media@Windows@@@Z
    long CloseMediaPlayer(::Windows::Media::Playback::IMediaPlayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultMediaPlayer@MediaPlayerElement@DirectUI@@AEAAJXZ
    long CreateDefaultMediaPlayer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertySet@MediaPlayerElement@DirectUI@@AEAA_NW4KnownPropertyIndex@@@Z
    bool IsPropertySet(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowLayoutBoundsChanged@MediaPlayerElement@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowLayoutBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectEvents@MediaPlayerElement@DirectUI@@AEAAJXZ
    long RedirectEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromFullWindowMediaRoot@MediaPlayerElement@DirectUI@@AEAAJXZ
    long RemoveFromFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreEventsRedirection@MediaPlayerElement@DirectUI@@AEAAJXZ
    long RestoreEventsRedirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusAfterEnteringFullWindowMode@MediaPlayerElement@DirectUI@@AEAAJXZ
    long SetFocusAfterEnteringFullWindowMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAutoPlay@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateAutoPlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsFullWindow@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateIsFullWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMediaTransportBounds@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateMediaTransportBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosterImageVisibility@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdatePosterImageVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSource@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimedTextSource@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateTimedTextSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransportControlsPresenter@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateTransportControlsPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransportControlsState@MediaPlayerElement@DirectUI@@AEAAJXZ
    long UpdateTransportControlsState();
};
} // namespace DirectUI
