#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace ImageSharingEngineHost {
class PlayToControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PlayToControl@ImageSharingEngineHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@PlayToControl@ImageSharingEngineHost@@UEAAJPEAUIMFSharingEngineClassFactory@@@Z
    virtual long Connect(IMFSharingEngineClassFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@PlayToControl@ImageSharingEngineHost@@UEAAJXZ
    virtual long Disconnect();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlayToControl@ImageSharingEngineHost@@QEAA@PEAV1@@Z
    PlayToControl(ImageSharingEngineHost *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PlayToControl@ImageSharingEngineHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PlayToControl@ImageSharingEngineHost@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace ImageSharingEngineHost
