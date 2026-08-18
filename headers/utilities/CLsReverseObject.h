#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 40 member(s).
namespace Ptls6 {
class CLsReverseObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPresentation@CLsReverseObject@Ptls6@@UEAAJJH@Z
    virtual long CalcPresentation(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBreakOppAfter@CLsReverseObject@Ptls6@@UEBAJAEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long CreateBreakOppAfter(WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBreakRecord@CLsReverseObject@Ptls6@@UEBAJPEBUdobjfragm@2@PEAPEAUlsbreakrecobj@2@@Z
    virtual long CreateBreakRecord(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDobjFragment@CLsReverseObject@Ptls6@@UEBAJHHHHHHPEBUlsstartopp@2@HPEBUlsbreakopp@2@KAEAH2PEAPEAUdobjfragm@2@AEAUOBJDIM@2@2@Z
    virtual long CreateDobjFragment(int, int, int, int, int, int, WindissectOpaque const *, int, WindissectOpaque const *, unsigned long, int &, int &, WindissectOpaque * *, WindissectOpaque &, int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStartOppBefore@CLsReverseObject@Ptls6@@UEBAJPEAPEAUlsstartopp@2@@Z
    virtual long CreateStartOppBefore(WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStartOppInside@CLsReverseObject@Ptls6@@UEBAJPEBUlsbreakopp@2@PEAPEAUlsstartopp@2@@Z
    virtual long CreateStartOppInside(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsReverseObject@Ptls6@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBreakOpp@CLsReverseObject@Ptls6@@UEAAXPEAUlsbreakopp@2@@Z
    virtual void DestroyBreakOpp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDobjFragment@CLsReverseObject@Ptls6@@UEAAXPEAUdobjfragm@2@@Z
    virtual void DestroyDobjFragment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyStartOpp@CLsReverseObject@Ptls6@@UEAAXPEAUlsstartopp@2@@Z
    virtual void DestroyStartOpp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@CLsReverseObject@Ptls6@@UEAAJPEBUdispin@2@@Z
    virtual long Display(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CLsReverseObject@Ptls6@@UEAAJPEAUlsrun@2@PEBUlschp@2@JJKHHHPEBUtagLSPOINT@2@PEBUheights@2@J@Z
    virtual long Enum(WindissectOpaque *, WindissectOpaque const *, long, long, unsigned long, int, int, int, WindissectOpaque const *, WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApproxForceBreakOppInside@CLsReverseObject@Ptls6@@UEBAJJAEAHAEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindApproxForceBreakOppInside(long, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBreakOppAfterTruncationPoint@CLsReverseObject@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@AEAHAEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindBreakOppAfterTruncationPoint(WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBreakOppBeforeTruncationPoint@CLsReverseObject@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@AEAH1AEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindBreakOppBeforeTruncationPoint(WindissectOpaque const *, int &, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindForceBreakOppBeforeTruncationPoint@CLsReverseObject@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@HAEAH1AEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindForceBreakOppBeforeTruncationPoint(WindissectOpaque const *, int, int &, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextBreakOppInside@CLsReverseObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindNextBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextForceBreakOppInside@CLsReverseObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindNextForceBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrevBreakOppInside@CLsReverseObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindPrevBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrevForceBreakOppInside@CLsReverseObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindPrevForceBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBreakOppSublineChild@CLsReverseObject@Ptls6@@UEBAPEBVILsBreakOppSubline@2@PEBUlsbreakopp@2@@Z
    virtual WindissectOpaque const * GetBreakOppSublineChild(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSubFromDobjFragment@CLsReverseObject@Ptls6@@UEAAJPEAUdobjfragm@2@PEAUlssub@2@1@Z
    virtual long GetNextSubFromDobjFragment(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSubmittedSubline@CLsReverseObject@Ptls6@@UEAAJPEAVILsSubline@2@PEAPEAV32@@Z
    virtual long GetNextSubmittedSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevSubFromDobjFragment@CLsReverseObject@Ptls6@@UEAAJPEAUdobjfragm@2@PEAUlssub@2@1@Z
    virtual long GetPrevSubFromDobjFragment(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevSubmittedSubline@CLsReverseObject@Ptls6@@UEAAJPEAVILsSubline@2@PEAPEAV32@@Z
    virtual long GetPrevSubmittedSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffectsFromDobj@CLsReverseObject@Ptls6@@UEAAJPEAI@Z
    virtual long GetSpecialEffectsFromDobj(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffectsFromDobjFragment@CLsReverseObject@Ptls6@@UEBAJPEBUdobjfragm@2@AEAI@Z
    virtual long GetSpecialEffectsFromDobjFragment(WindissectOpaque const *, unsigned int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartOppSublineChild@CLsReverseObject@Ptls6@@UEBAPEBVILsStartOppSubline@2@PEBUlsstartopp@2@@Z
    virtual WindissectOpaque const * GetStartOppSublineChild(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSublineFragmentChildEnd@CLsReverseObject@Ptls6@@UEBAPEBVILsSublineFragment@2@PEBUdobjfragm@2@@Z
    virtual WindissectOpaque const * GetSublineFragmentChildEnd(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSublineFragmentChildStart@CLsReverseObject@Ptls6@@UEBAPEBVILsSublineFragment@2@PEBUdobjfragm@2@@Z
    virtual WindissectOpaque const * GetSublineFragmentChildStart(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubmissionInfoFromDobj@CLsReverseObject@Ptls6@@UEAAJAEAH0000@Z
    virtual long GetSubmissionInfoFromDobj(int &, int &, int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubmissionInfoFromDobjFragment@CLsReverseObject@Ptls6@@UEAAJPEAUdobjfragm@2@AEAH1111@Z
    virtual long GetSubmissionInfoFromDobjFragment(WindissectOpaque *, int &, int &, int &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakAfter@CLsReverseObject@Ptls6@@UEAAJPEAW4BRKCOND@2@@Z
    virtual long ProposeBreakAfter(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakBefore@CLsReverseObject@Ptls6@@UEAAJPEAW4BRKCOND@2@@Z
    virtual long ProposeBreakBefore(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCpPpoint@CLsReverseObject@Ptls6@@UEAAJJPEBUlsqin@2@PEAUlsqout@2@@Z
    virtual long QueryCpPpoint(long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDown@CLsReverseObject@Ptls6@@UEAAJJHJPEBUlsqin@2@PEAUlsqoutvertical@2@@Z
    virtual long QueryDown(long, int, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPointPcp@CLsReverseObject@Ptls6@@UEAAJPEBUtagLSPOINTUV@2@PEBUlsqin@2@PEAUlsqout@2@@Z
    virtual long QueryPointPcp(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUp@CLsReverseObject@Ptls6@@UEAAJJHJPEBUlsqin@2@PEAUlsqoutvertical@2@@Z
    virtual long QueryUp(long, int, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBreak@CLsReverseObject@Ptls6@@UEAAJPEAUdobjfragm@2@@Z
    virtual long SetBreak(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Truncate@CLsReverseObject@Ptls6@@UEAAJPEBUlsfgi@2@AEAHPEAVCLsTruncationPointSubline@2@@Z
    virtual long Truncate(WindissectOpaque const *, int &, WindissectOpaque *);
};
} // namespace Ptls6
