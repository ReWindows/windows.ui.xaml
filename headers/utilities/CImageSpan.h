#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CImageSpan {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageSpan@@QEAA@XZ
    CImageSpan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CImageSpan@@UEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CImageSpan@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroAlpha@CImageSpan@@UEAA_NXZ
    virtual bool IsZeroAlpha();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CImageSpan@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CImageSpan@@UEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageSpan@@UEAA@XZ
    virtual ~CImageSpan();
};
