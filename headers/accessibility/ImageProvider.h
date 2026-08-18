#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class ImageProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ImageProvider@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyImage@ImageProvider@@QEAAJAEAV?$xref_ptr@VImageCopyParams@@@@AEBV?$xref_ptr@UIImageAvailableCallback@@@@PEAVCCoreServices@@AEAV?$xref_ptr@UIAbortableImageOperation@@@@@Z
    long CopyImage(WindissectOpaque &, WindissectOpaque const &, CCoreServices *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ImageProvider@@SAJPEAVCCoreServices@@PEAVImageTaskDispatcher@@PEAUIAsyncImageFactory@@PEAPEAV1@@Z
    static long Create(CCoreServices *, ImageTaskDispatcher *, IAsyncImageFactory *, ImageProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCacheEntry@ImageProvider@@QEAAJAEBVxstring_ptr@@PEAUIPALUri@@_NW4Value@GetImageOptions@@PEA_NPEAPEAVImageCache@@@Z
    long EnsureCacheEntry(xstring_ptr const &, IPALUri *, bool, int, bool *, ImageCache * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddImageCache@ImageProvider@@AEAAJPEAVImageCache@@@Z
    long AddImageCache(ImageCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupImageCacheStoreValue@ImageProvider@@CAXAEBVxstring_ptr@@PEAX1@Z
    static void CleanupImageCacheStoreValue(xstring_ptr const &, void *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageCache@ImageProvider@@AEAAJAEBVxstring_ptr@@PEAPEAVImageCache@@@Z
    long GetImageCache(xstring_ptr const &, ImageCache * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ImageProvider@@AEAAJPEAVCCoreServices@@PEAVImageTaskDispatcher@@PEAUIAsyncImageFactory@@@Z
    long Initialize(CCoreServices *, ImageTaskDispatcher *, IAsyncImageFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeCacheKey@ImageProvider@@AEAAJPEAUIPALUri@@PEAVxstring_ptr@@@Z
    long MakeCacheKey(IPALUri *, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageCacheInvalidated@ImageProvider@@EEAAXPEAVImageCache@@@Z
    virtual void OnImageCacheInvalidated(ImageCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveImageCache@ImageProvider@@AEAAJPEAVImageCache@@@Z
    long RemoveImageCache(ImageCache *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageProvider@@EEAA@XZ
    virtual ~ImageProvider();
};
