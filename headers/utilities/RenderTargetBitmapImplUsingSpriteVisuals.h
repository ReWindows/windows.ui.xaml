#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class RenderTargetBitmapImplUsingSpriteVisuals {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@RenderTargetBitmapImplUsingSpriteVisuals@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailRender@RenderTargetBitmapImplUsingSpriteVisuals@@UEAAJJ@Z
    virtual long FailRender(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawRequired@RenderTargetBitmapImplUsingSpriteVisuals@@UEBA_NXZ
    virtual bool IsDrawRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFallbackRequired@RenderTargetBitmapImplUsingSpriteVisuals@@UEBA_NXZ
    virtual bool IsFallbackRequired() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDraw@RenderTargetBitmapImplUsingSpriteVisuals@@UEAAJXZ
    virtual long PostDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCommit@RenderTargetBitmapImplUsingSpriteVisuals@@UEAAJPEAVDCompTreeHost@@PEAVHWTexture@@PEAUIPALEvent@@@Z
    virtual long PreCommit(DCompTreeHost *, HWTexture *, IPALEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRender@RenderTargetBitmapImplUsingSpriteVisuals@@UEAAJPEAVCUIElement@@HHPEAVICoreAsyncAction@@@Z
    virtual long RequestRender(CUIElement *, int, int, ICoreAsyncAction *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RenderTargetBitmapImplUsingSpriteVisuals@@UEAA@XZ
    virtual ~RenderTargetBitmapImplUsingSpriteVisuals();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@RenderTargetBitmapImplUsingSpriteVisuals@@AEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCaptureThreaded@RenderTargetBitmapImplUsingSpriteVisuals@@CAJPEAUICompositionSurface@Composition@UI@Windows@@PEAVHWTexture@@PEAVCD3D11Device@@@Z
    static long ProcessCaptureThreaded(::Windows::UI::Composition::ICompositionSurface *, HWTexture *, CD3D11Device *);
};
