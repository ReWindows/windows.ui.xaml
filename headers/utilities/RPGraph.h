#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class RPGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeNodes@RPGraph@@QEAAJUXRECTF_WH@@@Z
    long ArrangeNodes(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDesiredSize@RPGraph@@QEAA?AUXSIZEF@@XZ
    XSIZEF CalculateDesiredSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureNodes@RPGraph@@QEAAJUXSIZEF@@@Z
    long MeasureNodes(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveConstraints@RPGraph@@QEAAJPEAVCDependencyObject@@PEAVCCoreServices@@0W4NameScopeType@NameScoping@Jupiter@@@Z
    long ResolveConstraints(CDependencyObject *, CCoreServices *, CDependencyObject *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RPGraph@@QEAA@XZ
    ~RPGraph();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccumulateNegativeDesiredHeight@RPGraph@@AEAAXPEAVRPNode@@M@Z
    void AccumulateNegativeDesiredHeight(RPNode *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccumulateNegativeDesiredWidth@RPGraph@@AEAAXPEAVRPNode@@M@Z
    void AccumulateNegativeDesiredWidth(RPNode *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccumulatePositiveDesiredHeight@RPGraph@@AEAAXPEAVRPNode@@M@Z
    void AccumulatePositiveDesiredHeight(RPNode *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccumulatePositiveDesiredWidth@RPGraph@@AEAAXPEAVRPNode@@M@Z
    void AccumulatePositiveDesiredWidth(RPNode *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeNodeHorizontally@RPGraph@@AEAAJPEAVRPNode@@UXSIZEF@@@Z
    long ArrangeNodeHorizontally(RPNode *, XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeNodeVertically@RPGraph@@AEAAJPEAVRPNode@@UXSIZEF@@@Z
    long ArrangeNodeVertically(RPNode *, XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateArrangeRectHorizontally@RPGraph@@AEAAXPEAVRPNode@@AEAM1@Z
    void CalculateArrangeRectHorizontally(RPNode *, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateArrangeRectVertically@RPGraph@@AEAAXPEAVRPNode@@AEAM1@Z
    void CalculateArrangeRectVertically(RPNode *, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMeasureRectHorizontally@RPGraph@@AEAAXPEAVRPNode@@UXSIZEF@@AEAM2@Z
    void CalculateMeasureRectHorizontally(RPNode *, XSIZEF, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMeasureRectVertically@RPGraph@@AEAAXPEAVRPNode@@UXSIZEF@@AEAM2@Z
    void CalculateMeasureRectVertically(RPNode *, XSIZEF, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkHorizontalAndVerticalLeaves@RPGraph@@AEAAXXZ
    void MarkHorizontalAndVerticalLeaves();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureNode@RPGraph@@AEAAJPEAVRPNode@@UXSIZEF@@@Z
    long MeasureNode(RPNode *, XSIZEF);
};
