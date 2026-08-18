#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class LinkedRichTextBlockView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPosition@LinkedRichTextBlockView@@UEAAJIW4TextGravity@@PEAI@Z
    virtual long ContainsPosition(unsigned int, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPosition@LinkedRichTextBlockView@@UEAAHH@Z
    virtual int GetAdjustedPosition(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterIndex@LinkedRichTextBlockView@@UEAAHH@Z
    virtual int GetCharacterIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLength@LinkedRichTextBlockView@@UEAAIXZ
    virtual unsigned int GetContentLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStartPosition@LinkedRichTextBlockView@@UEAAIXZ
    virtual unsigned int GetContentStartPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIScopeForPosition@LinkedRichTextBlockView@@UEAAJIW4TextGravity@@PEAPEAVCFrameworkElement@@@Z
    virtual long GetUIScopeForPosition(unsigned int, int, CFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPosition@LinkedRichTextBlockView@@UEAAJIPEAI@Z
    virtual long IsAtInsertionPosition(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelPositionToTextPosition@LinkedRichTextBlockView@@UEAAJUXPOINTF@@IPEAIPEAW4TextGravity@@@Z
    virtual long PixelPositionToTextPosition(XPOINTF, unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPositionToPixelPosition@LinkedRichTextBlockView@@UEAAJIW4TextGravity@@PEAM111111@Z
    virtual long TextPositionToPixelPosition(unsigned int, int, float *, float *, float *, float *, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextRangeToTextBounds@LinkedRichTextBlockView@@UEAAJIIPEAIPEAPEAUXRECTF_WH@@@Z
    virtual long TextRangeToTextBounds(unsigned int, unsigned int, unsigned int *, XRECTF_WH * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextSelectionToTextBounds@LinkedRichTextBlockView@@UEAAJPEAUIJupiterTextSelection@@PEAIPEAPEAUXRECTF_WH@@@Z
    virtual long TextSelectionToTextBounds(IJupiterTextSelection *, unsigned int *, XRECTF_WH * *);
};
