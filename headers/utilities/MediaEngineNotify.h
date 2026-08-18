#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace VideoFrameProviderBase {
class MediaEngineNotify {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MediaEngineNotify@VideoFrameProviderBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@MediaEngineNotify@VideoFrameProviderBase@@UEAAJPEAUIMFSharingEngineClassFactory@@@Z
    virtual long Connect(IMFSharingEngineClassFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@MediaEngineNotify@VideoFrameProviderBase@@UEAAJXZ
    virtual long Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventNotify@MediaEngineNotify@VideoFrameProviderBase@@UEAAJK_KK@Z
    virtual long EventNotify(unsigned long, uint64_t, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@MediaEngineNotify@VideoFrameProviderBase@@UEAAJPEAW4PLAYTO_SOURCE_CREATEFLAGS@@@Z
    virtual long GetCapabilities(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaEngineNotify@VideoFrameProviderBase@@QEAA@PEAV1@@Z
    MediaEngineNotify(VideoFrameProviderBase *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaEngineNotify@VideoFrameProviderBase@@QEAA@XZ
    MediaEngineNotify();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MediaEngineNotify@VideoFrameProviderBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MediaEngineNotify@VideoFrameProviderBase@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace VideoFrameProviderBase
