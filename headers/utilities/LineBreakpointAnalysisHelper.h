#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace RichTextServices::Internal::TextSegment {
class LineBreakpointAnalysisHelper {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@LineBreakpointAnalysisHelper@TextSegment@Internal@RichTextServices@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@LineBreakpointAnalysisHelper@TextSegment@Internal@RichTextServices@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBidiLevel@LineBreakpointAnalysisHelper@TextSegment@Internal@RichTextServices@@UEAAJIIEE@Z
    virtual long SetBidiLevel(unsigned int, unsigned int, unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLineBreakpoints@LineBreakpointAnalysisHelper@TextSegment@Internal@RichTextServices@@UEAAJIIPEBULineBreakpoint@PALText@@@Z
    virtual long SetLineBreakpoints(unsigned int, unsigned int, ::PALText::LineBreakpoint const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumberSubstitution@LineBreakpointAnalysisHelper@TextSegment@Internal@RichTextServices@@UEAAJIIPEAUIDWriteNumberSubstitution@@@Z
    virtual long SetNumberSubstitution(unsigned int, unsigned int, IDWriteNumberSubstitution *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScriptAnalysis@LineBreakpointAnalysisHelper@TextSegment@Internal@RichTextServices@@UEAAJIIPEBUScriptAnalysis@PALText@@@Z
    virtual long SetScriptAnalysis(unsigned int, unsigned int, ::PALText::ScriptAnalysis const *);
};
} // namespace RichTextServices::Internal::TextSegment
