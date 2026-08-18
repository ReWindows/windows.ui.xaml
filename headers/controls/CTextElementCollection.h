#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CTextElementCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendImpl@CTextElementCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long AppendImpl(CDependencyObject *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextElementCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertImpl@CTextElementCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long InsertImpl(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@CTextElementCollection@@UEAAJPEBVCDependencyProperty@@@Z
    virtual long MarkDirty(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CTextElementCollection@@UEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtImpl@CTextElementCollection@@UEAAPEAVCDependencyObject@@I@Z
    virtual CDependencyObject * RemoveAtImpl(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CTextElementCollection@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTextElement@CTextElementCollection@@UEAAJPEAVCTextElement@@@Z
    virtual long ValidateTextElement(CTextElement *);
};
