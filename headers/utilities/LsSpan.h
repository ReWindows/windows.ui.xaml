#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace RichTextServices::Internal {
class LsSpan {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBidiLevel@LsSpan@Internal@RichTextServices@@UEBAEXZ
    virtual unsigned char GetBidiLevel() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LsSpan@Internal@RichTextServices@@QEAA@IW4Enum@LsSpanType@12@PEAV012@@Z
    LsSpan(unsigned int, int, WindissectOpaque *);
};
} // namespace RichTextServices::Internal
