#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Ptls6 {
class CLsChunkText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateArrays@CLsChunkText@Ptls6@@QEAAJPEAUlscontext@2@@Z
    long AllocateArrays(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsChunkText@Ptls6@@QEAAXPEAUlscontext@2@@Z
    void Destroy(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FDnodeElementInsideChunk@CLsChunkText@Ptls6@@QEBAHPEBVCLsDnode@2@@Z
    int FDnodeElementInsideChunk(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillChunk@CLsChunkText@Ptls6@@QEAAJPEBVCLsDnodeText@2@@Z
    long FillChunk(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChunkDup@CLsChunkText@Ptls6@@QEBAJXZ
    long GetChunkDup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDnodeEndBoundary@CLsChunkText@Ptls6@@QEBAPEBVCLsDnode@2@XZ
    WindissectOpaque const * GetDnodeEndBoundary() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChunkArraysSize@CLsChunkText@Ptls6@@QEAAJPEAUlscontext@2@J@Z
    long SetChunkArraysSize(WindissectOpaque *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocation@CLsChunkText@Ptls6@@QEAAXJJ@Z
    void SetLocation(long, long);
};
} // namespace Ptls6
