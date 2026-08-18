#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class WicService {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapDecoder@WicService@@QEAAJAEAVIRawData@@AEAV?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@@Z
    long GetBitmapDecoder(IRawData &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadata@WicService@@QEAAJAEBV?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@AEAUImageMetadata@@@Z
    long GetMetadata(WindissectOpaque const &, ImageMetadata &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceCallback@WicService@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WicService@@AEAA@XZ
    WicService();
};
