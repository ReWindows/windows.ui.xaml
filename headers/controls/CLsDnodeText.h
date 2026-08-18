#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
namespace Ptls6 {
class CLsDnodeText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMoveFrom@CLsDnodeText@Ptls6@@QEAAJPEBV12@VLSCHCNT@2@@Z
    long AddMoveFrom(WindissectOpaque const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMoveIn@CLsDnodeText@Ptls6@@QEAAJPEBV12@VLSCHCNT@2@@Z
    long AddMoveIn(WindissectOpaque const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToTab@CLsDnodeText@Ptls6@@QEAAJXZ
    long ConvertToTab();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsDnodeText@Ptls6@@SAJPEAVCLsSubline@2@PEAUlsrun@2@VLSCHCNT@2@PEBUlschp@2@PEAVCLsSpanNode@2@VLSORDINALINT@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsLeftTab@CLsDnodeText@Ptls6@@QEBAHXZ
    int FIsLeftTab() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FMovedFrom@CLsDnodeText@Ptls6@@QEBAHXZ
    int FMovedFrom() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FTakenIn@CLsDnodeText@Ptls6@@QEBAHXZ
    int FTakenIn() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCharMove@CLsDnodeText@Ptls6@@QEAAXH@Z
    void FlushCharMove(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharCountMovedFrom@CLsDnodeText@Ptls6@@QEBA?AVLSCHCNT@2@XZ
    WindissectOpaque GetCharCountMovedFrom() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharCountTakenIn@CLsDnodeText@Ptls6@@QEBA?AVLSCHCNT@2@XZ
    WindissectOpaque GetCharCountTakenIn() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDurFmt@CLsDnodeText@Ptls6@@QEAAXJ@Z
    void SetDurFmt(long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsDnodeText@Ptls6@@EEAAJPEAUlscontext@2@PEAUlsparaclient@2@@Z
    virtual long DestroyCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FDupRigidCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FDupRigidCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsBorderWordCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCharAfterAutonumberCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsCharAfterAutonumberCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCloseBorderCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsCloseBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsInlineBorderCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsInlineBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsNonTextObjectCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsNonTextObjectCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsOpenBorderCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsOpenBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsPenCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsPenCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsSplatCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsSplatCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsTabCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsTabCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FIsTextCore@CLsDnodeText@Ptls6@@EEBAHXZ
    virtual int FIsTextCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPositionLimCore@CLsDnodeText@Ptls6@@EEBA?AVLSCONTPOSINT@2@XZ
    virtual WindissectOpaque GetContentPositionLimCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimAttachedCore@CLsDnodeText@Ptls6@@EEBAJXZ
    virtual long GetCpLimAttachedCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDvpCore@CLsDnodeText@Ptls6@@EEBAJXZ
    virtual long GetDvpCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDvrCore@CLsDnodeText@Ptls6@@EEBAJXZ
    virtual long GetDvrCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdObjCore@CLsDnodeText@Ptls6@@EEBAGXZ
    virtual unsigned short GetIdObjCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDurFmtCore@CLsDnodeText@Ptls6@@EEAAXJ@Z
    virtual void SetDurFmtCore(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRigidDupCore@CLsDnodeText@Ptls6@@EEAAXJH@Z
    virtual void SetRigidDupCore(long, int);
};
} // namespace Ptls6
