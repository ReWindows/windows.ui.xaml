#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CSolidColorSpan {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CSolidColorSpan@@UEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CSolidColorSpan@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroAlpha@CSolidColorSpan@@UEAA_NXZ
    virtual bool IsZeroAlpha();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CSolidColorSpan@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CSolidColorSpan@@UEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
};
