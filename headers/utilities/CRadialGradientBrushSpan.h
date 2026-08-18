#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CRadialGradientBrushSpan {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushSpan@CRadialGradientBrushSpan@@SAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCRadialGradientBrush@@PEAPEAUIBrushSpan@@@Z
    static long GetBrushSpan(CMILMatrix const *, XRECTF_WH const *, CRadialGradientBrush *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTexture@CRadialGradientBrushSpan@@UEAAJW4XcpColorInterpolationMode@@@Z
    virtual long UpdateTexture(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialGradientBrushSpan@@UEAA@XZ
    virtual ~CRadialGradientBrushSpan();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRadialGradientBrushSpan@@IEAAJPEBVCMILMatrix@@PEBUXPOINTF@@PEAVCGradientStopCollection@@W4XcpGradientWrapMode@@W4XcpColorInterpolationMode@@@Z
    long Initialize(CMILMatrix const *, XPOINTF const *, CGradientStopCollection *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeGradientPoints@CRadialGradientBrushSpan@@KAJPEBVCRadialGradientBrush@@PEBUXRECTF_WH@@PEAUXPOINTF@@2MM22@Z
    static long RealizeGradientPoints(CRadialGradientBrush const *, XRECTF_WH const *, XPOINTF *, XPOINTF *, float, float, XPOINTF *, XPOINTF *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CRadialGradientBrushSpan@@EEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CRadialGradientBrushSpan@@EEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CRadialGradientBrushSpan@@EEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
};
