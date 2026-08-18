#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class ParagraphNodeBreak {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@ParagraphNodeBreak@@UEAAIPEAVBlockNodeBreak@@@Z
    virtual unsigned int Equals(BlockNodeBreak *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParagraphNodeBreak@@QEAA@IPEAVTextLineBreak@RichTextServices@@PEAVTextRunCache@2@@Z
    ParagraphNodeBreak(unsigned int, WindissectOpaque *, WindissectOpaque *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParagraphNodeBreak@@EEAA@XZ
    virtual ~ParagraphNodeBreak();
};
