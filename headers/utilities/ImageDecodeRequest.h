#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class ImageDecodeRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResources@ImageDecodeRequest@@UEAAXXZ
    virtual void CleanupDeviceRelatedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectImageOperation@ImageDecodeRequest@@UEAAXXZ
    virtual void DisconnectImageOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodedSize@ImageDecodeRequest@@UEBA?AUXSIZE@@XZ
    virtual XSIZE GetDecodedSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDecoder@ImageDecodeRequest@@UEBA_NXZ
    virtual bool HasDecoder() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageDecodeRequest@@QEAA@PEAVCCoreServices@@V?$xref_ptr@VImageCache@@@@@Z
    ImageDecodeRequest(CCoreServices *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDecodeInProgress@ImageDecodeRequest@@UEAA_NXZ
    virtual bool IsDecodeInProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCallback@ImageDecodeRequest@@QEAAJPEAUIImageAvailableResponse@@@Z
    long NotifyCallback(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayAnimation@ImageDecodeRequest@@UEAAJXZ
    virtual long PlayAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeAnimation@ImageDecodeRequest@@UEAAJXZ
    virtual long ResumeAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDecodeParams@ImageDecodeRequest@@UEAAJV?$xref_ptr@UIImageAvailableCallback@@@@V?$xref_ptr@VImageDecodeParams@@@@@Z
    virtual long SetDecodeParams(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@ImageDecodeRequest@@UEAAJXZ
    virtual long StopAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendAnimation@ImageDecodeRequest@@UEAAXXZ
    virtual void SuspendAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageDecodeRequest@@UEAA@XZ
    virtual ~ImageDecodeRequest();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromGlobalCount@ImageDecodeRequest@@AEAAXXZ
    void RemoveFromGlobalCount();
};
