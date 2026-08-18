#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class RPNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arrange@RPNode@@QEAAJUXRECTF_WH@@@Z
    long Arrange(XRECTF_WH);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredHeight@RPNode@@QEBAMXZ
    float GetDesiredHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredWidth@RPNode@@QEBAMXZ
    float GetDesiredWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBottomAnchored@RPNode@@QEAA_NXZ
    bool IsBottomAnchored();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontalCenterAnchored@RPNode@@QEAA_NXZ
    bool IsHorizontalCenterAnchored();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeftAnchored@RPNode@@QEAA_NXZ
    bool IsLeftAnchored();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightAnchored@RPNode@@QEAA_NXZ
    bool IsRightAnchored();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopAnchored@RPNode@@QEAA_NXZ
    bool IsTopAnchored();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerticalCenterAnchored@RPNode@@QEAA_NXZ
    bool IsVerticalCenterAnchored();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Measure@RPNode@@QEAAJUXSIZEF@@@Z
    long Measure(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarkNeighborsAsHorizontalOrVerticalLeaves@RPNode@@QEAAXXZ
    void UnmarkNeighborsAsHorizontalOrVerticalLeaves();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@RPNode@@AEBAXW4KnownPropertyIndex@@PEAVCValue@@@Z
    void GetPropertyValue(int, CValue *) const;
};
