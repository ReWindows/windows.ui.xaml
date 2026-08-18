#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace RichTextServices::Internal {
class StackTextAnalysisSource {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@StackTextAnalysisSource@Internal@RichTextServices@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleName@StackTextAnalysisSource@Internal@RichTextServices@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleName(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberSubstitution@StackTextAnalysisSource@Internal@RichTextServices@@UEAAJIPEAIPEAPEAUIDWriteNumberSubstitution@@@Z
    virtual long GetNumberSubstitution(unsigned int, unsigned int *, IDWriteNumberSubstitution * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagraphReadingDirection@StackTextAnalysisSource@Internal@RichTextServices@@UEAA?AW4DWRITE_READING_DIRECTION@@XZ
    virtual int GetParagraphReadingDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAtPosition@StackTextAnalysisSource@Internal@RichTextServices@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextAtPosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBeforePosition@StackTextAnalysisSource@Internal@RichTextServices@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextBeforePosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StackTextAnalysisSource@Internal@RichTextServices@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@StackTextAnalysisSource@Internal@RichTextServices@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StackTextAnalysisSource@Internal@RichTextServices@@QEAA@PEBGI0W4DWRITE_READING_DIRECTION@@PEAUIDWriteNumberSubstitution@@@Z
    StackTextAnalysisSource(unsigned short const *, unsigned int, unsigned short const *, int, IDWriteNumberSubstitution *);
};
} // namespace RichTextServices::Internal
