#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class ImageCacheDownloadCallbackMarshaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotData@ImageCacheDownloadCallbackMarshaller@@UEAAJ_K0@Z
    virtual long GotData(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotResponse@ImageCacheDownloadCallbackMarshaller@@UEAAJV?$xref_ptr@UIPALDownloadResponse@@@@J@Z
    virtual long GotResponse(WindissectOpaque, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageCacheDownloadCallbackMarshaller@@UEAA@XZ
    virtual ~ImageCacheDownloadCallbackMarshaller();
};
