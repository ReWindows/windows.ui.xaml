#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Ptls6 {
class CLsDnodeWordBorder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsDnodeWordBorder@Ptls6@@SAJPEAVCLsSubline@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsDnodeWordBorder@Ptls6@@EEAAJPEAUlscontext@2@PEAUlsparaclient@2@@Z
    virtual long DestroyCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?FHasBorderWordCore@CLsDnodeWordBorder@Ptls6@@EEBAHXZ
    virtual int FHasBorderWordCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FIsBorderWordCore@CLsDnodeWordBorder@Ptls6@@EEBAHXZ
    virtual int FIsBorderWordCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsCloseBorderCore@CLsDnodeWordBorder@Ptls6@@EEBAHXZ
    virtual int FIsCloseBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsInlineBorderCore@CLsDnodeWordBorder@Ptls6@@EEBAHXZ
    virtual int FIsInlineBorderCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsNotInContentCore@CLsDnodeWordBorder@Ptls6@@EEBAHXZ
    virtual int FIsNotInContentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsOpenBorderCore@CLsDnodeWordBorder@Ptls6@@EEBAHXZ
    virtual int FIsOpenBorderCore() const;
};
} // namespace Ptls6
