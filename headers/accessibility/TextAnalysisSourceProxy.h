#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class TextAnalysisSourceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextAnalysisSourceProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleName@TextAnalysisSourceProxy@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleName(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleNameList@TextAnalysisSourceProxy@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleNameList(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberSubstitution@TextAnalysisSourceProxy@@UEAAJIPEAIPEAPEAUIDWriteNumberSubstitution@@@Z
    virtual long GetNumberSubstitution(unsigned int, unsigned int *, IDWriteNumberSubstitution * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagraphReadingDirection@TextAnalysisSourceProxy@@UEAA?AW4DWRITE_READING_DIRECTION@@XZ
    virtual int GetParagraphReadingDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAtPosition@TextAnalysisSourceProxy@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextAtPosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBeforePosition@TextAnalysisSourceProxy@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextBeforePosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextAnalysisSourceProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextAnalysisSourceProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextAnalysisSourceProxy@@QEAA@PEAUITextAnalysisSource@PALText@@@Z
    TextAnalysisSourceProxy(::PALText::ITextAnalysisSource *);
};
