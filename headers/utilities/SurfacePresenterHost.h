#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class SurfacePresenterHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupResources@SurfacePresenterHost@@UEAAJ_N0@Z
    virtual long CleanupResources(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SurfacePresenterHost@@SAJPEAVCCoreServices@@PEAUIViewObjectPresentNotifySite@@PEAPEAV1@@Z
    static long Create(CCoreServices *, IViewObjectPresentNotifySite *, SurfacePresenterHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@SurfacePresenterHost@@UEAAJXZ
    virtual long Detach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@SurfacePresenterHost@@QEAAJXZ
    long Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@SurfacePresenterHost@@UEAAIXZ
    virtual unsigned int GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupRoot@SurfacePresenterHost@@UEAAPEAVCPopupRoot@@XZ
    virtual CPopupRoot * GetPopupRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicRootVisual@SurfacePresenterHost@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetPublicRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisual@SurfacePresenterHost@@UEAAPEAVCRootVisual@@XZ
    virtual CRootVisual * GetRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@SurfacePresenterHost@@UEAAIXZ
    virtual unsigned int GetWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@SurfacePresenterHost@@QEAAJXZ
    long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildResources@SurfacePresenterHost@@UEAAJXZ
    virtual long RebuildResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@SurfacePresenterHost@@UEAAJXZ
    virtual long Render();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootVisual@SurfacePresenterHost@@QEAAJPEAVCUIElement@@@Z
    long SetRootVisual(CUIElement *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTarget@SurfacePresenterHost@@AEAAJHH@Z
    long EnsureRenderTarget(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStagingTexture@SurfacePresenterHost@@AEAAJXZ
    long EnsureStagingTexture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushBackBuffer@SurfacePresenterHost@@AEAAJXZ
    long FlushBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceFromSurfacePresenter@SurfacePresenterHost@@AEAAJIPEAPEAUID3D11Texture2D@@@Z
    long GetSurfaceFromSurfacePresenter(unsigned int, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SurfacePresenterHost@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSurfacePresenter@SurfacePresenterHost@@AEAAJXZ
    long UpdateSurfacePresenter();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SurfacePresenterHost@@EEAA@XZ
    virtual ~SurfacePresenterHost();
};
