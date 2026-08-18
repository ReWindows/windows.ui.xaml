#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CLinearGradientBrushSpan {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushSpan@CLinearGradientBrushSpan@@SAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCLinearGradientBrush@@IPEAPEAUIBrushSpan@@@Z
    static long GetBrushSpan(CMILMatrix const *, XRECTF_WH const *, CLinearGradientBrush *, unsigned int, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTexture@CLinearGradientBrushSpan@@UEAAJW4XcpColorInterpolationMode@@@Z
    virtual long UpdateTexture(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLinearGradientBrushSpan@@UEAA@XZ
    virtual ~CLinearGradientBrushSpan();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLinearGradientBrushSpan@@MEAAJPEBVCMILMatrix@@PEBUXPOINTF@@PEAVCGradientStopCollection@@W4XcpGradientWrapMode@@W4XcpColorInterpolationMode@@I@Z
    virtual long Initialize(CMILMatrix const *, XPOINTF const *, CGradientStopCollection *, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeGradientPoints@CLinearGradientBrushSpan@@KAJPEBVCLinearGradientBrush@@PEBUXRECTF_WH@@PEAUXPOINTF@@22@Z
    static long RealizeGradientPoints(CLinearGradientBrush const *, XRECTF_WH const *, XPOINTF *, XPOINTF *, XPOINTF *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CLinearGradientBrushSpan@@EEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CLinearGradientBrushSpan@@EEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CLinearGradientBrushSpan@@EEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
};
