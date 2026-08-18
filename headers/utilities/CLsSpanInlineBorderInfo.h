#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace Ptls6 {
class CLsSpanInlineBorderInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsSpanInlineBorderInfo@Ptls6@@SAJPEAUlscontext@2@PEAUlsparaclient@2@HHHVLSSPANINT@2@KHPEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, int, int, int, WindissectOpaque, unsigned long, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInlineBorderDnode@CLsSpanInlineBorderInfo@Ptls6@@QEAAXHPEBVCLsDnodeInlineBorder@2@PEAUlsinlineborderinfo@2@@Z
    void RegisterInlineBorderDnode(int, WindissectOpaque const *, WindissectOpaque *);
};
} // namespace Ptls6
