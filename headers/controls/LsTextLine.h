#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace RichTextServices::Internal {
class LsTextLine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arrange@LsTextLine@Internal@RichTextServices@@UEAA?AW4EnumImpl@Result@3@AEBUXRECTF_WH@@@Z
    virtual int Arrange(XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@LsTextLine@Internal@RichTextServices@@UEAA?AW4EnumImpl@Result@3@MW4TextTrimming@DirectUI@@PEAVTextCollapsingSymbol@3@PEAPEAVTextLine@3@@Z
    virtual int Collapse(float, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@LsTextLine@Internal@RichTextServices@@UEAA?AW4EnumImpl@Result@3@PEAVTextDrawingContext@3@AEBUXPOINTF@@M@Z
    virtual int Draw(WindissectOpaque *, XPOINTF const &, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterHitFromDistance@LsTextLine@Internal@RichTextServices@@UEBA?AW4EnumImpl@Result@3@MPEAUCharacterHit@3@@Z
    virtual int GetCharacterHitFromDistance(float, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetectedParagrahDirection@LsTextLine@Internal@RichTextServices@@UEBA?AW4Enum@FlowDirection@3@XZ
    virtual int GetDetectedParagrahDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistanceFromCharacterHit@LsTextLine@Internal@RichTextServices@@UEBA?AW4EnumImpl@Result@3@AEBUCharacterHit@3@PEAM@Z
    virtual int GetDistanceFromCharacterHit(WindissectOpaque const &, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextCaretCharacterHit@LsTextLine@Internal@RichTextServices@@UEBA?AW4EnumImpl@Result@3@AEBUCharacterHit@3@PEAU63@@Z
    virtual int GetNextCaretCharacterHit(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagrahDirection@LsTextLine@Internal@RichTextServices@@UEBA?AW4Enum@FlowDirection@3@XZ
    virtual int GetParagrahDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousCaretCharacterHit@LsTextLine@Internal@RichTextServices@@UEBA?AW4EnumImpl@Result@3@AEBUCharacterHit@3@PEAU63@@Z
    virtual int GetPreviousCaretCharacterHit(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBounds@LsTextLine@Internal@RichTextServices@@UEBA?AW4EnumImpl@Result@3@HHPEAIPEAPEAUTextBounds@3@@Z
    virtual int GetTextBounds(int, int, unsigned int *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCollapsed@LsTextLine@Internal@RichTextServices@@UEBAIXZ
    virtual unsigned int HasCollapsed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMultiCharacterClusters@LsTextLine@Internal@RichTextServices@@UEBAIXZ
    virtual unsigned int HasMultiCharacterClusters() const;
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LsTextLine@Internal@RichTextServices@@MEAA@XZ
    virtual ~LsTextLine();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateLineMetrics@LsTextLine@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@XZ
    int CalculateLineMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateValidTextBounds@LsTextLine@Internal@RichTextServices@@AEBAIHHMMKAEAUTextBounds@3@@Z
    unsigned int CalculateValidTextBounds(int, int, float, float, unsigned long, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectTextBoundsFromBaseLevel@LsTextLine@Internal@RichTextServices@@AEBA?AW4EnumImpl@Result@3@PEAH0PEAUlsqsubinfo@Ptls6@@JJPEAIPEAPEAUTextBounds@3@@Z
    int CollectTextBoundsFromBaseLevel(int *, int *, WindissectOpaque *, long, long, unsigned int *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectTextBoundsToBaseLevel@LsTextLine@Internal@RichTextServices@@AEBA?AW4EnumImpl@Result@3@PEAH0PEAUlsqsubinfo@Ptls6@@JHPEAJPEAIPEAPEAUTextBounds@3@@Z
    int CollectTextBoundsToBaseLevel(int *, int *, WindissectOpaque *, long, int, long *, unsigned int *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEmptyBounds@LsTextLine@Internal@RichTextServices@@AEBA?AW4EnumImpl@Result@3@PEAIPEAPEAUTextBounds@3@@Z
    int CreateEmptyBounds(unsigned int *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLineBreak@LsTextLine@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@PEAUlsbreakrecline@Ptls6@@@Z
    int CreateLineBreak(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineTrailingCharacterSpacing@LsTextLine@Internal@RichTextServices@@AEAAXPEAM@Z
    void DetermineTrailingCharacterSpacing(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@LsTextLine@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@IMPEAVLsTextLineBreak@23@@Z
    int Format(unsigned int, float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatCollapsed@LsTextLine@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@PEAV123@IMPEAVTextCollapsingSymbol@3@PEAVLsTextLineBreak@23@@Z
    int FormatCollapsed(WindissectOpaque *, unsigned int, float, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestCaretIndex@LsTextLine@Internal@RichTextServices@@AEBA?AW4EnumImpl@Result@3@HPEAH0PEAI@Z
    int GetClosestCaretIndex(int, int *, int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistanceInsideTextCell@LsTextLine@Internal@RichTextServices@@AEBA?AW4EnumImpl@Result@3@H_NPEAUlsqsubinfo@Ptls6@@IUlstextcell@7@PEAH@Z
    int GetDistanceInsideTextCell(int, bool, WindissectOpaque *, unsigned int, WindissectOpaque, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextVisibleIndex@LsTextLine@Internal@RichTextServices@@AEBA?AW4EnumImpl@Result@3@HPEAHPEAI@Z
    int GetNextVisibleIndex(int, int *, unsigned int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LsTextLine@Internal@RichTextServices@@AEAA@PEAVLsTextFormatter@12@@Z
    LsTextLine(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupLsPap@LsTextLine@Internal@RichTextServices@@CAXPEAVLsTextFormatter@23@MPEAUlspap@Ptls6@@@Z
    static void SetupLsPap(WindissectOpaque *, float, WindissectOpaque *);
};
} // namespace RichTextServices::Internal
