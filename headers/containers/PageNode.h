#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class PageNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@PageNode@@QEAAJPEAVCInlineUIContainer@@PEAVParagraphNode@@@Z
    long AddElement(CInlineUIContainer *, ParagraphNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInlineUIContainerOffset@PageNode@@QEAAIPEAVCInlineUIContainer@@@Z
    unsigned int FindInlineUIContainerOffset(CInlineUIContainer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRenderingOffset@PageNode@@UEBA?AUXPOINTF@@XZ
    virtual XPOINTF GetContentRenderingOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementsWithinRange@PageNode@@QEAAJIIPEAPEAPEAVCInlineUIContainer@@PEAH@Z
    long GetElementsWithinRange(unsigned int, unsigned int, CInlineUIContainer * * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkParagraphEmbeddedElementsInvisible@PageNode@@QEAAXPEAVParagraphNode@@@Z
    void MarkParagraphEmbeddedElementsInvisible(ParagraphNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveElement@PageNode@@QEAAJPEAVCInlineUIContainer@@I@Z
    long RemoveElement(CInlineUIContainer *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveParagraphEmbeddedElements@PageNode@@QEAAJPEAVParagraphNode@@@Z
    long RemoveParagraphEmbeddedElements(ParagraphNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateElementPosition@PageNode@@QEAAJPEAVCInlineUIContainer@@PEAVParagraphNode@@AEBUXPOINTF@@@Z
    long UpdateElementPosition(CInlineUIContainer *, ParagraphNode *, XPOINTF const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PageNode@@UEAA@XZ
    virtual ~PageNode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@PageNode@@MEAAJUXSIZEF@@@Z
    virtual long ArrangeCore(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCore@PageNode@@MEAAJUXSIZEF@@IIIIPEAVBlockNodeBreak@@@Z
    virtual long MeasureCore(XSIZEF, unsigned int, unsigned int, unsigned int, unsigned int, BlockNodeBreak *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeEmbeddedElements@PageNode@@AEAAJXZ
    long ArrangeEmbeddedElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEmbeddedElements@PageNode@@AEAAXXZ
    void ClearEmbeddedElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElement@PageNode@@AEAAIPEAVCInlineUIContainer@@PEAVParagraphNode@@PEAUEmbeddedElementInfo@1@PEAI@Z
    unsigned int FindElement(CInlineUIContainer *, ParagraphNode *, WindissectOpaque *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClippedEmbeddedUIElements@PageNode@@AEAAJXZ
    long RemoveClippedEmbeddedUIElements();
};
