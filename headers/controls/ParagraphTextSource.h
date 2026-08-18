#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class ParagraphTextSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedElementHost@ParagraphTextSource@@UEBAPEAUIEmbeddedElementHost@@XZ
    virtual IEmbeddedElementHost * GetEmbeddedElementHost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextRun@ParagraphTextSource@@UEAA?AW4EnumImpl@Result@RichTextServices@@IPEAPEAVTextRun@4@@Z
    virtual int GetTextRun(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSurrogateCRLF@ParagraphTextSource@@QEBAJIPEAI@Z
    long IsInSurrogateCRLF(unsigned int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSurrogateCRLF@ParagraphTextSource@@SAJPEAVCInlineCollection@@IPEAI@Z
    static long IsInSurrogateCRLF(CInlineCollection *, unsigned int, unsigned int *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormatControlCharacter@ParagraphTextSource@@CAIG@Z
    static unsigned int IsFormatControlCharacter(unsigned short);
};
