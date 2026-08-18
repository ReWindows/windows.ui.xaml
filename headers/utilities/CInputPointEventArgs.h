#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CInputPointEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertGlobalPointToRelativePoint@CInputPointEventArgs@@QEAAJPEAVCUIElement@@PEAUPoint@Foundation@Windows@@@Z
    long ConvertGlobalPointToRelativePoint(CUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDeviceType@CInputPointEventArgs@@QEAA?AW4PointerDeviceType@DirectUI@@W4XPointerInputType@@@Z
    int GetPointerDeviceType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CInputPointEventArgs@@QEAAJPEAVCUIElement@@PEAUPoint@Foundation@Windows@@@Z
    long GetPosition(CUIElement *, WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPointToElement@CInputPointEventArgs@@IEAAJPEAVCUIElement@@PEAUPoint@Foundation@Windows@@@Z
    long TransformPointToElement(CUIElement *, WindissectOpaque *);
};
