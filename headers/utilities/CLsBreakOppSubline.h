#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace Ptls6 {
class CLsBreakOppSubline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAfterChunk@CLsBreakOppSubline@Ptls6@@SAJPEBVCLsSubline@2@PEBVCLsDnodeContent@2@PEBUlsbreakopp@2@AEBUlsbrkres@2@PEAPEAV12@@Z
    static long CreateAfterChunk(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsideNonText@CLsBreakOppSubline@Ptls6@@SAJPEBVCLsSubline@2@PEBVCLsDnodeNonTextObject@2@PEBUlsbreakopp@2@AEBUlsbrkres@2@PEAPEAV12@@Z
    static long CreateInsideNonText(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsideText@CLsBreakOppSubline@Ptls6@@SAJPEBVCLsSubline@2@PEBVCLsDnodeText@2@JVLSCHCNT@2@PEBUlsbreakopp@2@AEBUlsbrkres@2@PEAPEAV12@@Z
    static long CreateInsideText(WindissectOpaque const *, WindissectOpaque const *, long, WindissectOpaque, WindissectOpaque const *, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsBreakOppSubline@Ptls6@@UEAAXPEBVILsSubline@2@@Z
    virtual void Destroy(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBreakType@CLsBreakOppSubline@Ptls6@@UEBAAEBUlsbrkres@2@XZ
    virtual WindissectOpaque const & GetBreakType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimToContinue@CLsBreakOppSubline@Ptls6@@QEBAJXZ
    long GetCpLimToContinue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimToStay@CLsBreakOppSubline@Ptls6@@QEBAJXZ
    long GetCpLimToStay() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetails@CLsBreakOppSubline@Ptls6@@UEBAXAEAUlsdnodedetails@2@AEAH1PEAPEBVILsBreakOppSubline@2@@Z
    virtual void GetDetails(WindissectOpaque &, int &, int &, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAfter@CLsBreakOppSubline@Ptls6@@UEBAHPEBVILsBreakOppSubline@2@@Z
    virtual int IsAfter(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CLsBreakOppSubline@Ptls6@@UEBAHPEBVILsBreakOppSubline@2@@Z
    virtual int IsEqual(WindissectOpaque const *) const;
};
} // namespace Ptls6
