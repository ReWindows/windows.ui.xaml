#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Ptls6 {
class LsDisplayPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceByTextChunk@LsDisplayPoint@Ptls6@@QEAAXPEAVCLsChunkText@2@JJ@Z
    void AdvanceByTextChunk(WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToFirst@LsDisplayPoint@Ptls6@@QEAAXH@Z
    void AdvanceToFirst(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToFirstSubmitting@LsDisplayPoint@Ptls6@@QEAAXXZ
    void AdvanceToFirstSubmitting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToNext@LsDisplayPoint@Ptls6@@QEAAXXZ
    void AdvanceToNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToNextSubmitting@LsDisplayPoint@Ptls6@@QEAAXXZ
    void AdvanceToNextSubmitting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDup@LsDisplayPoint@Ptls6@@QEAAJXZ
    long GetDup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToNextVisual@LsDisplayPoint@Ptls6@@AEAAXXZ
    void AdvanceToNextVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastCharWidth@LsDisplayPoint@Ptls6@@AEAAJPEBVCLsDnodeText@2@@Z
    long GetLastCharWidth(WindissectOpaque const *);
};
} // namespace Ptls6
