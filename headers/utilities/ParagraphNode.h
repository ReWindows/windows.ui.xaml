#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class ParagraphNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@ParagraphNode@@UEAAJPEAVCInlineUIContainer@@@Z
    virtual long AddElement(CInlineUIContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAddElement@ParagraphNode@@UEBAIXZ
    virtual unsigned int CanAddElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableMeasureSize@ParagraphNode@@UEBAAEBUXSIZEF@@XZ
    virtual XSIZEF const & GetAvailableMeasureSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineAlignmentOffset@ParagraphNode@@UEBAMXZ
    virtual float GetBaselineAlignmentOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementPosition@ParagraphNode@@UEAAJPEAVCInlineUIContainer@@PEAUXPOINTF@@@Z
    virtual long GetElementPosition(CInlineUIContainer *, XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBounds@ParagraphNode@@UEAAJIIPEAV?$xvector@UTextBounds@RichTextServices@@@@@Z
    virtual long GetTextBounds(unsigned int, unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPosition@ParagraphNode@@UEAAJIPEAI@Z
    virtual long IsAtInsertionPosition(unsigned int, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParagraphNode@@QEAA@PEAVBlockLayoutEngine@@PEAVCParagraph@@PEAVContainerNode@@@Z
    ParagraphNode(BlockLayoutEngine *, CParagraph *, ContainerNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelPositionToTextPosition@ParagraphNode@@UEAAJAEBUXPOINTF@@PEAIPEAW4TextGravity@@@Z
    virtual long PixelPositionToTextPosition(XPOINTF const &, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveElement@ParagraphNode@@UEAAJPEAVCInlineUIContainer@@@Z
    virtual long RemoveElement(CInlineUIContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateElementPosition@ParagraphNode@@UEAAJPEAVCInlineUIContainer@@AEBUXPOINTF@@@Z
    virtual long UpdateElementPosition(CInlineUIContainer *, XPOINTF const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParagraphNode@@UEAA@XZ
    virtual ~ParagraphNode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@ParagraphNode@@MEAAJUXSIZEF@@@Z
    virtual long ArrangeCore(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBypassMeasure@ParagraphNode@@MEAAJUXSIZEF@@IIIPEAVBlockNodeBreak@@PEAI@Z
    virtual long CanBypassMeasure(XSIZEF, unsigned int, unsigned int, unsigned int, BlockNodeBreak *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCore@ParagraphNode@@MEAAJI@Z
    virtual long DrawCore(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCore@ParagraphNode@@MEAAJUXSIZEF@@IIIIPEAVBlockNodeBreak@@@Z
    virtual long MeasureCore(XSIZEF, unsigned int, unsigned int, unsigned int, unsigned int, BlockNodeBreak *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateLineOffset@ParagraphNode@@AEAAMW4TextAlignment@DirectUI@@PEAVTextLine@RichTextServices@@M@Z
    float CalculateLineOffset(int, WindissectOpaque *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteLineCache@ParagraphNode@@AEAAXXZ
    void DeleteLineCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextCaches@ParagraphNode@@AEAAJPEAVParagraphNodeBreak@@@Z
    long EnsureTextCaches(ParagraphNodeBreak *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatLineAtIndex@ParagraphNode@@AEAAJIW4TextTrimming@DirectUI@@MPEAPEAVTextFormatter@RichTextServices@@PEAPEAVTextParagraphProperties@5@PEAPEAVTextLine@5@@Z
    long FormatLineAtIndex(unsigned int, int, float, WindissectOpaque * *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineIndexFromPoint@ParagraphNode@@AEBAIUXPOINTF@@PEAU2@@Z
    unsigned int GetLineIndexFromPoint(XPOINTF, XPOINTF *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineIndexFromPosition@ParagraphNode@@AEBAIIPEAUXPOINTF@@@Z
    unsigned int GetLineIndexFromPosition(unsigned int, XPOINTF *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInParagraph@ParagraphNode@@AEBAII@Z
    unsigned int GetPositionInParagraph(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPositionInTextLine@ParagraphNode@@CAJIIPEAVTextLine@RichTextServices@@PEAI@Z
    static long IsAtInsertionPositionInTextLine(unsigned int, unsigned int, WindissectOpaque *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkEmbeddedElementsInvisible@ParagraphNode@@AEAAXXZ
    void MarkEmbeddedElementsInvisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEmbeddedElements@ParagraphNode@@AEAAXXZ
    void RemoveEmbeddedElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimLineIfNecessary@ParagraphNode@@AEAAJPEBULineMetrics@@PEAVTextLine@RichTextServices@@MW4TextTrimming@DirectUI@@PEAPEAV34@@Z
    long TrimLineIfNecessary(LineMetrics const *, WindissectOpaque *, float, int, WindissectOpaque * *);
};
