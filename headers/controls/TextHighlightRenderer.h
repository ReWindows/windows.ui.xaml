#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class TextHighlightRenderer {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWHighlightRect@TextHighlightRenderer@@YAJPEAVIContentRenderer@@PEAVCSolidColorBrush@@IPEAUXRECTF_WH@@@Z
    long HWHighlightRect(IContentRenderer *, CSolidColorBrush *, unsigned int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SWHighlightRect@TextHighlightRenderer@@YAJPEAVCCoreServices@@PEBVCMILMatrix@@MPEAVCLayer@@PEAVCSolidColorBrush@@IPEAUXRECTF_WH@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long SWHighlightRect(CCoreServices *, CMILMatrix const *, float, CLayer *, CSolidColorBrush *, unsigned int, XRECTF_WH *, WindissectOpaque &);
};
