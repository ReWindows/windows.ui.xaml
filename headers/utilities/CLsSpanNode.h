#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Ptls6 {
class CLsSpanNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FAlmostStandardsNeverEmpty@CLsSpanNode@Ptls6@@QEBAHXZ
    int FAlmostStandardsNeverEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FInsideOtherSpan@CLsSpanNode@Ptls6@@QEBAHPEBV12@@Z
    int FInsideOtherSpan(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineOffset@CLsSpanNode@Ptls6@@QEBAXPEAJ0@Z
    void GetBaselineOffset(long *, long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeightInfo@CLsSpanNode@Ptls6@@QEBAXHPEAPEAVCLsSpanLineHeightInfo@2@PEAH@Z
    void GetHeightInfo(int, WindissectOpaque * *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeOffset@CLsSpanNode@Ptls6@@QEBAXPEAUtagLSOFFSET@2@0@Z
    void GetRelativeOffset(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlmostStandardsHasText@CLsSpanNode@Ptls6@@QEAAXXZ
    void SetAlmostStandardsHasText();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsSpanNode@Ptls6@@CAJPEAUlscontext@2@PEAUlsparaclient@2@HHVLSSPANINT@2@VLSORDINALINT@2@HHKHHHPEAV12@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque, WindissectOpaque, int, int, unsigned long, int, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsSpanNode@Ptls6@@AEAAXPEAUlscontext@2@PEAUlsparaclient@2@@Z
    void Destroy(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Ptls6
