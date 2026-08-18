#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace Ptls6 {
class CLsAnmObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPresentation@CLsAnmObject@Ptls6@@UEAAJJH@Z
    virtual long CalcPresentation(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsAnmObject@Ptls6@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@CLsAnmObject@Ptls6@@UEAAJPEBUdispin@2@@Z
    virtual long Display(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CLsAnmObject@Ptls6@@UEAAJPEAUlsrun@2@PEBUlschp@2@JJKHHHPEBUtagLSPOINT@2@PEBUheights@2@J@Z
    virtual long Enum(WindissectOpaque *, WindissectOpaque const *, long, long, unsigned long, int, int, int, WindissectOpaque const *, WindissectOpaque const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSubmittedSubline@CLsAnmObject@Ptls6@@UEAAJPEAVILsSubline@2@PEAPEAV32@@Z
    virtual long GetNextSubmittedSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevSubmittedSubline@CLsAnmObject@Ptls6@@UEAAJPEAVILsSubline@2@PEAPEAV32@@Z
    virtual long GetPrevSubmittedSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffectsFromDobj@CLsAnmObject@Ptls6@@UEAAJPEAI@Z
    virtual long GetSpecialEffectsFromDobj(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubmissionInfoFromDobj@CLsAnmObject@Ptls6@@UEAAJAEAH0000@Z
    virtual long GetSubmissionInfoFromDobj(int &, int &, int &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakAfter@CLsAnmObject@Ptls6@@UEAAJPEAW4BRKCOND@2@@Z
    virtual long ProposeBreakAfter(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakBefore@CLsAnmObject@Ptls6@@UEAAJPEAW4BRKCOND@2@@Z
    virtual long ProposeBreakBefore(int *);
};
} // namespace Ptls6
