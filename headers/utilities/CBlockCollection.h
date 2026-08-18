#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CBlockCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBlockCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsDependencyObject@CBlockCollection@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetAsDependencyObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingElement@CBlockCollection@@UEAAJIPEAPEAVCTextElement@@@Z
    virtual long GetContainingElement(unsigned int, CTextElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCore@CBlockCollection@@UEAAPEAVCCoreServices@@XZ
    virtual CCoreServices * GetCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementEdgeOffset@CBlockCollection@@UEAAJPEAVCTextElement@@W4ElementEdge@@PEAI2@Z
    virtual long GetElementEdgeOffset(CTextElement *, int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerUIElement@CBlockCollection@@UEAAPEAVCUIElement@@XZ
    virtual CUIElement * GetOwnerUIElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CBlockCollection@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CBlockCollection@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CBlockCollection@@UEAAJIIIPEAPEAVCString@@@Z
    virtual long GetText(unsigned int, unsigned int, unsigned int, CString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CBlockCollection@@UEAAJIIIPEAIPEAPEBG0@Z
    virtual long GetText(unsigned int, unsigned int, unsigned int, unsigned int *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CBlockCollection@@UEAAJIPEAIPEAPEBG0@Z
    virtual long GetText(unsigned int, unsigned int *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBlockCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@CBlockCollection@@UEAAJPEBVCDependencyProperty@@@Z
    virtual long MarkDirty(CDependencyProperty const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheLengths@CBlockCollection@@AEAAXXZ
    void CacheLengths();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBlockCollection@@EEAA@XZ
    virtual ~CBlockCollection();
};
