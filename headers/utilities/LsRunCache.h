#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace RichTextServices::Internal {
class LsRunCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendLsRun@LsRunCache@Internal@RichTextServices@@QEAAXPEAVLsRun@23@@Z
    void AppendLsRun(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@LsRunCache@Internal@RichTextServices@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLsRun@LsRunCache@Internal@RichTextServices@@QEBAPEAVLsRun@23@IPEBUlsfetchposition@Ptls6@@@Z
    WindissectOpaque * GetLsRun(unsigned int, WindissectOpaque const *) const;
};
} // namespace RichTextServices::Internal
