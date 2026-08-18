#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace Ptls6 {
class CLsSpanService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSpan@CLsSpanService@Ptls6@@QEAAJVLSORDINALINT@2@VLSNAMEINT@2@HPEAPEAVCLsSpanNode@2@@Z
    long CloseSpan(WindissectOpaque, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsSpanService@Ptls6@@SAJPEAUlscontext@2@PEAUlsparaclient@2@KHHHPEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, unsigned long, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsSpanService@Ptls6@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FNonZeroBaselineOffsetInside@CLsSpanService@Ptls6@@QEBAHXZ
    int FNonZeroBaselineOffsetInside() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstActiveSpan@CLsSpanService@Ptls6@@QEBAPEAVCLsSpanNode@2@VLSORDINALINT@2@0K@Z
    WindissectOpaque * GetFirstActiveSpan(WindissectOpaque, WindissectOpaque, unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextActiveSpan@CLsSpanService@Ptls6@@QEBAPEAVCLsSpanNode@2@PEAV32@VLSORDINALINT@2@1K@Z
    WindissectOpaque * GetNextActiveSpan(WindissectOpaque *, WindissectOpaque, WindissectOpaque, unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSpanInside@CLsSpanService@Ptls6@@QEBAPEAVCLsSpanNode@2@PEBV32@0@Z
    WindissectOpaque * GetNextSpanInside(WindissectOpaque const *, WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberActiveSpans@CLsSpanService@Ptls6@@QEBAJVLSORDINALINT@2@0K@Z
    long GetNumberActiveSpans(WindissectOpaque, WindissectOpaque, unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpanNode@CLsSpanService@Ptls6@@QEBAPEAVCLsSpanNode@2@VLSSPANINT@2@@Z
    WindissectOpaque * GetSpanNode(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSpanArrayForBreakRecord@CLsSpanService@Ptls6@@QEBAJVLSORDINALINT@2@PEAJPEAPEAPEAVCLsSpanNode@2@@Z
    long PrepareSpanArrayForBreakRecord(WindissectOpaque, long *, WindissectOpaque * * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBraces@CLsSpanService@Ptls6@@QEAAJVLSORDINALINT@2@@Z
    long RemoveBraces(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSpan@CLsSpanService@Ptls6@@AEAAJVLSSPANINT@2@VLSORDINALINT@2@HHHHPEAPEAVCLsSpanNode@2@@Z
    long OpenSpan(WindissectOpaque, WindissectOpaque, int, int, int, int, WindissectOpaque * *);
};
} // namespace Ptls6
