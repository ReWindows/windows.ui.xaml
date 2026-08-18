#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace CWinHttp11StreamBuffer {
class StreamDataChunkList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StreamDataChunkList@CWinHttp11StreamBuffer@@SAJPEAPEAV12@@Z
    static long Create(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@StreamDataChunkList@CWinHttp11StreamBuffer@@QEAAJII@Z
    long Write(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StreamDataChunkList@CWinHttp11StreamBuffer@@QEAA@XZ
    ~StreamDataChunkList();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFloorChunk@StreamDataChunkList@CWinHttp11StreamBuffer@@AEAAPEAUStreamDataChunk@2@IPEAU32@@Z
    WindissectOpaque * GetFloorChunk(unsigned int, WindissectOpaque *);
};
} // namespace CWinHttp11StreamBuffer
