#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace Ptls6 {
class CLsStartOppSubline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsStartOppSubline@Ptls6@@SAJPEBVCLsSubline@2@PEBVCLsBreakOppSubline@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsStartOppSubline@Ptls6@@UEAAXPEBVILsSubline@2@@Z
    virtual void Destroy(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetails@CLsStartOppSubline@Ptls6@@UEBAXAEAUlsdnodedetails@2@AEAH1PEAPEBVILsStartOppSubline@2@@Z
    virtual void GetDetails(WindissectOpaque &, int &, int &, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBased@CLsStartOppSubline@Ptls6@@UEBAHPEBVILsBreakOppSubline@2@@Z
    virtual int IsBased(WindissectOpaque const *) const;
};
} // namespace Ptls6
