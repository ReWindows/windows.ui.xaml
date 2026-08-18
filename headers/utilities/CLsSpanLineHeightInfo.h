#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace Ptls6 {
class CLsSpanLineHeightInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsSpanLineHeightInfo@Ptls6@@SAJPEAUlscontext@2@PEAUlsparaclient@2@HW4_lsdevice@2@VLSSPANINT@2@PEAVCLsSpanNode@2@KPEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque, WindissectOpaque *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FSpecialLineHeight@CLsSpanLineHeightInfo@Ptls6@@QEBAHAEBV12@@Z
    int FSpecialLineHeight(WindissectOpaque const &) const;
};
} // namespace Ptls6
