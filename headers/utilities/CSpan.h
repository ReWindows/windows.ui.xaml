#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CSpan {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSpan@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingElement@CSpan@@UEAAJIPEAPEAVCTextElement@@@Z
    virtual long GetContainingElement(unsigned int, CTextElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementEdgeOffset@CSpan@@UEAAJPEAVCTextElement@@W4ElementEdge@@PEAI2@Z
    virtual long GetElementEdgeOffset(CTextElement *, int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInlineCollection@CSpan@@UEAAPEAVCInlineCollection@@XZ
    virtual CInlineCollection * GetInlineCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CSpan@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CSpan@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSpan@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSpan@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInlines@CSpan@@IEAAJXZ
    long CreateInlines();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSpan@@MEAA@XZ
    virtual ~CSpan();
};
