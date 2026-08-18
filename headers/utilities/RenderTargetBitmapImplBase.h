#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class RenderTargetBitmapImplBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@RenderTargetBitmapImplBase@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@RenderTargetBitmapImplBase@@UEAAJPEAUIPALCompTreeRenderer@@PEAVCWindowRenderTarget@@PEAVHWTexture@@_N@Z
    virtual long Draw(IPALCompTreeRenderer *, CWindowRenderTarget *, HWTexture *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailRender@RenderTargetBitmapImplBase@@UEAAJJ@Z
    virtual long FailRender(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFallbackRequired@RenderTargetBitmapImplBase@@UEBA_NXZ
    virtual bool IsFallbackRequired() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDraw@RenderTargetBitmapImplBase@@UEAAJXZ
    virtual long PostDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCommit@RenderTargetBitmapImplBase@@UEAAJPEAVDCompTreeHost@@PEAVHWTexture@@PEAUIPALEvent@@@Z
    virtual long PreCommit(DCompTreeHost *, HWTexture *, IPALEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRender@RenderTargetBitmapImplBase@@UEAAJPEAVCUIElement@@HHPEAVICoreAsyncAction@@@Z
    virtual long RequestRender(CUIElement *, int, int, ICoreAsyncAction *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteOperation@RenderTargetBitmapImplBase@@IEAAJJ@Z
    long CompleteOperation(long);
};
