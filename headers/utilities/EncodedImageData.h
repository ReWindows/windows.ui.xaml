#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class EncodedImageData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIStream@EncodedImageData@@QEAAJAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z
    long CreateIStream(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWicBitmapDecoder@EncodedImageData@@QEAAJAEAV?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@@Z
    long CreateWicBitmapDecoder(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@EncodedImageData@@QEAAJPEAVCWindowRenderTarget@@@Z
    long Parse(CWindowRenderTarget *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EncodedImageData@@QEAA@XZ
    ~EncodedImageData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSvg@EncodedImageData@@AEAAJPEAUID2D1DeviceContext5@@UXRECT_WH@@@Z
    long ParseSvg(ID2D1DeviceContext5*, XRECT_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseWic@EncodedImageData@@AEAAJXZ
    long ParseWic();
};
