#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class TextAnalysisSinkProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextAnalysisSinkProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextAnalysisSinkProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextAnalysisSinkProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBidiLevel@TextAnalysisSinkProxy@@UEAAJIIEE@Z
    virtual long SetBidiLevel(unsigned int, unsigned int, unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLineBreakpoints@TextAnalysisSinkProxy@@UEAAJIIPEBUDWRITE_LINE_BREAKPOINT@@@Z
    virtual long SetLineBreakpoints(unsigned int, unsigned int, DWRITE_LINE_BREAKPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumberSubstitution@TextAnalysisSinkProxy@@UEAAJIIPEAUIDWriteNumberSubstitution@@@Z
    virtual long SetNumberSubstitution(unsigned int, unsigned int, IDWriteNumberSubstitution *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScriptAnalysis@TextAnalysisSinkProxy@@UEAAJIIPEBUDWRITE_SCRIPT_ANALYSIS@@@Z
    virtual long SetScriptAnalysis(unsigned int, unsigned int, DWRITE_SCRIPT_ANALYSIS const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextAnalysisSinkProxy@@QEAA@PEAUITextAnalysisSink@PALText@@@Z
    TextAnalysisSinkProxy(::PALText::ITextAnalysisSink *);
};
