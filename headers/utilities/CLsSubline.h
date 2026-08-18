#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
namespace Ptls6 {
class CLsSubline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendObjectRun@CLsSubline@Ptls6@@UEAAJAEBUlsfrunobject@2@JPEAPEAVCLsDnode@2@@Z
    virtual long AppendObjectRun(WindissectOpaque const &, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPen@CLsSubline@Ptls6@@UEAAJJJJJPEAPEAVCLsDnode@2@@Z
    virtual long AppendPen(long, long, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTextRun@CLsSubline@Ptls6@@UEAAJAEBUlsfruntext@2@PEAPEAVCLsDnode@2@@Z
    virtual long AppendTextRun(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compress@CLsSubline@Ptls6@@UEAAJJ@Z
    virtual long Compress(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsSubline@Ptls6@@SAJPEBVCLsDnodeNonTextObject@2@VLSORDINALINT@2@Ulsspan_struct@2@JJKHHHHHHHPEAUlsstyle@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque const *, WindissectOpaque, WindissectOpaque, long, long, unsigned long, int, int, int, int, int, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStartOpp@CLsSubline@Ptls6@@UEBAJPEBVILsBreakOppSubline@2@PEAPEAVILsStartOppSubline@2@@Z
    virtual long CreateStartOpp(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSublineFragment@CLsSubline@Ptls6@@UEBAJHHPEBVILsStartOppSubline@2@HPEBVILsBreakOppSubline@2@AEAHAEAUOBJDIM@2@PEAPEAVILsSublineFragment@2@@Z
    virtual long CreateSublineFragment(int, int, WindissectOpaque const *, int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsSubline@Ptls6@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CLsSubline@Ptls6@@UEBAJAEAJPEAPEAUlsdnodedetails@2@@Z
    virtual long Enum(long &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@CLsSubline@Ptls6@@UEAAJJ@Z
    virtual long Expand(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FContPosInside@CLsSubline@Ptls6@@UEBAHVLSCONTPOSINT@2@@Z
    virtual int FContPosInside(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FEmpty@CLsSubline@Ptls6@@UEBAHXZ
    virtual int FEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FPenPositionUsed@CLsSubline@Ptls6@@UEBAHXZ
    virtual int FPenPositionUsed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchAppend@CLsSubline@Ptls6@@UEAAJJPEBULSESC@2@JAEAHAEAGPEAPEAVCLsDnode@2@3@Z
    virtual long FetchAppend(long, WindissectOpaque const *, long, int &, unsigned short &, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApproxForceBreakOppInside@CLsSubline@Ptls6@@UEBAJJAEAHPEAPEAVILsBreakOppSubline@2@@Z
    virtual long FindApproxForceBreakOppInside(long, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBreakOppAfterTruncationPoint@CLsSubline@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@AEAHPEAPEAVILsBreakOppSubline@2@@Z
    virtual long FindBreakOppAfterTruncationPoint(WindissectOpaque const *, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBreakOppBeforeTruncationPoint@CLsSubline@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@AEAH1PEAPEAVILsBreakOppSubline@2@@Z
    virtual long FindBreakOppBeforeTruncationPoint(WindissectOpaque const *, int &, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindForceBreakOppBeforeTruncationPoint@CLsSubline@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@HAEAH1PEAPEAVILsBreakOppSubline@2@@Z
    virtual long FindForceBreakOppBeforeTruncationPoint(WindissectOpaque const *, int, int &, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextBreakOppInside@CLsSubline@Ptls6@@UEBAJHPEBVILsBreakOppSubline@2@AEAHPEAPEAV32@@Z
    virtual long FindNextBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextForceBreakOppInside@CLsSubline@Ptls6@@UEBAJHPEBVILsBreakOppSubline@2@AEAHPEAPEAV32@@Z
    virtual long FindNextForceBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrevBreakOppInside@CLsSubline@Ptls6@@UEBAJHPEBVILsBreakOppSubline@2@AEAHPEAPEAV32@@Z
    virtual long FindPrevBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrevForceBreakOppInside@CLsSubline@Ptls6@@UEBAJHPEBVILsBreakOppSubline@2@AEAHPEAPEAV32@@Z
    virtual long FindPrevForceBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTruncationPoint@CLsSubline@Ptls6@@UEBAJJAEAHPEAVCLsTruncationPointSubline@2@@Z
    virtual long FindTruncationPoint(long, int &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContPosEnd@CLsSubline@Ptls6@@UEBA?AVLSCONTPOSEXP@2@XZ
    virtual WindissectOpaque GetContPosEnd() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContPosFirst@CLsSubline@Ptls6@@UEBA?AVLSCONTPOSEXP@2@XZ
    virtual WindissectOpaque GetContPosFirst() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContPosLim@CLsSubline@Ptls6@@UEBA?AVLSCONTPOSEXP@2@XZ
    virtual WindissectOpaque GetContPosLim() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjdim@CLsSubline@Ptls6@@UEBAJAEAUOBJDIM@2@@Z
    virtual long GetObjdim(WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffects@CLsSubline@Ptls6@@UEBAIXZ
    virtual unsigned int GetSpecialEffects() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchPres@CLsSubline@Ptls6@@UEAAJXZ
    virtual long MatchPres();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakAfter@CLsSubline@Ptls6@@UEBAJAEAW4BRKCOND@2@@Z
    virtual long ProposeBreakAfter(int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakBefore@CLsSubline@Ptls6@@UEBAJAEAW4BRKCOND@2@@Z
    virtual long ProposeBreakBefore(int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObjDimRange@CLsSubline@Ptls6@@UEBAJPEBVCLsDnode@2@0AEAUOBJDIM@2@@Z
    virtual long QueryObjDimRange(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetRM@CLsSubline@Ptls6@@UEAAXJ@Z
    virtual void ResetRM(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBreak@CLsSubline@Ptls6@@UEAAJPEBVILsSublineFragment@2@@Z
    virtual long SetBreak(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpacing@CLsSubline@Ptls6@@UEAAJJPEAJ@Z
    virtual long UpdateSpacing(long, long *);
};
} // namespace Ptls6
