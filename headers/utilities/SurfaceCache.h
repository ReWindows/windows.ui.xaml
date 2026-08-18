#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class SurfaceCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResources@SurfaceCache@@QEAAJAEBVxstring_ptr@@PEAVImageHardwareResources@@@Z
    long AddResources(xstring_ptr const &, ImageHardwareResources *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupSurfaceCacheStoreValue@SurfaceCache@@SAXAEBVxstring_ptr@@PEAX1@Z
    static void CleanupSurfaceCacheStoreValue(xstring_ptr const &, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@SurfaceCache@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SurfaceCache@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, SurfaceCache * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResources@SurfaceCache@@QEAAJAEBVxstring_ptr_view@@PEAPEAVImageHardwareResources@@@Z
    long GetResources(xstring_ptr_view const &, ImageHardwareResources * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@SurfaceCache@@QEAAJAEBVxstring_ptr@@@Z
    long Remove(xstring_ptr const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelete@SurfaceCache@@MEAAXAEBVxstring_ptr@@@Z
    virtual void OnDelete(xstring_ptr const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SurfaceCache@@MEAA@XZ
    virtual ~SurfaceCache();
};
