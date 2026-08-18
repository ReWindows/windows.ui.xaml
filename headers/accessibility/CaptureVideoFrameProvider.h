#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class CaptureVideoFrameProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CaptureVideoFrameProvider@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CaptureVideoFrameProvider@@SAJPEAVCCaptureElement@@PEAUIMediaServices@@PEAVCValue@@PEAPEAUIXcpCaptureVideoFrameProvider@@@Z
    static long Create(CCaptureElement *, IMediaServices *, CValue *, IXcpCaptureVideoFrameProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindowlessSwapchainMode@CaptureVideoFrameProvider@@UEAAJAEBUXRECTF_RB@@AEBUXRECT_WH@@@Z
    virtual long EnableWindowlessSwapchainMode(XRECTF_RB const &, XRECT_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CaptureVideoFrameProvider@@UEAAIXZ
    virtual unsigned int GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapchainHandle@CaptureVideoFrameProvider@@UEBAPEAXXZ
    virtual void * GetSwapchainHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CaptureVideoFrameProvider@@UEAAIXZ
    virtual unsigned int GetWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewStoppedCallback@CaptureVideoFrameProvider@@QEAAJXZ
    long OnPreviewStoppedCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainAvailable@CaptureVideoFrameProvider@@UEAAJXZ
    virtual long OnSwapChainAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainUnavailable@CaptureVideoFrameProvider@@UEAAJXZ
    virtual long OnSwapChainUnavailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReinitializePreviewSource@CaptureVideoFrameProvider@@UEAAJXZ
    virtual long ReinitializePreviewSource();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CaptureVideoFrameProvider@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CaptureVideoFrameProvider@@UEAAJXZ
    virtual long Shutdown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@CaptureVideoFrameProvider@@MEAAXXZ
    virtual void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventProcCallback@CaptureVideoFrameProvider@@MEAAJK_KK@Z
    virtual long EventProcCallback(unsigned long, uint64_t, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CaptureVideoFrameProvider@@MEAA_NXZ
    virtual bool HasSwapChainContent();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CaptureVideoFrameProvider@@AEAA@PEAVCCaptureElement@@PEAUIMediaServices@@@Z
    CaptureVideoFrameProvider(CCaptureElement *, IMediaServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CaptureVideoFrameProvider@@AEAAJPEAVCValue@@@Z
    long Initialize(CValue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaptureVideoFrameProvider@@EEAA@XZ
    virtual ~CaptureVideoFrameProvider();
};
