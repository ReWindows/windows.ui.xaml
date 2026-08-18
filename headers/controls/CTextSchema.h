#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CTextSchema {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HyperlinkSupportsElement@CTextSchema@@SAJPEAVCTextElement@@PEAI@Z
    static long HyperlinkSupportsElement(CTextElement *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InlineCollectionSupportsElement@CTextSchema@@SAJPEAVCInlineCollection@@PEAVCTextElement@@PEAI@Z
    static long InlineCollectionSupportsElement(CInlineCollection *, CTextElement *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBlockSupportsElement@CTextSchema@@SAJPEAVCTextElement@@PEAI@Z
    static long TextBlockSupportsElement(CTextElement *, unsigned int *);
};
