#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CDMContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDMContent@@SAJPEAVCUIElement@@W4XDMContentType@@PEAPEAV1@@Z
    static long Create(CUIElement *, int, CDMContent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryContentRelationship@CDMContent@@QEAAXPEAVCSecondaryContentRelationship@@@Z
    void SetSecondaryContentRelationship(CSecondaryContentRelationship *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDMContent@@MEAA@XZ
    virtual ~CDMContent();
};
