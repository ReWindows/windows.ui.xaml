#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CRun {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CRun@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRun@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CRun@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CRun@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRun@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CRun@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInsideHyperlink@CRun@@QEAA_NPEAPEAVCHyperlink@@@Z
    bool IsInsideHyperlink(CHyperlink * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CRun@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CRun@@UEAAJAEBVxstring_ptr@@I@Z
    virtual long SetText(xstring_ptr const &, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRun@@EEAA@XZ
    virtual ~CRun();
};
