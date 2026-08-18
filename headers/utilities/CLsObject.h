#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
namespace Ptls6 {
class CLsObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPresentation@CLsObject@Ptls6@@UEAAJJH@Z
    virtual long CalcPresentation(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBreakOppAfter@CLsObject@Ptls6@@UEBAJAEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long CreateBreakOppAfter(WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBreakRecord@CLsObject@Ptls6@@UEBAJPEBUdobjfragm@2@PEAPEAUlsbreakrecobj@2@@Z
    virtual long CreateBreakRecord(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDobjFragment@CLsObject@Ptls6@@UEBAJHHHHHHPEBUlsstartopp@2@HPEBUlsbreakopp@2@KAEAH2PEAPEAUdobjfragm@2@AEAUOBJDIM@2@2@Z
    virtual long CreateDobjFragment(int, int, int, int, int, int, WindissectOpaque const *, int, WindissectOpaque const *, unsigned long, int &, int &, WindissectOpaque * *, WindissectOpaque &, int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStartOppBefore@CLsObject@Ptls6@@UEBAJPEAPEAUlsstartopp@2@@Z
    virtual long CreateStartOppBefore(WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStartOppInside@CLsObject@Ptls6@@UEBAJPEBUlsbreakopp@2@PEAPEAUlsstartopp@2@@Z
    virtual long CreateStartOppInside(WindissectOpaque const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DescribeBreakOppBefore@CLsObject@Ptls6@@UEBAJAEAUlsbrkres@2@@Z
    virtual long DescribeBreakOppBefore(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBreakOpp@CLsObject@Ptls6@@UEAAXPEAUlsbreakopp@2@@Z
    virtual void DestroyBreakOpp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDobjFragment@CLsObject@Ptls6@@UEAAXPEAUdobjfragm@2@@Z
    virtual void DestroyDobjFragment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyStartOpp@CLsObject@Ptls6@@UEAAXPEAUlsstartopp@2@@Z
    virtual void DestroyStartOpp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CLsObject@Ptls6@@UEAAJPEAUlsrun@2@PEBUlschp@2@JJKHHHPEBUtagLSPOINT@2@PEBUheights@2@J@Z
    virtual long Enum(WindissectOpaque *, WindissectOpaque const *, long, long, unsigned long, int, int, int, WindissectOpaque const *, WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApproxForceBreakOppInside@CLsObject@Ptls6@@UEBAJJAEAHAEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindApproxForceBreakOppInside(long, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBreakOppAfterTruncationPoint@CLsObject@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@AEAHAEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindBreakOppAfterTruncationPoint(WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBreakOppBeforeTruncationPoint@CLsObject@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@AEAH1AEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindBreakOppBeforeTruncationPoint(WindissectOpaque const *, int &, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindForceBreakOppBeforeTruncationPoint@CLsObject@Ptls6@@UEBAJPEBVCLsTruncationPointSubline@2@HAEAH1AEAUlsbrkres@2@PEAPEAUlsbreakopp@2@@Z
    virtual long FindForceBreakOppBeforeTruncationPoint(WindissectOpaque const *, int, int &, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextBreakOppInside@CLsObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindNextBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextForceBreakOppInside@CLsObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindNextForceBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrevBreakOppInside@CLsObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindPrevBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrevForceBreakOppInside@CLsObject@Ptls6@@UEBAJHPEBUlsbreakopp@2@AEAHAEAUlsbrkres@2@PEAPEAU32@@Z
    virtual long FindPrevForceBreakOppInside(int, WindissectOpaque const *, int &, WindissectOpaque &, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBreakOppSublineChild@CLsObject@Ptls6@@UEBAPEBVILsBreakOppSubline@2@PEBUlsbreakopp@2@@Z
    virtual WindissectOpaque const * GetBreakOppSublineChild(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModWidthFollowingChar@CLsObject@Ptls6@@UEAAJPEAUlsrun@2@0PEBUheights@2@GEPEAJ2@Z
    virtual long GetModWidthFollowingChar(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, unsigned short, unsigned char, long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModWidthPrecedingChar@CLsObject@Ptls6@@UEAAJPEAUlsrun@2@0PEBUheights@2@GEPEAJ2@Z
    virtual long GetModWidthPrecedingChar(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, unsigned short, unsigned char, long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSubFromDobjFragment@CLsObject@Ptls6@@UEAAJPEAUdobjfragm@2@PEAUlssub@2@1@Z
    virtual long GetNextSubFromDobjFragment(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSubmittedSubline@CLsObject@Ptls6@@UEAAJPEAVILsSubline@2@PEAPEAV32@@Z
    virtual long GetNextSubmittedSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevSubFromDobjFragment@CLsObject@Ptls6@@UEAAJPEAUdobjfragm@2@PEAUlssub@2@1@Z
    virtual long GetPrevSubFromDobjFragment(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevSubmittedSubline@CLsObject@Ptls6@@UEAAJPEAVILsSubline@2@PEAPEAV32@@Z
    virtual long GetPrevSubmittedSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffectsFromDobj@CLsObject@Ptls6@@UEAAJPEAI@Z
    virtual long GetSpecialEffectsFromDobj(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffectsFromDobjFragment@CLsObject@Ptls6@@UEBAJPEBUdobjfragm@2@AEAI@Z
    virtual long GetSpecialEffectsFromDobjFragment(WindissectOpaque const *, unsigned int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartOppSublineChild@CLsObject@Ptls6@@UEBAPEBVILsStartOppSubline@2@PEBUlsstartopp@2@@Z
    virtual WindissectOpaque const * GetStartOppSublineChild(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSublineFragmentChildEnd@CLsObject@Ptls6@@UEBAPEBVILsSublineFragment@2@PEBUdobjfragm@2@@Z
    virtual WindissectOpaque const * GetSublineFragmentChildEnd(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSublineFragmentChildStart@CLsObject@Ptls6@@UEBAPEBVILsSublineFragment@2@PEBUdobjfragm@2@@Z
    virtual WindissectOpaque const * GetSublineFragmentChildStart(WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubmissionInfoFromDobj@CLsObject@Ptls6@@UEAAJAEAH0000@Z
    virtual long GetSubmissionInfoFromDobj(int &, int &, int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubmissionInfoFromDobjFragment@CLsObject@Ptls6@@UEAAJPEAUdobjfragm@2@AEAH1111@Z
    virtual long GetSubmissionInfoFromDobjFragment(WindissectOpaque *, int &, int &, int &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCpPpoint@CLsObject@Ptls6@@UEAAJJPEBUlsqin@2@PEAUlsqout@2@@Z
    virtual long QueryCpPpoint(long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDown@CLsObject@Ptls6@@UEAAJJHJPEBUlsqin@2@PEAUlsqoutvertical@2@@Z
    virtual long QueryDown(long, int, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPointPcp@CLsObject@Ptls6@@UEAAJPEBUtagLSPOINTUV@2@PEBUlsqin@2@PEAUlsqout@2@@Z
    virtual long QueryPointPcp(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUp@CLsObject@Ptls6@@UEAAJJHJPEBUlsqin@2@PEAUlsqoutvertical@2@@Z
    virtual long QueryUp(long, int, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBreak@CLsObject@Ptls6@@UEAAJPEAUdobjfragm@2@@Z
    virtual long SetBreak(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Truncate@CLsObject@Ptls6@@UEAAJPEBUlsfgi@2@AEAHPEAVCLsTruncationPointSubline@2@@Z
    virtual long Truncate(WindissectOpaque const *, int &, WindissectOpaque *);
};
} // namespace Ptls6
