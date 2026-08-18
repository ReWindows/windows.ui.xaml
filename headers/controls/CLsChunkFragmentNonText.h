#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace Ptls6 {
class CLsChunkFragmentNonText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsChunkFragmentNonText@Ptls6@@SAJPEAUlscontext@2@PEBVCLsChunkNonTextObject@2@PEAUdobjfragm@2@AEAUOBJDIM@2@PEBVCLsPosInLineStart@2@PEBVCLsPosInLineLim@2@HPEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque &, WindissectOpaque const *, WindissectOpaque const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEqualToChunk@CLsChunkFragmentNonText@Ptls6@@SAJPEAUlscontext@2@PEBVCLsChunkNonTextObject@2@PEAPEAV12@@Z
    static long CreateEqualToChunk(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CLsChunkFragmentNonText@Ptls6@@QEAAXPEBVCLsChunkNonTextObject@2@HH@Z
    void Resolve(WindissectOpaque const *, int, int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLsChunkFragmentNonText@Ptls6@@AEAA@PEBVCLsChunkNonTextObject@1@PEAUdobjfragm@1@AEAUOBJDIM@1@PEBVCLsPosInLineStart@1@PEBVCLsPosInLineLim@1@H@Z
    CLsChunkFragmentNonText(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque &, WindissectOpaque const *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCore@CLsChunkFragmentNonText@Ptls6@@EEAAXPEAUlscontext@2@@Z
    virtual void DestroyCore(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?FNonTextFragmentCore@CLsChunkFragmentNonText@Ptls6@@EEBAHXZ
    virtual int FNonTextFragmentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FPenTabSplatFragmentCore@CLsChunkFragmentNonText@Ptls6@@EEBAHXZ
    virtual int FPenTabSplatFragmentCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FTextFragmentCore@CLsChunkFragmentNonText@Ptls6@@EEBAHXZ
    virtual int FTextFragmentCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLimChunkFragmentCore@CLsChunkFragmentNonText@Ptls6@@EEBAJXZ
    virtual long GetCpLimChunkFragmentCore() const;
};
} // namespace Ptls6
