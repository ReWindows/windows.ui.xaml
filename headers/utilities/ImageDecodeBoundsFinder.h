#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ImageDecodeBoundsFinder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResult@ImageDecodeBoundsFinder@@QEAAXW4Result@1@@Z
    void AddResult(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDecodeBoundsForUIElement@ImageDecodeBoundsFinder@@QEAAJPEAVCUIElement@@PEAVCImageBrush@@@Z
    long ComputeDecodeBoundsForUIElement(CUIElement *, CImageBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindReasonableDecodeBounds@ImageDecodeBoundsFinder@@QEAAJXZ
    long FindReasonableDecodeBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalResult@ImageDecodeBoundsFinder@@QEAA?AW4Result@1@XZ
    int GetFinalResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFallbackReason@ImageDecodeBoundsFinder@@SAXPEAVCImageSource@@W4FallbackReason@1@@Z
    static void TraceFallbackReason(CImageSource *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsesSoftwareRendering@ImageDecodeBoundsFinder@@QEAA_NPEAVCUIElement@@@Z
    bool UsesSoftwareRendering(CUIElement *);
};
