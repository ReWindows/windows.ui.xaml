#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace Ptls6 {
class CLsObjectFormattingSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContPosFromDcp@CLsObjectFormattingSession@Ptls6@@UEBA?AVLSCONTPOSINT@2@J@Z
    virtual WindissectOpaque ContPosFromDcp(long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsObjectFormattingSession@Ptls6@@SAJHHHPEBVCLsDnodeNonTextObject@2@PEAPEAV12@@Z
    static long Create(int, int, int, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAppendableSubline@CLsObjectFormattingSession@Ptls6@@UEAAJUlsspan_struct@2@JKHHPEAUlsstyle@2@PEAPEAVILsSublineAppendable@2@@Z
    virtual long CreateAppendableSubline(WindissectOpaque, long, unsigned long, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePlaceHolderSublineByTextRun@CLsObjectFormattingSession@Ptls6@@UEAAJUlsspan_struct@2@VLSCONTPOSINT@2@AEBUlsfruntext@2@KHPEAUlsstyle@2@PEAPEAVILsSubline@2@@Z
    virtual long CreatePlaceHolderSublineByTextRun(WindissectOpaque, WindissectOpaque, WindissectOpaque const &, unsigned long, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSublineByObjectRun@CLsObjectFormattingSession@Ptls6@@UEAAJUlsspan_struct@2@AEBUlsfrunobject@2@JKHPEAUlsstyle@2@PEAPEAVILsSubline@2@@Z
    virtual long CreateSublineByObjectRun(WindissectOpaque, WindissectOpaque const &, long, unsigned long, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSublineByTextRun@CLsObjectFormattingSession@Ptls6@@UEAAJUlsspan_struct@2@AEBUlsfruntext@2@KHPEAUlsstyle@2@PEAPEAVILsSubline@2@@Z
    virtual long CreateSublineByTextRun(WindissectOpaque, WindissectOpaque const &, unsigned long, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSublineEscBased@CLsObjectFormattingSession@Ptls6@@UEAAJUlsspan_struct@2@PEBULSESC@2@JJKHHPEAUlsstyle@2@AEAHAEAGPEAPEAVILsSubline@2@@Z
    virtual long CreateSublineEscBased(WindissectOpaque, WindissectOpaque const *, long, long, unsigned long, int, int, WindissectOpaque *, int &, unsigned short &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSublineSpanBased@CLsObjectFormattingSession@Ptls6@@UEAAJUlsspan_struct@2@JKHHHPEAUlsstyle@2@AEAHPEAPEAVILsSubline@2@@Z
    virtual long CreateSublineSpanBased(WindissectOpaque, long, unsigned long, int, int, int, WindissectOpaque *, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsObjectFormattingSession@Ptls6@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finish@CLsObjectFormattingSession@Ptls6@@QEAAJXZ
    long Finish();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentContPos@CLsObjectFormattingSession@Ptls6@@UEBA?AVLSCONTPOSEXP@2@XZ
    virtual WindissectOpaque GetCurrentContPos() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentName@CLsObjectFormattingSession@Ptls6@@UEBA?AVLSNAMEEXP@2@XZ
    virtual WindissectOpaque GetCurrentName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentOrdinalNext@CLsObjectFormattingSession@Ptls6@@QEBA?AVLSORDINALINT@2@XZ
    WindissectOpaque GetCurrentOrdinalNext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSublineBoundaries@CLsObjectFormattingSession@Ptls6@@QEAAXPEBVCLsSubline@2@AEAH1@Z
    void GetSublineBoundaries(WindissectOpaque const *, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSubline@CLsObjectFormattingSession@Ptls6@@QEAAXPEAVCLsSubline@2@@Z
    void RemoveSubline(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionAfterSubline@CLsObjectFormattingSession@Ptls6@@UEAAXPEAVILsSubline@2@@Z
    virtual void SetPositionAfterSubline(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionBeforeSubline@CLsObjectFormattingSession@Ptls6@@UEAAXPEAVILsSubline@2@@Z
    virtual void SetPositionBeforeSubline(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSubline@CLsObjectFormattingSession@Ptls6@@AEAAJPEAVCLsSubline@2@PEAUSLsSublineBreakRecStorage@12@HHH@Z
    long AddSubline(WindissectOpaque *, WindissectOpaque *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSublineByRun@CLsObjectFormattingSession@Ptls6@@AEAAJUlsspan_struct@2@HVLSCONTPOSEXP@2@HPEBUlsfrunobject@2@PEBUlsfruntext@2@JKHPEAUlsstyle@2@PEAPEAVILsSubline@2@@Z
    long CreateSublineByRun(WindissectOpaque, int, WindissectOpaque, int, WindissectOpaque const *, WindissectOpaque const *, long, unsigned long, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatLoop@CLsObjectFormattingSession@Ptls6@@AEAAJUlsspan_struct@2@HPEBULSESC@2@JJKHHHPEAUlsstyle@2@AEAHAEAG3PEAPEAVCLsSubline@2@@Z
    long FormatLoop(WindissectOpaque, int, WindissectOpaque const *, long, long, unsigned long, int, int, int, WindissectOpaque *, int &, unsigned short &, int &, WindissectOpaque * *);
};
} // namespace Ptls6
