#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 37 member(s).
namespace DirectUI {
class MediaElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveAudioStream@MediaElement@DirectUI@@QEAAJPEAH@Z
    long GetActiveAudioStream(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsCastingSourceImpl@MediaElement@DirectUI@@QEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    long GetAsCastingSourceImpl(::Windows::Media::Casting::ICastingSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPlaybackItem@MediaElement@DirectUI@@QEAAJPEAPEAUIMediaPlaybackItem@Playback@Media@Windows@@@Z
    long GetCurrentPlaybackItem(::Windows::Media::Playback::IMediaPlaybackItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetachExpression@MediaElement@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVBindingExpressionBase@2@@Z
    long OnDetachExpression(CDependencyProperty const *, ::DirectUI::BindingExpressionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterFullWindowMode@MediaElement@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnEnterFullWindowMode(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitFullWindowMode@MediaElement@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnExitFullWindowMode(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMTCVisible@MediaElement@DirectUI@@QEAAXN@Z
    void OnMTCVisible(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaFailed@MediaElement@DirectUI@@SAJPEAVCDependencyObject@@I@Z
    static long OnMediaFailed(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaOpened@MediaElement@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnMediaOpened(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadyToLaunchMediaEngine@MediaElement@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnReadyToLaunchMediaEngine(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetValueExpression@MediaElement@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVBindingExpressionBase@2@@Z
    long OnSetValueExpression(CDependencyProperty const *, ::DirectUI::BindingExpressionBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaybackSourceImpl@MediaElement@DirectUI@@QEAAJPEAUIMediaPlaybackSource@Playback@Media@Windows@@@Z
    long SetPlaybackSourceImpl(::Windows::Media::Playback::IMediaPlaybackSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceImpl@MediaElement@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAUHSTRING__@@@Z
    long SetSourceImpl(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalDurationImpl@MediaElement@DirectUI@@QEAAJPEAUDuration@Xaml@UI@Windows@@@Z
    long get_NaturalDurationImpl(::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlayToSourceImpl@MediaElement@DirectUI@@QEAAJPEAPEAUIPlayToSource@PlayTo@Media@Windows@@@Z
    long get_PlayToSourceImpl(::Windows::Media::PlayTo::IPlayToSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProtectionManagerImpl@MediaElement@DirectUI@@QEAAJPEAUIMediaProtectionManager@Protection@Media@Windows@@@Z
    long put_ProtectionManagerImpl(::Windows::Media::Protection::IMediaProtectionManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransportControlsImpl@MediaElement@DirectUI@@QEAAJPEAUIMediaTransportControls@Controls@Xaml@UI@Windows@@@Z
    long put_TransportControlsImpl(::Windows::UI::Xaml::Controls::IMediaTransportControls *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaElement@DirectUI@@UEAA@XZ
    virtual ~MediaElement();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParentForAPProtected@MediaElement@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLogicalParentForAPProtected(::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@MediaElement@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@MediaElement@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@MediaElement@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableTransportControls@MediaElement@DirectUI@@AEAAJXZ
    long DisableTransportControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTimedText@MediaElement@DirectUI@@AEAAXXZ
    void EnableTimedText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTransportControls@MediaElement@DirectUI@@AEAAJXZ
    long EnableTransportControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEnterFullWindowMode@MediaElement@DirectUI@@AEAAJXZ
    long HandleEnterFullWindowMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExitFullWindowMode@MediaElement@DirectUI@@AEAAJXZ
    long HandleExitFullWindowMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaFailed@MediaElement@DirectUI@@AEAAJI@Z
    long HandleMediaFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaOpened@MediaElement@DirectUI@@AEAAJXZ
    long HandleMediaOpened();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleReadyToLaunchMediaEngine@MediaElement@DirectUI@@AEAAJXZ
    long HandleReadyToLaunchMediaEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSourceSet@MediaElement@DirectUI@@AEAAJXZ
    long HandleSourceSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncreasePositionBindingCounter@MediaElement@DirectUI@@AEAAJXZ
    long IncreasePositionBindingCounter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@MediaElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@MediaElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChangedHelper@MediaElement@DirectUI@@AEAAJW4KnownPropertyIndex@@@Z
    long PropertyChangedHelper(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePlayToSource@MediaElement@DirectUI@@AEAAJXZ
    long ReleasePlayToSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusAfterEnteringFullWindowMode@MediaElement@DirectUI@@AEAAJXZ
    long SetFocusAfterEnteringFullWindowMode();
};
} // namespace DirectUI
