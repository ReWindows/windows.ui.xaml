#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CBoundedHitTestVisitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementHit@CBoundedHitTestVisitor@@QEAAJPEAVCUIElement@@AEBVHitTestPolygon@@IPEAW4Value@BoundsWalkHitResult@@@Z
    long OnElementHit(CUIElement *, HitTestPolygon const &, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementHit@CBoundedHitTestVisitor@@QEAAJPEAVCUIElement@@AEBUXPOINTF@@IPEAW4Value@BoundsWalkHitResult@@@Z
    long OnElementHit(CUIElement *, XPOINTF const &, unsigned int, int *);
};
