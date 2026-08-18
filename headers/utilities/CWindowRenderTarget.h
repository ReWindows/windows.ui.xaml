#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CWindowRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowRenderTarget@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupResources@CWindowRenderTarget@@QEAAJ_N0@Z
    long CleanupResources(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowRenderTarget@@SAJPEAVCCoreServices@@IPEAVCompositorScheduler@@PEAVWindowsGraphicsDeviceManager@@PEAVWindowsPresentTarget@@PEAPEAV1@@Z
    static long Create(CCoreServices *, unsigned int, CompositorScheduler *, WindowsGraphicsDeviceManager *, WindowsPresentTarget *, CWindowRenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisualTree@CWindowRenderTarget@@QEAAJIPEAVVisualTree@@PEAI@Z
    long DrawVisualTree(unsigned int, VisualTree *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@CWindowRenderTarget@@QEAAJXZ
    long EnsureResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CWindowRenderTarget@@QEBAIXZ
    unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CWindowRenderTarget@@QEBAIXZ
    unsigned int GetWidth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@CWindowRenderTarget@@UEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CWindowRenderTarget@@UEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@CWindowRenderTarget@@UEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowRenderTarget@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMainDCompDeviceCommit@CWindowRenderTarget@@QEAAJXZ
    long RequestMainDCompDeviceCommit();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowRenderTarget@@AEAA@PEAVCCoreServices@@IPEAVCompositorScheduler@@PEAVWindowsGraphicsDeviceManager@@PEAVWindowsPresentTarget@@@Z
    CWindowRenderTarget(CCoreServices *, unsigned int, CompositorScheduler *, WindowsGraphicsDeviceManager *, WindowsPresentTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowRenderTarget@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeResources@CWindowRenderTarget@@AEAAJPEA_N@Z
    long InitializeResources(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowRenderTarget@@EEAA@XZ
    virtual ~CWindowRenderTarget();
};
