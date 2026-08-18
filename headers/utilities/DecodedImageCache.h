#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class DecodedImageCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecodedImageCache@@QEAA@PEAUIInvalidateDecodedImageCacheCallback@@V?$xref_ptr@VImageDecodeParams@@@@PEAVOfferableSoftwareBitmap@@@Z
    DecodedImageCache(IInvalidateDecodedImageCacheCallback *, WindissectOpaque, OfferableSoftwareBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelete@DecodedImageCache@@UEAAXAEBVxstring_ptr@@@Z
    virtual void OnDelete(xstring_ptr const &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecodedImageCache@@EEAA@XZ
    virtual ~DecodedImageCache();
};
