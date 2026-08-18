#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace Ptls6 {
class CLsDnodePen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsDnodePen@Ptls6@@SAJPEAVCLsSubline@2@VLSORDINALINT@2@VLSCHCNT@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsDnodePen@Ptls6@@EEAAJPEAUlscontext@2@PEAUlsparaclient@2@@Z
    virtual long DestroyCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FDupRigidCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FDupRigidCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FHasBorderWordCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FHasBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsBorderWordCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCharAfterAutonumberCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsCharAfterAutonumberCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCloseBorderCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsCloseBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsInlineBorderCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsInlineBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsNonTextObjectCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsNonTextObjectCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsObjectCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsObjectCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsOpenBorderCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsOpenBorderCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FIsPenCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsPenCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsSplatCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsSplatCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsTabCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsTabCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsTextCore@CLsDnodePen@Ptls6@@EEBAHXZ
    virtual int FIsTextCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPositionLimCore@CLsDnodePen@Ptls6@@EEBA?AVLSCONTPOSINT@2@XZ
    virtual WindissectOpaque GetContentPositionLimCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimAttachedCore@CLsDnodePen@Ptls6@@EEBAJXZ
    virtual long GetCpLimAttachedCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDvpCore@CLsDnodePen@Ptls6@@EEBAJXZ
    virtual long GetDvpCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDvrCore@CLsDnodePen@Ptls6@@EEBAJXZ
    virtual long GetDvrCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrdinalMaxAttachedCore@CLsDnodePen@Ptls6@@EEBA?AVLSORDINALINT@2@XZ
    virtual WindissectOpaque GetOrdinalMaxAttachedCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRigidDupCore@CLsDnodePen@Ptls6@@EEAAXJH@Z
    virtual void SetRigidDupCore(long, int);
};
} // namespace Ptls6
