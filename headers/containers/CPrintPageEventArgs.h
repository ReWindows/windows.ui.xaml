#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CPrintPageEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPageVisual@CPrintPageEventArgs@@UEAAJXZ
    virtual long ClearPageVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PageVisual@CPrintPageEventArgs@@QEAAJPEAVCUIElement@@@Z
    long put_PageVisual(CUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrintPageEventArgs@@UEAA@XZ
    virtual ~CPrintPageEventArgs();
};
