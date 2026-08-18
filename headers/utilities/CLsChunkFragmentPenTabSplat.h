#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Ptls6 {
class CLsChunkFragmentPenTabSplat {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEqualToChunk@CLsChunkFragmentPenTabSplat@Ptls6@@SAJPEAUlscontext@2@PEBVCLsChunkOneElement@2@PEAPEAV12@@Z
    static long CreateEqualToChunk(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsChunkFragmentPenTabSplat@Ptls6@@EEAAXPEAUlscontext@2@@Z
    virtual void DestroyCore(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FNonTextFragmentCore@CLsChunkFragmentPenTabSplat@Ptls6@@EEBAHXZ
    virtual int FNonTextFragmentCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FPenTabSplatFragmentCore@CLsChunkFragmentPenTabSplat@Ptls6@@EEBAHXZ
    virtual int FPenTabSplatFragmentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FTextFragmentCore@CLsChunkFragmentPenTabSplat@Ptls6@@EEBAHXZ
    virtual int FTextFragmentCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimChunkFragmentCore@CLsChunkFragmentPenTabSplat@Ptls6@@EEBAJXZ
    virtual long GetCpLimChunkFragmentCore() const;
};
} // namespace Ptls6
