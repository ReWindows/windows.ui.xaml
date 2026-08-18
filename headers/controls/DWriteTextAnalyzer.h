#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class DWriteTextAnalyzer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DWriteTextAnalyzer@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeBidi@DWriteTextAnalyzer@@UEAAJPEAUITextAnalysisSource@PALText@@IIPEAUITextAnalysisSink@3@@Z
    virtual long AnalyzeBidi(::PALText::ITextAnalysisSource *, unsigned int, unsigned int, ::PALText::ITextAnalysisSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeLineBreakpoints@DWriteTextAnalyzer@@UEAAJPEAUITextAnalysisSource@PALText@@IIPEAUITextAnalysisSink@3@@Z
    virtual long AnalyzeLineBreakpoints(::PALText::ITextAnalysisSource *, unsigned int, unsigned int, ::PALText::ITextAnalysisSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeNumberSubstitution@DWriteTextAnalyzer@@UEAAJPEAUITextAnalysisSource@PALText@@IIPEAUITextAnalysisSink@3@@Z
    virtual long AnalyzeNumberSubstitution(::PALText::ITextAnalysisSource *, unsigned int, unsigned int, ::PALText::ITextAnalysisSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeScript@DWriteTextAnalyzer@@UEAAJPEAUITextAnalysisSource@PALText@@IIPEAUITextAnalysisSink@3@@Z
    virtual long AnalyzeScript(::PALText::ITextAnalysisSource *, unsigned int, unsigned int, ::PALText::ITextAnalysisSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyCharacterSpacing@DWriteTextAnalyzer@@UEAAJMIPEBUScriptAnalysis@PALText@@IPEBG1IPEBUShapingGlyphProperties@3@PEAMPEAUGlyphOffset@3@@Z
    virtual long ApplyCharacterSpacing(float, unsigned int, ::PALText::ScriptAnalysis const *, unsigned int, unsigned short const *, unsigned short const *, unsigned int, ::PALText::ShapingGlyphProperties const *, float *, ::PALText::GlyphOffset *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DWriteTextAnalyzer@@SAJPEAUIDWriteFactory@@PEAPEAUIGlyphAnalyzer@PALText@@@Z
    static long Create(IDWriteFactory *, ::PALText::IGlyphAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DWriteTextAnalyzer@@SAJPEAUIDWriteFactory@@PEAPEAUIScriptAnalyzer@PALText@@@Z
    static long Create(IDWriteFactory *, ::PALText::IScriptAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DWriteTextAnalyzer@@SAJPEAUIDWriteFactory@@PEAPEAUITextAnalyzer@PALText@@@Z
    static long Create(IDWriteFactory *, ::PALText::ITextAnalyzer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterSpaceability@DWriteTextAnalyzer@@UEAAJPEBUScriptAnalysis@PALText@@IPEBG1IPEBUShapingGlyphProperties@3@PEAI@Z
    virtual long GetCharacterSpaceability(::PALText::ScriptAnalysis const *, unsigned int, unsigned short const *, unsigned short const *, unsigned int, ::PALText::ShapingGlyphProperties const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentReadingDirection@DWriteTextAnalyzer@@UEAAJPEAUITextAnalysisSource@PALText@@IIPEAW4Enum@ReadingDirection@3@PEAI@Z
    virtual long GetContentReadingDirection(::PALText::ITextAnalysisSource *, unsigned int, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphPlacements@DWriteTextAnalyzer@@UEAAJPEBG0PEAUShapingTextProperties@PALText@@I0PEBUShapingGlyphProperties@3@IPEAUIFontFace@3@MIIPEBUTextOptions@@PEBUScriptAnalysis@3@0PEAPEBUTypographicFeatures@3@PEBIIPEAMPEAUGlyphOffset@3@@Z
    virtual long GetGlyphPlacements(unsigned short const *, unsigned short const *, ::PALText::ShapingTextProperties *, unsigned int, unsigned short const *, ::PALText::ShapingGlyphProperties const *, unsigned int, ::PALText::IFontFace *, float, unsigned int, unsigned int, TextOptions const *, ::PALText::ScriptAnalysis const *, unsigned short const *, ::PALText::TypographicFeatures const * *, unsigned int const *, unsigned int, float *, ::PALText::GlyphOffset *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphs@DWriteTextAnalyzer@@UEAAJPEBGIPEAUIFontFace@PALText@@IIPEBUScriptAnalysis@3@0PEAUIDWriteNumberSubstitution@@PEAPEBUTypographicFeatures@3@PEBIIPEAGPEAUShapingTextProperties@3@PEAPEAGPEAPEAUShapingGlyphProperties@3@PEAI@Z
    virtual long GetGlyphs(unsigned short const *, unsigned int, ::PALText::IFontFace *, unsigned int, unsigned int, ::PALText::ScriptAnalysis const *, unsigned short const *, IDWriteNumberSubstitution *, ::PALText::TypographicFeatures const * *, unsigned int const *, unsigned int, unsigned short *, ::PALText::ShapingTextProperties *, unsigned short * *, ::PALText::ShapingGlyphProperties * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextComplexity@DWriteTextAnalyzer@@UEAAJPEBGIPEAUIFontFace@PALText@@PEAI2@Z
    virtual long GetTextComplexity(unsigned short const *, unsigned int, ::PALText::IFontFace *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestrictCaretToClusters@DWriteTextAnalyzer@@UEAAJPEBUScriptAnalysis@PALText@@PEAI@Z
    virtual long IsRestrictCaretToClusters(::PALText::ScriptAnalysis const *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DWriteTextAnalyzer@@UEAAIXZ
    virtual unsigned int Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DWriteTextAnalyzer@@AEAA@PEAUIDWriteTextAnalyzer@@@Z
    DWriteTextAnalyzer(IDWriteTextAnalyzer *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DWriteTextAnalyzer@@AEAA@XZ
    ~DWriteTextAnalyzer();
};
