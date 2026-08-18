#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CParagraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CParagraph@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingElement@CParagraph@@UEAAJIPEAPEAVCTextElement@@@Z
    virtual long GetContainingElement(unsigned int, CTextElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementEdgeOffset@CParagraph@@UEAAJPEAVCTextElement@@W4ElementEdge@@PEAI2@Z
    virtual long GetElementEdgeOffset(CTextElement *, int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInlineCollection@CParagraph@@UEAAPEAVCInlineCollection@@XZ
    virtual CInlineCollection * GetInlineCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CParagraph@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CParagraph@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CParagraph@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CParagraph@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CParagraph@@QEAAJXZ
    long Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CParagraph@@UEAA@XZ
    virtual ~CParagraph();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInlineCollection@CParagraph@@AEAAJXZ
    long CreateInlineCollection();
};
