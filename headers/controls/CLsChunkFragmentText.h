#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Ptls6 {
class CLsChunkFragmentText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsChunkFragmentText@Ptls6@@SAJPEAUlscontext@2@PEBVCLsChunkText@2@VLSCHCNT@2@2JJPEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque, WindissectOpaque, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CLsChunkFragmentText@Ptls6@@QEAAXPEBVCLsChunkText@2@HH@Z
    void Resolve(WindissectOpaque const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveCut@CLsChunkFragmentText@Ptls6@@QEAAXPEBVCLsChunkText@2@HH@Z
    void ResolveCut(WindissectOpaque const *, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsChunkFragmentText@Ptls6@@EEAAXPEAUlscontext@2@@Z
    virtual void DestroyCore(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FNonTextFragmentCore@CLsChunkFragmentText@Ptls6@@EEBAHXZ
    virtual int FNonTextFragmentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FPenTabSplatFragmentCore@CLsChunkFragmentText@Ptls6@@EEBAHXZ
    virtual int FPenTabSplatFragmentCore() const;
    // Category: Method | Source: PE Export
    // Symbol: ?FTextFragmentCore@CLsChunkFragmentText@Ptls6@@EEBAHXZ
    virtual int FTextFragmentCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimChunkFragmentCore@CLsChunkFragmentText@Ptls6@@EEBAJXZ
    virtual long GetCpLimChunkFragmentCore() const;
};
} // namespace Ptls6
