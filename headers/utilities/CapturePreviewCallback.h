#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CapturePreviewCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CapturePreviewCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CapturePreviewCallback@@QEAA@XZ
    CapturePreviewCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CapturePreviewCallback@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CapturePreviewCallback@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CapturePreviewCallback@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CapturePreviewCallback@@UEAAJPEAUIMFMediaEvent@@@Z
    virtual long OnEvent(IMFMediaEvent *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CapturePreviewCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CapturePreviewCallback@@UEAAKXZ
    virtual unsigned long Release();
};
