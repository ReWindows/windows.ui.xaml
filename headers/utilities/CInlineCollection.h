#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
class CInlineCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CInlineCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CInlineCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendText@CInlineCollection@@QEAAJAEBVxstring_ptr@@PEAI@Z
    long AppendText(xstring_ptr const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachePositionCounts@CInlineCollection@@UEAAXXZ
    virtual void CachePositionCounts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CInlineCollection@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInlineCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsDependencyObject@CInlineCollection@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetAsDependencyObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingElement@CInlineCollection@@UEAAJIPEAPEAVCTextElement@@@Z
    virtual long GetContainingElement(unsigned int, CTextElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCore@CInlineCollection@@UEAAPEAVCCoreServices@@XZ
    virtual CCoreServices * GetCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementEdgeOffset@CInlineCollection@@UEAAJPEAVCTextElement@@W4ElementEdge@@PEAI2@Z
    virtual long GetElementEdgeOffset(CTextElement *, int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerUIElement@CInlineCollection@@UEAAPEAVCUIElement@@XZ
    virtual CUIElement * GetOwnerUIElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CInlineCollection@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CInlineCollection@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CInlineCollection@@UEAAJIPEAPEAVCString@@@Z
    virtual long GetText(unsigned int, CString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CInlineCollection@@UEAAJIIIPEAPEAVCString@@@Z
    virtual long GetText(unsigned int, unsigned int, unsigned int, CString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CInlineCollection@@UEAAJIIIPEAIPEAPEBG0@Z
    virtual long GetText(unsigned int, unsigned int, unsigned int, unsigned int *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CInlineCollection@@UEAAJIPEAIPEAPEBG0@Z
    virtual long GetText(unsigned int, unsigned int *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextView@CInlineCollection@@UEAAPEAUITextView@@XZ
    virtual ITextView * GetTextView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CInlineCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CInlineCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@CInlineCollection@@UEAAJPEBVCDependencyProperty@@@Z
    virtual long MarkDirty(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CInlineCollection@@UEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTextElement@CInlineCollection@@UEAAJPEAVCTextElement@@@Z
    virtual long ValidateTextElement(CTextElement *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInlineCollection@@EEAA@XZ
    virtual ~CInlineCollection();
};
