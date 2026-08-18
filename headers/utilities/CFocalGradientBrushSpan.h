#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CFocalGradientBrushSpan {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushSpan@CFocalGradientBrushSpan@@SAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCRadialGradientBrush@@PEAPEAUIBrushSpan@@@Z
    static long GetBrushSpan(CMILMatrix const *, XRECTF_WH const *, CRadialGradientBrush *, IBrushSpan * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcFocalData@CFocalGradientBrushSpan@@CAXPEBVCMILMatrix@@PEBUXPOINTF@@1W4XcpGradientWrapMode@@PEAV1@@Z
    static void CalcFocalData(CMILMatrix const *, XPOINTF const *, XPOINTF const *, int, CFocalGradientBrushSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CFocalGradientBrushSpan@@EEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFocalGradientBrushSpan@@AEAAJPEBVCMILMatrix@@PEBUXPOINTF@@PEAVCGradientStopCollection@@W4XcpGradientWrapMode@@W4XcpColorInterpolationMode@@1@Z
    long Initialize(CMILMatrix const *, XPOINTF const *, CGradientStopCollection *, int, int, XPOINTF const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CFocalGradientBrushSpan@@EEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CFocalGradientBrushSpan@@EEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPointFromWorldHPCToGradientCircle@CFocalGradientBrushSpan@@AEAAXPEBVCMILMatrix@@PEBUXPOINTF@@PEAM2@Z
    void TransformPointFromWorldHPCToGradientCircle(CMILMatrix const *, XPOINTF const *, float *, float *);
};
