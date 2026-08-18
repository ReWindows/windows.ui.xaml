#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace Ptls6 {
class CLsDnodeNonTextObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsDnodeNonTextObject@Ptls6@@SAJPEAVCLsSubline@2@PEAUlsrun@2@VLSCHCNT@2@PEBUlschp@2@JUlsfetchposition@2@JPEAUlsspanqualifier@2@PEAVCLsSpanNode@2@VLSORDINALINT@2@PEBUlsbreakrecsubl@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque const *, long, WindissectOpaque, long, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSublineForSpans@CLsDnodeNonTextObject@Ptls6@@QEBAPEAVCLsSubline@2@XZ
    WindissectOpaque * GetSublineForSpans() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObjdimFmt@CLsDnodeNonTextObject@Ptls6@@QEAAXAEBUOBJDIM@2@@Z
    void SetObjdimFmt(WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsDnodeNonTextObject@Ptls6@@EEAAJPEAUlscontext@2@PEAUlsparaclient@2@@Z
    virtual long DestroyCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FDupRigidCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FDupRigidCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsBorderWordCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCharAfterAutonumberCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsCharAfterAutonumberCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCloseBorderCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsCloseBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsInlineBorderCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsInlineBorderCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FIsNonTextObjectCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsNonTextObjectCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsOpenBorderCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsOpenBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsPenCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsPenCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsSplatCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsSplatCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsTabCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsTabCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsTextCore@CLsDnodeNonTextObject@Ptls6@@EEBAHXZ
    virtual int FIsTextCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPositionLimCore@CLsDnodeNonTextObject@Ptls6@@EEBA?AVLSCONTPOSINT@2@XZ
    virtual WindissectOpaque GetContentPositionLimCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimAttachedCore@CLsDnodeNonTextObject@Ptls6@@EEBAJXZ
    virtual long GetCpLimAttachedCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDvpCore@CLsDnodeNonTextObject@Ptls6@@EEBAJXZ
    virtual long GetDvpCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDvrCore@CLsDnodeNonTextObject@Ptls6@@EEBAJXZ
    virtual long GetDvrCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdObjCore@CLsDnodeNonTextObject@Ptls6@@EEBAGXZ
    virtual unsigned short GetIdObjCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDurFmtCore@CLsDnodeNonTextObject@Ptls6@@EEAAXJ@Z
    virtual void SetDurFmtCore(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRigidDupCore@CLsDnodeNonTextObject@Ptls6@@EEAAXJH@Z
    virtual void SetRigidDupCore(long, int);
};
} // namespace Ptls6
