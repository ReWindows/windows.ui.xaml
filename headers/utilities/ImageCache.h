#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class ImageCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImage@ImageCache@@QEAAJAEAV?$xref_ptr@VImageDecodeParams@@@@AEBV?$xref_ptr@UIImageAvailableCallback@@@@AEAV?$xref_ptr@UIAbortableImageOperation@@@@@Z
    long GetImage(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotDownloadProgressUpdate@ImageCache@@QEAAJ_K0@Z
    long GotDownloadProgressUpdate(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotDownloadResponse@ImageCache@@QEAAJPEAUIPALDownloadResponse@@J@Z
    long GotDownloadResponse(IPALDownloadResponse *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDecodeResponse@ImageCache@@QEAAJV?$xref_ptr@UIImageAvailableResponse@@@@_K@Z
    long HandleDecodeResponse(WindissectOpaque, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSoftwareImageDecodeInProgressWithParams@ImageCache@@QEBA_NIIW4PixelFormat@@@Z
    bool HasSoftwareImageDecodeInProgressWithParams(unsigned int, unsigned int, int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageCache@@QEAA@AEBVxstring_ptr@@0PEAUIPALUri@@_NPEAVCCoreServices@@PEAVImageTaskDispatcher@@IPEAUIInvalidateImageCacheCallback@@@Z
    ImageCache(xstring_ptr const &, xstring_ptr const &, IPALUri *, bool, CCoreServices *, ImageTaskDispatcher *, unsigned int, IInvalidateImageCacheCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDecode@ImageCache@@UEAAJV?$xref_ptr@UIImageAvailableResponse@@@@_K@Z
    virtual long OnDecode(WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestReleasing@ImageCache@@QEAAJQEBVImageDecodeRequest@@@Z
    long OnRequestReleasing(ImageDecodeRequest const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDecodeRequests@ImageCache@@QEAAJXZ
    long ProcessDecodeRequests();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreDecodeParamsEqual@ImageCache@@AEAA_NAEBV?$xref_ptr@VImageDecodeParams@@@@0@Z
    bool AreDecodeParamsEqual(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDecode@ImageCache@@AEAAJV?$xref_ptr@VImageDecodeRequest@@@@@Z
    long BeginDecode(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Download@ImageCache@@AEAAJXZ
    long Download();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCacheInvalidated@ImageCache@@EEAAJPEAVDecodedImageCache@@@Z
    virtual long OnCacheInvalidated(DecodedImageCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDownloadProgress@ImageCache@@AEAAJXZ
    long RaiseDownloadProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDownloadProgressUpdate@ImageCache@@AEAAJXZ
    long TriggerDownloadProgressUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerProcessDecodeRequests@ImageCache@@AEAAJXZ
    long TriggerProcessDecodeRequests();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageCache@@EEAA@XZ
    virtual ~ImageCache();
};
