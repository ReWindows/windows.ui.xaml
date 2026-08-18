#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace RichTextServices {
class TextFormatterCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireTextFormatter@TextFormatterCache@RichTextServices@@QEAA?AW4EnumImpl@Result@2@PEAPEAVTextFormatter@2@@Z
    int AcquireTextFormatter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTextFormatter@TextFormatterCache@RichTextServices@@QEAAXPEAVTextFormatter@2@@Z
    void ReleaseTextFormatter(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextFormatterCache@RichTextServices@@QEAA@XZ
    ~TextFormatterCache();
};
} // namespace RichTextServices
