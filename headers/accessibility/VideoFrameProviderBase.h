#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class VideoFrameProviderBase {
public:
    class MediaEngineNotify;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindowlessSwapchainMode@VideoFrameProviderBase@@UEAAJAEBUXRECTF_RB@@AEBUXRECT_WH@@@Z
    virtual long EnableWindowlessSwapchainMode(XRECTF_RB const &, XRECT_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapchainHandle@VideoFrameProviderBase@@UEBAPEAXXZ
    virtual void * GetSwapchainHandle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceChanged@VideoFrameProviderBase@@UEAAXXZ
    virtual void OnGraphicsDeviceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainAvailable@VideoFrameProviderBase@@UEAAJXZ
    virtual long OnSwapChainAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainUnavailable@VideoFrameProviderBase@@UEAAJXZ
    virtual long OnSwapChainUnavailable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@VideoFrameProviderBase@@MEAAJPEAUIMFSharingEngineClassFactory@@_N@Z
    virtual long Connect(IMFSharingEngineClassFactory *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@VideoFrameProviderBase@@MEAAXXZ
    virtual void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeMediaEngine@VideoFrameProviderBase@@IEAAJXZ
    long DeinitializeMediaEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@VideoFrameProviderBase@@MEAAJXZ
    virtual long Disconnect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@VideoFrameProviderBase@@MEAAJPEAW4PLAYTO_SOURCE_CREATEFLAGS@@@Z
    virtual long GetCapabilities(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@VideoFrameProviderBase@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMediaEngine@VideoFrameProviderBase@@IEAAJPEAUIMFDXGIDeviceManager@@IPEAUIMFContentProtectionManager@@PEAUHWND__@@PEAW4_AUDIO_STREAM_CATEGORY@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z
    long InitializeMediaEngine(IMFDXGIDeviceManager *, unsigned int, IMFContentProtectionManager *, HWND__*, int *, int*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGraphicsDeviceChangeListener@VideoFrameProviderBase@@MEAAJXZ
    virtual long RegisterGraphicsDeviceChangeListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@VideoFrameProviderBase@@MEAAXXZ
    virtual void ResetState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVideoCompositionNotify@VideoFrameProviderBase@@IEAAJPEAUIXcpVideoCompositionNotify@@@Z
    long SetVideoCompositionNotify(IXcpVideoCompositionNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGraphicsDeviceChangeListener@VideoFrameProviderBase@@MEAAJXZ
    virtual long UnregisterGraphicsDeviceChangeListener();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VideoFrameProviderBase@@IEAA@PEAUIMediaServices@@PEAU_GUID@@@Z
    VideoFrameProviderBase(IMediaServices *, _GUID *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VideoFrameProviderBase@@MEAA@XZ
    virtual ~VideoFrameProviderBase();
};
