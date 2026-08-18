#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class KeyTipHelper {
public:
    class VisualProperties;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@KeyTipHelper@@YAJPEAVCBorder@@PEAVCDependencyObject@@PEAUKeyTip@@@Z
    long SetPosition(CBorder *, CDependencyObject *, KeyTip *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@KeyTipHelper@@YAJPEAVCTextBlock@@PEAVCDependencyObject@@I@Z
    long SetText(CTextBlock *, CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupBorder@KeyTipHelper@@YAJPEAVCBorder@@AEBUVisualProperties@1@@Z
    long SetupBorder(CBorder *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupPopup@KeyTipHelper@@YAJPEAVCPopup@@@Z
    long SetupPopup(CPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupTextBlock@KeyTipHelper@@YAJPEAVCTextBlock@@AEBUVisualProperties@1@@Z
    long SetupTextBlock(CTextBlock *, WindissectOpaque const &);
};
