#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 36 member(s).
class ImageSurfaceWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHWTextureWithNoHardware@ImageSurfaceWrapper@@QEAAXPEAVHWTextureManager@@_N@Z
    void AllocateHWTextureWithNoHardware(HWTextureManager *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHardwareResources@ImageSurfaceWrapper@@QEAAJPEAVHWTextureManager@@IIW4PixelFormat@@_N22@Z
    long AllocateHardwareResources(HWTextureManager *, unsigned int, unsigned int, int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForHardwareResources@ImageSurfaceWrapper@@QEAAIXZ
    unsigned int CheckForHardwareResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForLostHardwareResources@ImageSurfaceWrapper@@QEAAIXZ
    unsigned int CheckForLostHardwareResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResources@ImageSurfaceWrapper@@QEAAXXZ
    void CleanupDeviceRelatedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ImageSurfaceWrapper@@SAJPEAVCCoreServices@@IPEAPEAV1@@Z
    static long Create(CCoreServices *, unsigned int, ImageSurfaceWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesHardwareSurfaceMatch@ImageSurfaceWrapper@@QEBA_NPEAVHWTextureManager@@@Z
    bool DoesHardwareSurfaceMatch(HWTextureManager *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHardwareResources@ImageSurfaceWrapper@@QEAAJPEAVHWTextureManager@@PEAPEAVImageHardwareResources@@@Z
    long EnsureHardwareResources(HWTextureManager *, ImageHardwareResources * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedSurfaceCommitSize@ImageSurfaceWrapper@@QEBA_KXZ
    uint64_t GetEstimatedSurfaceCommitSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareHeight@ImageSurfaceWrapper@@QEBAIXZ
    unsigned int GetHardwareHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareSurface@ImageSurfaceWrapper@@QEBAPEAVHWTexture@@XZ
    HWTexture * GetHardwareSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareWidth@ImageSurfaceWrapper@@QEBAIXZ
    unsigned int GetHardwareWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@ImageSurfaceWrapper@@QEBAIXZ
    unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiledSurface@ImageSurfaceWrapper@@QEBAPEAVCTiledSurface@@XZ
    CTiledSurface * GetTiledSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@ImageSurfaceWrapper@@QEBAIXZ
    unsigned int GetWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnySurface@ImageSurfaceWrapper@@QEAA_NXZ
    bool HasAnySurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHardwareSurfaces@ImageSurfaceWrapper@@QEAA_NXZ
    bool HasHardwareSurfaces();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLostHardwareResources@ImageSurfaceWrapper@@QEAA_NXZ
    bool HasLostHardwareResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@ImageSurfaceWrapper@@QEAAIXZ
    unsigned int IsOpaque();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowMemory@ImageSurfaceWrapper@@UEAAXXZ
    virtual void OnLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@ImageSurfaceWrapper@@UEAAJXZ
    virtual long OnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuspend@ImageSurfaceWrapper@@UEAAJI@Z
    virtual long OnSuspend(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForDeviceCleanup@ImageSurfaceWrapper@@QEAAXXZ
    void RegisterForDeviceCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHardwareResources@ImageSurfaceWrapper@@QEAAXXZ
    void ReleaseHardwareResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSurfaces@ImageSurfaceWrapper@@QEAAX_N0@Z
    void ResetSurfaces(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareSurface@ImageSurfaceWrapper@@QEAAXPEAVHWTexture@@@Z
    void SetHardwareSurface(HWTexture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTiling@ImageSurfaceWrapper@@QEAAJHHI@Z
    long StartTiling(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForDeviceCleanup@ImageSurfaceWrapper@@QEAAXXZ
    void UnregisterForDeviceCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHardwareResources@ImageSurfaceWrapper@@QEAAXXZ
    void UpdateHardwareResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSurfaceFromSoftware@ImageSurfaceWrapper@@QEAAJPEAVHWTextureManager@@@Z
    long UpdateSurfaceFromSoftware(HWTextureManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseCachedHardwareResources@ImageSurfaceWrapper@@QEAAXPEAVImageHardwareResources@@@Z
    void UseCachedHardwareResources(ImageHardwareResources *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageSurfaceWrapper@@UEAA@XZ
    virtual ~ImageSurfaceWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSoftwareSurfaceIfAllowed@ImageSurfaceWrapper@@AEAAXXZ
    void ReleaseSoftwareSurfaceIfAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTiledSurface@ImageSurfaceWrapper@@AEAAXPEAVCTiledSurface@@@Z
    void SetTiledSurface(CTiledSurface *);
};
