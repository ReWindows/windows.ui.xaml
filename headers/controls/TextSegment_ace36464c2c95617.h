#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace RichTextServices::Internal {
class TextSegment {
public:
    class LineBreakpointAnalysisHelper;
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@TextSegment@Internal@RichTextServices@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Analyze@TextSegment@Internal@RichTextServices@@QEAA?AW4EnumImpl@Result@3@PEAVIFontAndScriptServices@@@Z
    int Analyze(IFontAndScriptServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TextSegment@Internal@RichTextServices@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleName@TextSegment@Internal@RichTextServices@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleName(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleNameList@TextSegment@Internal@RichTextServices@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleNameList(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberSubstitution@TextSegment@Internal@RichTextServices@@UEAAJIPEAIPEAPEAUIDWriteNumberSubstitution@@@Z
    virtual long GetNumberSubstitution(unsigned int, unsigned int *, IDWriteNumberSubstitution * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagraphReadingDirection@TextSegment@Internal@RichTextServices@@UEAA?AW4Enum@ReadingDirection@PALText@@XZ
    virtual int GetParagraphReadingDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAtPosition@TextSegment@Internal@RichTextServices@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextAtPosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBeforePosition@TextSegment@Internal@RichTextServices@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextBeforePosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@TextSegment@Internal@RichTextServices@@QEAA?AW4EnumImpl@Result@3@IPEAVTextSource@3@W4Enum@FlowDirection@3@@Z
    int Populate(unsigned int, WindissectOpaque *, int);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@TextSegment@Internal@RichTextServices@@UEAAIXZ
    virtual unsigned int Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeComplexity@TextSegment@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@PEAUITextAnalyzer@PALText@@@Z
    int AnalyzeComplexity(::PALText::ITextAnalyzer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnalyzeFonts@TextSegment@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@XZ
    int AnalyzeFonts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BalanceBidiCharacterSpacing@TextSegment@Internal@RichTextServices@@AEAAXXZ
    void BalanceBidiCharacterSpacing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnalysisTextAtPosition@TextSegment@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@IIPEAPEBGPEAI@Z
    int GetAnalysisTextAtPosition(unsigned int, unsigned int, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextRunAtPosition@TextSegment@Internal@RichTextServices@@AEBAPEAVTextRun@3@I@Z
    WindissectOpaque * GetTextRunAtPosition(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedNumberSubstitution@TextSegment@Internal@RichTextServices@@AEAAJPEAI@Z
    long NeedNumberSubstitution(unsigned int *);
};
} // namespace RichTextServices::Internal
