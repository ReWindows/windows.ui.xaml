#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ImageCacheDownloadResponseTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@ImageCacheDownloadResponseTask@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@ImageCacheDownloadResponseTask@@UEBA_KXZ
    virtual uint64_t GetRequestId() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageCacheDownloadResponseTask@@QEAA@V?$weakref_ptr@VImageCache@@@xref@@V?$xref_ptr@UIPALDownloadResponse@@@@J@Z
    ImageCacheDownloadResponseTask(WindissectOpaque, WindissectOpaque, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageCacheDownloadResponseTask@@UEAA@XZ
    virtual ~ImageCacheDownloadResponseTask();
};
