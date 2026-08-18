#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace Ptls6 {
class CLsChunkContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLsChunkContext@Ptls6@@SAJPEAUlscontext@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsChunkContext@Ptls6@@QEAAXPEAUlscontext@2@@Z
    void Destroy(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FDnodeInsideChunk@CLsChunkContext@Ptls6@@QEBAHPEBVCLsDnode@2@@Z
    int FDnodeInsideChunk(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FLocationValid@CLsChunkContext@Ptls6@@QEBAHXZ
    int FLocationValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDnodeEndBoundary@CLsChunkContext@Ptls6@@QEBAPEBVCLsDnode@2@XZ
    WindissectOpaque const * GetDnodeEndBoundary() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDnodeStartBoundary@CLsChunkContext@Ptls6@@QEBAPEBVCLsDnode@2@XZ
    WindissectOpaque const * GetDnodeStartBoundary() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstContentDnode@CLsChunkContext@Ptls6@@QEBAPEBVCLsDnodeContent@2@XZ
    WindissectOpaque const * GetFirstContentDnode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstDnode@CLsChunkContext@Ptls6@@QEBAPEBVCLsDnode@2@XZ
    WindissectOpaque const * GetFirstDnode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastContentDnode@CLsChunkContext@Ptls6@@QEBAPEBVCLsDnodeContent@2@XZ
    WindissectOpaque const * GetLastContentDnode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrEndChunk@CLsChunkContext@Ptls6@@QEBAJXZ
    long GetUrEndChunk() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrStartChunk@CLsChunkContext@Ptls6@@QEBAJXZ
    long GetUrStartChunk() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocateChunk@CLsChunkContext@Ptls6@@QEAAXXZ
    void LocateChunk();
};
} // namespace Ptls6
