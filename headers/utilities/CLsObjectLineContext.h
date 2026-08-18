#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace Ptls6 {
class CLsObjectLineContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsObjectLineContext@Ptls6@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@CLsObjectLineContext@Ptls6@@UEAAJAEBUfmtin@2@PEAVILsObjectFormattingSession@2@AEAH@Z
    virtual long Format(WindissectOpaque const &, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatResume@CLsObjectLineContext@Ptls6@@UEAAJPEBUlsbreakrecobj@2@AEBUfmtin@2@PEAVILsObjectFormattingSession@2@AEAH@Z
    virtual long FormatResume(WindissectOpaque const *, WindissectOpaque const &, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatSimple@CLsObjectLineContext@Ptls6@@UEAAJAEBUfmtin@2@@Z
    virtual long FormatSimple(WindissectOpaque const &);
};
} // namespace Ptls6
