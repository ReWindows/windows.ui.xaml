#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace Ptls6 {
class CLsDnodeEllipsis {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsDnodeEllipsis@Ptls6@@SAJPEAVCLsSubline@2@JJPEAUlsrun@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, long, long, WindissectOpaque *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsDnodeEllipsis@Ptls6@@EEAAJPEAUlscontext@2@PEAUlsparaclient@2@@Z
    virtual long DestroyCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FHasBorderWordCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FHasBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsBorderWordCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FIsBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCloseBorderCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FIsCloseBorderCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FIsEllipsisCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FIsEllipsisCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsInlineBorderCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FIsInlineBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsNotInContentCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FIsNotInContentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsOpenBorderCore@CLsDnodeEllipsis@Ptls6@@EEBAHXZ
    virtual int FIsOpenBorderCore() const;
};
} // namespace Ptls6
