#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class TextBlockViewHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustCharacterIndexByPosition@TextBlockViewHelpers@@SA_NPEAVCInlineCollection@@AEAH1@Z
    static bool AdjustCharacterIndexByPosition(CInlineCollection *, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionByCharacterCount@TextBlockViewHelpers@@SA_NPEAVCInlineCollection@@AEAH1@Z
    static bool AdjustPositionByCharacterCount(CInlineCollection *, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindIUCPositionInInlines@TextBlockViewHelpers@@SA_NPEAVCInlineCollection@@PEAVCInlineUIContainer@@AEAI@Z
    static bool FindIUCPositionInInlines(CInlineCollection *, CInlineUIContainer *, unsigned int &);
};
