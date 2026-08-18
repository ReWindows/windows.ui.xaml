#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 37 member(s).
class CMediaPlayerPresenter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaPlayerPresenter@@QEAA@PEAVCCoreServices@@@Z
    CMediaPlayerPresenter(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CMediaPlayerPresenter@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CMediaPlayerPresenter@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMediaPlayerPresenter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CMediaPlayerPresenter@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@CMediaPlayerPresenter@@UEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CMediaPlayerPresenter@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CMediaPlayerPresenter@@UEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@CMediaPlayerPresenter@@UEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreMeasure@CMediaPlayerPresenter@@QEAAXUXSIZEF@@AEAU2@@Z
    void PreMeasure(XSIZEF, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CMediaPlayerPresenter@@QEAAXPEAVCMediaPlayerElement@@@Z
    void SetOwner(CMediaPlayerElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CMediaPlayerPresenter@@UEAAJXZ
    virtual long UpdateState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaPlayerPresenter@@UEAA@XZ
    virtual ~CMediaPlayerPresenter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CMediaPlayerPresenter@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventRegistrations@CMediaPlayerPresenter@@AEAAJXZ
    long AddEventRegistrations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDCompParameters@CMediaPlayerPresenter@@AEAAJXZ
    long CalculateDCompParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPresent@CMediaPlayerPresenter@@AEAA_NXZ
    bool CanPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutOwnerNoRef@CMediaPlayerPresenter@@AEAAPEAVCFrameworkElement@@XZ
    CFrameworkElement * GetLayoutOwnerNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderSize@CMediaPlayerPresenter@@AEAA_NXZ
    bool HasRenderSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVideo@CMediaPlayerPresenter@@AEBA_NXZ
    bool HasVideo() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaCurrentItemChanged@CMediaPlayerPresenter@@AEAAJPEAUIMediaPlaybackList@Playback@Media@Windows@@PEAUICurrentMediaPlaybackItemChangedEventArgs@345@@Z
    long OnMediaCurrentItemChanged(::Windows::Media::Playback::IMediaPlaybackList *, ::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaOpened@CMediaPlayerPresenter@@AEAAJPEAUIMediaPlayer@Playback@Media@Windows@@PEAUIInspectable@@@Z
    long OnMediaOpened(::Windows::Media::Playback::IMediaPlayer *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaPlayerCastingLocationChanged@CMediaPlayerPresenter@@AEAAJPEAUIMediaPlayer@Playback@Media@Windows@@PEAUIInspectable@@@Z
    long OnMediaPlayerCastingLocationChanged(::Windows::Media::Playback::IMediaPlayer *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaPlayerSourceChanged@CMediaPlayerPresenter@@AEAAJPEAUIMediaPlayer@Playback@Media@Windows@@PEAUIInspectable@@@Z
    long OnMediaPlayerSourceChanged(::Windows::Media::Playback::IMediaPlayer *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaPlayerStateChanged@CMediaPlayerPresenter@@AEAAJPEAUIMediaPlayer@Playback@Media@Windows@@PEAUIInspectable@@@Z
    long OnMediaPlayerStateChanged(::Windows::Media::Playback::IMediaPlayer *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNaturalVideoSizeChanged@CMediaPlayerPresenter@@AEAAJPEAUIMediaPlaybackSession@Playback@Media@Windows@@PEAUIInspectable@@@Z
    long OnNaturalVideoSizeChanged(::Windows::Media::Playback::IMediaPlaybackSession *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventRegistrations@CMediaPlayerPresenter@@AEAAJXZ
    long RemoveEventRegistrations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaPlayerSwapChain@CMediaPlayerPresenter@@AEAAJXZ
    long SetMediaPlayerSwapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaPlayerSwapChain@CMediaPlayerPresenter@@AEAAJPEAX@Z
    long SetMediaPlayerSwapChain(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternalSize@CMediaPlayerPresenter@@AEAAJAEAM0AEAW4AlignmentX@DirectUI@@AEAW4AlignmentY@3@@Z
    long UpdateInternalSize(float &, float &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMediaPlayer@CMediaPlayerPresenter@@AEAAJXZ
    long UpdateMediaPlayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNaturalBounds@CMediaPlayerPresenter@@AEAAJXZ
    long UpdateNaturalBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePowerSettings@CMediaPlayerPresenter@@AEAAJXZ
    long UpdatePowerSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVideoStream@CMediaPlayerPresenter@@AEAAJAEBUXRECTF_RB@@@Z
    long UpdateVideoStream(XRECTF_RB const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibilityHandling@CMediaPlayerPresenter@@AEAAJXZ
    long UpdateVisibilityHandling();
};
