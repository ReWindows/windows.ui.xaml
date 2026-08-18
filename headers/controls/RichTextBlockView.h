#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class RichTextBlockView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPosition@RichTextBlockView@@UEAAJIW4TextGravity@@PEAI@Z
    virtual long ContainsPosition(unsigned int, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPosition@RichTextBlockView@@UEAAHH@Z
    virtual int GetAdjustedPosition(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsCollectionForElement@RichTextBlockView@@SAJPEAUITextView@@PEAVCTextElement@@PEAIPEAPEAUXRECTF_WH@@@Z
    static long GetBoundsCollectionForElement(ITextView *, CTextElement *, unsigned int *, XRECTF_WH * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterIndex@RichTextBlockView@@UEAAHH@Z
    virtual int GetCharacterIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLength@RichTextBlockView@@UEAAIXZ
    virtual unsigned int GetContentLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStartPosition@RichTextBlockView@@UEAAIXZ
    virtual unsigned int GetContentStartPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIScopeForPosition@RichTextBlockView@@UEAAJIW4TextGravity@@PEAPEAVCFrameworkElement@@@Z
    virtual long GetUIScopeForPosition(unsigned int, int, CFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPosition@RichTextBlockView@@UEAAJIPEAI@Z
    virtual long IsAtInsertionPosition(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelPositionToTextPosition@RichTextBlockView@@UEAAJUXPOINTF@@IPEAIPEAW4TextGravity@@@Z
    virtual long PixelPositionToTextPosition(XPOINTF, unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPositionToPixelPosition@RichTextBlockView@@UEAAJIW4TextGravity@@PEAM111111@Z
    virtual long TextPositionToPixelPosition(unsigned int, int, float *, float *, float *, float *, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextRangeToTextBounds@RichTextBlockView@@UEAAJIIPEAIPEAPEAUXRECTF_WH@@@Z
    virtual long TextRangeToTextBounds(unsigned int, unsigned int, unsigned int *, XRECTF_WH * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextSelectionToTextBounds@RichTextBlockView@@UEAAJPEAUIJupiterTextSelection@@PEAIPEAPEAUXRECTF_WH@@@Z
    virtual long TextSelectionToTextBounds(IJupiterTextSelection *, unsigned int *, XRECTF_WH * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPositionToPage@RichTextBlockView@@AEBAIIPEAI@Z
    unsigned int TransformPositionToPage(unsigned int, unsigned int *) const;
};
