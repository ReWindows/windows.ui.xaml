#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class ImageSharingEngineHost {
public:
    class ImageSharingState;
    class PlayToControl;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImageSharingEngineHost@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@ImageSharingEngineHost@@UEAAJPEAUIMFSharingEngineClassFactory@@_N@Z
    virtual long Connect(IMFSharingEngineClassFactory *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ImageSharingEngineHost@@SAJPEAUIMediaServices@@PEAUIXcpImageSharingEngineNotify@@PEAPEAUIXcpImageSharingEngine@@@Z
    static long Create(IMediaServices *, IXcpImageSharingEngineNotify *, IXcpImageSharingEngine * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@ImageSharingEngineHost@@UEAAJXZ
    virtual long Disconnect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlayToSource@ImageSharingEngineHost@@UEAAJPEAVCValue@@@Z
    virtual long GetPlayToSource(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaEvent@ImageSharingEngineHost@@UEAAJPEAUIObject@@H@Z
    virtual long HandleMediaEvent(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCasting@ImageSharingEngineHost@@UEAAJPEAUIInspectable@@PEAUIUnknown@@PEAUICastingSource@Casting@Media@Windows@@@Z
    virtual long InitializeCasting(IInspectable *, IUnknown *, ::Windows::Media::Casting::ICastingSource *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImageSharingEngineHost@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@ImageSharingEngineHost@@UEAAJPEAUIPALSurface@@@Z
    virtual long SetSource(IPALSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@ImageSharingEngineHost@@UEAAXXZ
    virtual void Shutdown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@ImageSharingEngineHost@@IEAAXXZ
    void Deinitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageSharingEngineHost@@IEAA@XZ
    ImageSharingEngineHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ImageSharingEngineHost@@IEAAJPEAUIMediaServices@@PEAUIXcpImageSharingEngineNotify@@@Z
    long Initialize(IMediaServices *, IXcpImageSharingEngineNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@ImageSharingEngineHost@@IEAAJI@Z
    long QueueEvent(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageSharingEngineHost@@MEAA@XZ
    virtual ~ImageSharingEngineHost();
};
