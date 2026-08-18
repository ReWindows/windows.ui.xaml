#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class WicAnimatedGifDecoder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeltaFrameSource@WicAnimatedGifDecoder@@SAJAEBV?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@HAEAUDeltaFrameInfo@1@AEAV?$ComPtr@UIWICBitmapSource@@@34@@Z
    static long CreateDeltaFrameSource(WindissectOpaque const &, int, WindissectOpaque &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WicAnimatedGifDecoder@@UEAA@XZ
    virtual ~WicAnimatedGifDecoder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWicBitmap@WicAnimatedGifDecoder@@CAJV?$ComPtr@UIWICImagingFactory@@@WRL@Microsoft@@AEBUImageMetadata@@PEAPEAUIWICBitmap@@@Z
    static long CreateWicBitmap(WindissectOpaque, ImageMetadata const &, IWICBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeltaFrameInfo@WicAnimatedGifDecoder@@CAJAEBV?$ComPtr@UIWICBitmapFrameDecode@@@WRL@Microsoft@@AEAUDeltaFrameInfo@1@@Z
    static long GetDeltaFrameInfo(WindissectOpaque const &, WindissectOpaque &);
};
