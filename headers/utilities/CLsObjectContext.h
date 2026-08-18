#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace Ptls6 {
class CLsObjectContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBreakRecord@CLsObjectContext@Ptls6@@UEAAXPEAUlsbreakrecobj@2@@Z
    virtual void DestroyBreakRecord(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateBreakRecord@CLsObjectContext@Ptls6@@UEAAJPEBUlsbreakrecobj@2@PEAPEAU32@@Z
    virtual long DuplicateBreakRecord(WindissectOpaque const *, WindissectOpaque * *);
};
} // namespace Ptls6
