#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ImageCacheDecodeHandlerTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@ImageCacheDecodeHandlerTask@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@ImageCacheDecodeHandlerTask@@UEBA_KXZ
    virtual uint64_t GetRequestId() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageCacheDecodeHandlerTask@@QEAA@V?$xref_ptr@VImageCache@@@@V?$xref_ptr@UIImageAvailableResponse@@@@_K@Z
    ImageCacheDecodeHandlerTask(WindissectOpaque, WindissectOpaque, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageCacheDecodeHandlerTask@@UEAA@XZ
    virtual ~ImageCacheDecodeHandlerTask();
};
