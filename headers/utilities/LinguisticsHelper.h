#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class LinguisticsHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpeningPunctuation@LinguisticsHelper@@QEBA_NG@Z
    bool IsOpeningPunctuation(unsigned short) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LinguisticsHelper@@QEAA@XZ
    ~LinguisticsHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEastAsianTag@LinguisticsHelper@@AEBA_NPEBG@Z
    bool IsEastAsianTag(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullWidth@LinguisticsHelper@@AEBA_NG@Z
    bool IsFullWidth(unsigned short) const;
};
