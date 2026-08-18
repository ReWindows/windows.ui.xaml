#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class Typography {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenTypeFeatureSelections@Typography@@QEBAJPEAJPEAPEAVOpenTypeFeatureSelection@@@Z
    long GetOpenTypeFeatureSelections(long *, OpenTypeFeatureSelection * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypographyDefault@Typography@@QEBAIXZ
    unsigned int IsTypographyDefault() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypographySame@Typography@@QEBAIPEBU1@@Z
    unsigned int IsTypographySame(Typography const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDWriteTypographyFeatures@Typography@@QEBAJPEAUIDWriteTypography@@@Z
    long UpdateDWriteTypographyFeatures(IDWriteTypography *) const;
};
