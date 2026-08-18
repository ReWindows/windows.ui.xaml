#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class BlockLayoutHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCollapsingSymbol@BlockLayoutHelpers@@SAJPEAVCDependencyObject@@0PEAPEAVTextCollapsingSymbol@RichTextServices@@@Z
    static long CreateCollapsingSymbol(CDependencyObject *, CDependencyObject *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementBaseline@BlockLayoutHelpers@@SAJPEAVCUIElement@@PEAM@Z
    static long GetElementBaseline(CUIElement *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowDirection@BlockLayoutHelpers@@SA?AW4Enum@FlowDirection@RichTextServices@@PEAVCDependencyObject@@@Z
    static int GetFlowDirection(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontContext@BlockLayoutHelpers@@SAPEAVCFontContext@@PEAVCDependencyObject@@@Z
    static CFontContext * GetFontContext(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsColorFontEnabled@BlockLayoutHelpers@@SAIPEAVCDependencyObject@@@Z
    static unsigned int GetIsColorFontEnabled(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineStackingInfo@BlockLayoutHelpers@@SAJPEAVCDependencyObject@@0PEAW4LineStackingStrategy@DirectUI@@PEAM22@Z
    static long GetLineStackingInfo(CDependencyObject *, CDependencyObject *, int *, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpticalMarginAlignment@BlockLayoutHelpers@@SA?AW4OpticalMarginAlignment@DirectUI@@PEAVCDependencyObject@@@Z
    static int GetOpticalMarginAlignment(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagraphProperties@BlockLayoutHelpers@@SAJPEAVCDependencyObject@@0PEAPEAVTextParagraphProperties@RichTextServices@@@Z
    static long GetParagraphProperties(CDependencyObject *, CDependencyObject *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAlignment@BlockLayoutHelpers@@SAJPEAVCDependencyObject@@0PEAW4TextAlignment@DirectUI@@@Z
    static long GetTextAlignment(CDependencyObject *, CDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextFormatter@BlockLayoutHelpers@@SAJPEAVCDependencyObject@@PEAPEAVTextFormatter@RichTextServices@@@Z
    static long GetTextFormatter(CDependencyObject *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextReadingOrder@BlockLayoutHelpers@@SA?AW4TextReadingOrder@DirectUI@@PEAVCDependencyObject@@@Z
    static int GetTextReadingOrder(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextTrimming@BlockLayoutHelpers@@SA?AW4TextTrimming@DirectUI@@PEAVCDependencyObject@@@Z
    static int GetTextTrimming(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTextFormatter@BlockLayoutHelpers@@SAXPEAVCDependencyObject@@PEAVTextFormatter@RichTextServices@@@Z
    static void ReleaseTextFormatter(CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowParagraphEllipsisOnPage@BlockLayoutHelpers@@SAIPEAVCDependencyObject@@@Z
    static unsigned int ShowParagraphEllipsisOnPage(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCollapsingCharacterWidth@BlockLayoutHelpers@@CAJPEAUIFontFace@PALText@@PEAGPEAVTextRunProperties@RichTextServices@@PEAM@Z
    static long ComputeCollapsingCharacterWidth(::PALText::IFontFace *, unsigned short *, WindissectOpaque *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAlignment@BlockLayoutHelpers@@CA?AW4TextAlignment@DirectUI@@PEAVCDependencyObject@@@Z
    static int GetTextAlignment(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLineBounds@BlockLayoutHelpers@@CA?AW4TextLineBounds@DirectUI@@PEAVCDependencyObject@@@Z
    static int GetTextLineBounds(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextWrapping@BlockLayoutHelpers@@CA?AW4TextWrapping@DirectUI@@PEAVCDependencyObject@@@Z
    static int GetTextWrapping(CDependencyObject *);
};
