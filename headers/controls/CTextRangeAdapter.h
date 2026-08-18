#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 44 member(s).
class CTextRangeAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttributeValueComparer@CTextRangeAdapter@@QEAAJVCValue@@0PEAI@Z
    long AttributeValueComparer(CValue, CValue, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CTextRangeAdapter@@QEAAJPEAPEAV1@@Z
    long Clone(CTextRangeAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CTextRangeAdapter@@QEAAJPEAV1@PEAI@Z
    long Compare(CTextRangeAdapter *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEndpoints@CTextRangeAdapter@@QEAAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@0PEAH@Z
    long CompareEndpoints(int, CTextRangeAdapter *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextRangeAdapter@@SAJPEAVCCoreServices@@PEAVCTextAdapter@@PEAVCTextPointerWrapper@@2PEAVCDependencyObject@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CTextAdapter *, CTextPointerWrapper *, CTextPointerWrapper *, CDependencyObject *, CTextRangeAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextRangeAdapter@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAttributeIdInfoForStartElement@CTextRangeAdapter@@QEAAJPEAVCTextElement@@@Z
    long EnsureAttributeIdInfoForStartElement(CTextElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToCharacter@CTextRangeAdapter@@SAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@HPEAI@Z
    static long ExpandToCharacter(int, CTextRangeAdapter *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToDocument@CTextRangeAdapter@@SAJPEAV1@H@Z
    static long ExpandToDocument(CTextRangeAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToEnclosingUnit@CTextRangeAdapter@@QEAAJW4TextUnit@UIAXcp@@@Z
    long ExpandToEnclosingUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToFormat@CTextRangeAdapter@@SAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@HPEAI@Z
    static long ExpandToFormat(int, CTextRangeAdapter *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToLine@CTextRangeAdapter@@SAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@HPEAI2@Z
    static long ExpandToLine(int, CTextRangeAdapter *, int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToParagraph@CTextRangeAdapter@@SAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@HPEAI2@Z
    static long ExpandToParagraph(int, CTextRangeAdapter *, int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToWord@CTextRangeAdapter@@SAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@HPEAI@Z
    static long ExpandToWord(int, CTextRangeAdapter *, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValue@CTextRangeAdapter@@QEAAJW4AutomationTextAttributesEnum@DirectUI@@PEAVCValue@@@Z
    long GetAttributeValue(int, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueFromTextElement@CTextRangeAdapter@@QEAAJW4AutomationTextAttributesEnum@DirectUI@@PEAVCTextElement@@PEAVCValue@@PEAVCParagraph@@@Z
    long GetAttributeValueFromTextElement(int, CTextElement *, CValue *, CParagraph *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangles@CTextRangeAdapter@@QEAAJPEAPEANPEAH@Z
    long GetBoundingRectangles(double * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCValueStringFromCValueObject@CTextRangeAdapter@@QEAAJVCValue@@PEAV2@@Z
    long GetCValueStringFromCValueObject(CValue, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CTextRangeAdapter@@QEAAJPEAPEAPEAVCAutomationPeer@@PEAH@Z
    long GetChildren(CAutomationPeer * * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnclosingElement@CTextRangeAdapter@@QEAAJPEAPEAVCAutomationPeer@@@Z
    long GetEnclosingElement(CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagraphFromTextElement@CTextRangeAdapter@@SAPEAVCParagraph@@PEAVCTextElement@@@Z
    static CParagraph * GetParagraphFromTextElement(CTextElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CTextRangeAdapter@@QEAAJIPEAVxstring_ptr@@@Z
    long GetText(unsigned int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextRangeAdapter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTextRangeAdapter@@QEAAJPEAVCTextAdapter@@PEAVCTextPointerWrapper@@1PEAVCDependencyObject@@@Z
    long Initialize(CTextAdapter *, CTextPointerWrapper *, CTextPointerWrapper *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtEmptyLine@CTextRangeAdapter@@QEAAJPEAI@Z
    long IsAtEmptyLine(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormatBreaker@CTextRangeAdapter@@QEAAJPEAVCTextElement@@PEAI@Z
    long IsFormatBreaker(CTextElement *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHiddenRunOrLineBreak@CTextRangeAdapter@@QEAAJPEAVCTextElement@@PEAI@Z
    long IsHiddenRunOrLineBreak(CTextElement *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CTextRangeAdapter@@QEAAJW4TextUnit@UIAXcp@@HPEAH@Z
    long Move(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveByCharacter@CTextRangeAdapter@@SAJHPEAIPEAVCPlainTextPosition@@@Z
    static long MoveByCharacter(int, unsigned int *, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveByWord@CTextRangeAdapter@@SAJHPEAIPEAVCPlainTextPosition@@@Z
    static long MoveByWord(int, unsigned int *, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByRange@CTextRangeAdapter@@QEAAJW4TextPatternRangeEndpoint@UIAXcp@@PEAV1@0@Z
    long MoveEndpointByRange(int, CTextRangeAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByUnit@CTextRangeAdapter@@QEAAJW4TextPatternRangeEndpoint@UIAXcp@@W4TextUnit@3@HPEAHPEAI@Z
    long MoveEndpointByUnit(int, int, int, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToLine@CTextRangeAdapter@@SAJ_NPEAV1@PEAVCPlainTextPosition@@@Z
    static long MoveToLine(bool, CTextRangeAdapter *, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@CTextRangeAdapter@@QEAAJXZ
    long ScrollIntoView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CTextRangeAdapter@@QEAAJXZ
    long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraverseTextElementTreeForFormat@CTextRangeAdapter@@QEAAJPEAVCTextElement@@HPEAPEAV2@1@Z
    long TraverseTextElementTreeForFormat(CTextElement *, int, CTextElement * *, CTextElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndAdjust@CTextRangeAdapter@@SAJW4TextPatternRangeEndpoint@UIAXcp@@AEBVCPlainTextPosition@@PEAV1@PEAI@Z
    static long ValidateAndAdjust(int, CPlainTextPosition const &, CTextRangeAdapter *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextRangeAdapter@@UEAA@XZ
    virtual ~CTextRangeAdapter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableChildrenInRange@CTextRangeAdapter@@AEAAJPEAV?$xvector@PEAVCAutomationPeer@@@@PEAVCDOCollection@@II@Z
    long GetFocusableChildrenInRange(WindissectOpaque *, CDOCollection *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkChildrenWithinRange@CTextRangeAdapter@@AEAAJPEAV?$xvector@PEAVCAutomationPeer@@@@II@Z
    long GetLinkChildrenWithinRange(WindissectOpaque *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLinkWithinRange@CTextRangeAdapter@@AEAA_NPEAVCInline@@II@Z
    bool IsLinkWithinRange(CInline *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeIsInLink@CTextRangeAdapter@@AEAA_NPEAPEAVCInline@@@Z
    bool RangeIsInLink(CInline * *);
};
