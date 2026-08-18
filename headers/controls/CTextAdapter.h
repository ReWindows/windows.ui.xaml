#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CTextAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextAdapter@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextBlockView@CTextAdapter@@QEAAJXZ
    long EnsureTextBlockView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlockCollection@CTextAdapter@@SAPEAVCBlockCollection@@PEAVCDependencyObject@@@Z
    static CBlockCollection * GetBlockCollection(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentEndPointers@CTextAdapter@@SAJPEAVCDependencyObject@@PEAPEAVCTextPointerWrapper@@1@Z
    static long GetContentEndPointers(CDependencyObject *, CTextPointerWrapper * *, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentRange@CTextAdapter@@QEAAJPEAPEAVCTextRangeAdapter@@@Z
    long GetDocumentRange(CTextRangeAdapter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageNode@CTextAdapter@@SAPEAVPageNode@@PEAVCDependencyObject@@@Z
    static PageNode * GetPageNode(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CTextAdapter@@QEAAJPEAPEAPEAVCTextRangeAdapter@@PEAH@Z
    long GetSelection(CTextRangeAdapter * * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionEndPointers@CTextAdapter@@SAJPEAVCDependencyObject@@PEAPEAVCTextPointerWrapper@@1@Z
    static long GetSelectionEndPointers(CDependencyObject *, CTextPointerWrapper * *, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionManager@CTextAdapter@@SAPEAVTextSelectionManager@@PEAVCDependencyObject@@@Z
    static TextSelectionManager * GetSelectionManager(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextContainer@CTextAdapter@@SAPEAUITextContainer@@PEAVCDependencyObject@@@Z
    static ITextContainer * GetTextContainer(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextView@CTextAdapter@@SAPEAUITextView@@PEAVCDependencyObject@@@Z
    static ITextView * GetTextView(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextAdapter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRanges@CTextAdapter@@QEAAJPEAPEAPEAVCTextRangeAdapter@@PEAH@Z
    long GetVisibleRanges(CTextRangeAdapter * * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChild@CTextAdapter@@QEAAJPEAVCAutomationPeer@@PEAPEAVCTextRangeAdapter@@@Z
    long RangeFromChild(CAutomationPeer *, CTextRangeAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromInlineUIContainer@CTextAdapter@@QEAAJPEAVCInlineUIContainer@@PEAPEAVCTextRangeAdapter@@@Z
    long RangeFromInlineUIContainer(CInlineUIContainer *, CTextRangeAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromLink@CTextAdapter@@QEAAJPEAVCAutomationPeer@@UXPOINTF@@PEAPEAVCTextRangeAdapter@@@Z
    long RangeFromLink(CAutomationPeer *, XPOINTF, CTextRangeAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPoint@CTextAdapter@@QEAAJUXPOINTF@@PEAPEAVCTextRangeAdapter@@@Z
    long RangeFromPoint(XPOINTF, CTextRangeAdapter * *);
};
