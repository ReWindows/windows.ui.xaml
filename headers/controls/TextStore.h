#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace RichTextServices::Internal {
class TextStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TextStore@Internal@RichTextServices@@UEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchRun@TextStore@Internal@RichTextServices@@QEAA?AW4EnumImpl@Result@3@IPEAVLsSpan@23@PEAPEAVLsRun@23@@Z
    int FetchRun(unsigned int, WindissectOpaque *, WindissectOpaque * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextStore@Internal@RichTextServices@@MEAA@XZ
    virtual ~TextStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineParagraphTextReadingOrder@TextStore@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@PEAW4Enum@FlowDirection@3@@Z
    int DetermineParagraphTextReadingOrder(int *);
};
} // namespace RichTextServices::Internal
