#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class TextBlockView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPosition@TextBlockView@@UEAAJIW4TextGravity@@PEAI@Z
    virtual long ContainsPosition(unsigned int, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPosition@TextBlockView@@UEAAHH@Z
    virtual int GetAdjustedPosition(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterIndex@TextBlockView@@UEAAHH@Z
    virtual int GetCharacterIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLength@TextBlockView@@UEAAIXZ
    virtual unsigned int GetContentLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStartPosition@TextBlockView@@UEAAIXZ
    virtual unsigned int GetContentStartPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIScopeForPosition@TextBlockView@@UEAAJIW4TextGravity@@PEAPEAVCFrameworkElement@@@Z
    virtual long GetUIScopeForPosition(unsigned int, int, CFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPosition@TextBlockView@@UEAAJIPEAI@Z
    virtual long IsAtInsertionPosition(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelPositionToTextPosition@TextBlockView@@UEAAJUXPOINTF@@IPEAIPEAW4TextGravity@@@Z
    virtual long PixelPositionToTextPosition(XPOINTF, unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPositionToPixelPosition@TextBlockView@@UEAAJIW4TextGravity@@PEAM111111@Z
    virtual long TextPositionToPixelPosition(unsigned int, int, float *, float *, float *, float *, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextRangeToTextBounds@TextBlockView@@UEAAJIIPEAIPEAPEAUXRECTF_WH@@@Z
    virtual long TextRangeToTextBounds(unsigned int, unsigned int, unsigned int *, XRECTF_WH * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextSelectionToTextBounds@TextBlockView@@UEAAJPEAUIJupiterTextSelection@@PEAIPEAPEAUXRECTF_WH@@@Z
    virtual long TextSelectionToTextBounds(IJupiterTextSelection *, unsigned int *, XRECTF_WH * *);
};
