#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Ptls6 {
class CLsDnodeInlineBorder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsDnodeInlineBorder@Ptls6@@SAJPEAVCLsSubline@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsDnodeInlineBorder@Ptls6@@EEAAJPEAUlscontext@2@PEAUlsparaclient@2@@Z
    virtual long DestroyCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FHasBorderWordCore@CLsDnodeInlineBorder@Ptls6@@EEBAHXZ
    virtual int FHasBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsBorderWordCore@CLsDnodeInlineBorder@Ptls6@@EEBAHXZ
    virtual int FIsBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCloseBorderCore@CLsDnodeInlineBorder@Ptls6@@EEBAHXZ
    virtual int FIsCloseBorderCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FIsInlineBorderCore@CLsDnodeInlineBorder@Ptls6@@EEBAHXZ
    virtual int FIsInlineBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsNotInContentCore@CLsDnodeInlineBorder@Ptls6@@EEBAHXZ
    virtual int FIsNotInContentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsOpenBorderCore@CLsDnodeInlineBorder@Ptls6@@EEBAHXZ
    virtual int FIsOpenBorderCore() const;
};
} // namespace Ptls6
