#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CCaptureElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCaptureElement@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCaptureElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoFrameProvider@CCaptureElement@@UEAAPEAUIXcpVideoFrameProvider@@XZ
    virtual IXcpVideoFrameProvider * GetVideoFrameProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaEvent@CCaptureElement@@UEAAJPEAUIObject@@H@Z
    virtual long HandleMediaEvent(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CCaptureElement@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainAvailable@CCaptureElement@@UEAAJXZ
    virtual long OnSwapChainAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainUnavailable@CCaptureElement@@UEAAJXZ
    virtual long OnSwapChainUnavailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CCaptureElement@@QEAAJW4Enum@CaptureElementEvent@@@Z
    long QueueEvent(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaCapture@CCaptureElement@@QEAAJPEAVCValue@@@Z
    long SetMediaCapture(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CCaptureElement@@UEAAXXZ
    virtual void Shutdown();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CCaptureElement@@MEAAJAEAUXRECTF_WH@@@Z
    virtual long GetNaturalBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidMediaSource@CCaptureElement@@MEAA_NXZ
    virtual bool HasValidMediaSource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCaptureElement@@MEAA@XZ
    virtual ~CCaptureElement();
};
