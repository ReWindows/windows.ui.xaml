#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CGradientBrushSpan {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CGradientBrushSpan@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroAlpha@CGradientBrushSpan@@UEAA_NXZ
    virtual bool IsZeroAlpha();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CGradientBrushSpan@@UEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTexture@CGradientBrushSpan@@UEAAJW4XcpColorInterpolationMode@@@Z
    virtual long UpdateTexture(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGradientBrushSpan@@UEAA@XZ
    virtual ~CGradientBrushSpan();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTexture@CGradientBrushSpan@@IEAAJPEBVCMILMatrix@@PEBUXPOINTF@@HPEAVCGradientStopCollection@@W4XcpGradientWrapMode@@W4XcpColorInterpolationMode@@IPEAV2@@Z
    long InitializeTexture(CMILMatrix const *, XPOINTF const *, int, CGradientStopCollection *, int, int, unsigned int, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTexture@CGradientBrushSpan@@IEAAJHW4XcpColorInterpolationMode@@@Z
    long UpdateTexture(int, int);
};
