#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace Ptls6 {
class CLsReverseObjectLineContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsReverseObjectLineContext@Ptls6@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@CLsReverseObjectLineContext@Ptls6@@UEAAJAEBUfmtin@2@PEAVILsObjectFormattingSession@2@AEAH@Z
    virtual long Format(WindissectOpaque const &, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatResume@CLsReverseObjectLineContext@Ptls6@@UEAAJPEBUlsbreakrecobj@2@AEBUfmtin@2@PEAVILsObjectFormattingSession@2@AEAH@Z
    virtual long FormatResume(WindissectOpaque const *, WindissectOpaque const &, WindissectOpaque *, int &);
};
} // namespace Ptls6
