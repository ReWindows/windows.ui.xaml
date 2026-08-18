#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class TextBoxBase_Internal {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestScrollViewerAncestor@TextBoxBase_Internal@@YAPEAVCScrollViewer@@PEAVCDependencyObject@@@Z
    CScrollViewer * GetClosestScrollViewerAncestor(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSendMessageHelper@TextBoxBase_Internal@@YAJPEAVCTextBoxBase@@II_K_JPEAIPEA_J@Z
    long TxSendMessageHelper(CTextBoxBase *, unsigned int, unsigned int, uint64_t, int64_t, unsigned int *, int64_t *);
};
