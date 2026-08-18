#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace RichTextServices::Internal {
class TextRunData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@TextRunData@Internal@RichTextServices@@QEAA?AW4EnumImpl@Result@3@IPEAPEAV123@@Z
    int Split(unsigned int, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextRunData@Internal@RichTextServices@@QEAA@XZ
    ~TextRunData();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextRunData@Internal@RichTextServices@@AEAA@PEAV012@PEAVTextRun@2@PEAUIFontFace@PALText@@MAEBUScriptAnalysis@5@EI@Z
    TextRunData(WindissectOpaque *, WindissectOpaque *, ::PALText::IFontFace *, float, ::PALText::ScriptAnalysis const &, unsigned char, unsigned int);
};
} // namespace RichTextServices::Internal
