#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace RichTextServices::Internal {
class TextItemizer {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@TextItemizer@Internal@RichTextServices@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Itemize@TextItemizer@Internal@RichTextServices@@QEAA?AW4EnumImpl@Result@3@PEAVTextRunData@23@@Z
    int Itemize(WindissectOpaque *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@TextItemizer@Internal@RichTextServices@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBidiLevel@TextItemizer@Internal@RichTextServices@@UEAAJIIEE@Z
    virtual long SetBidiLevel(unsigned int, unsigned int, unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLineBreakpoints@TextItemizer@Internal@RichTextServices@@UEAAJIIPEBULineBreakpoint@PALText@@@Z
    virtual long SetLineBreakpoints(unsigned int, unsigned int, ::PALText::LineBreakpoint const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumberSubstitution@TextItemizer@Internal@RichTextServices@@UEAAJIIPEAUIDWriteNumberSubstitution@@@Z
    virtual long SetNumberSubstitution(unsigned int, unsigned int, IDWriteNumberSubstitution *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScriptAnalysis@TextItemizer@Internal@RichTextServices@@UEAAJIIPEBUScriptAnalysis@PALText@@@Z
    virtual long SetScriptAnalysis(unsigned int, unsigned int, ::PALText::ScriptAnalysis const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextItemizer@Internal@RichTextServices@@QEAA@XZ
    ~TextItemizer();
};
} // namespace RichTextServices::Internal
