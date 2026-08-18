#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CPerspectiveTextureSpan {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPerspectiveTextureSpan@@SAJPEAUIPALSurface@@AEBUXVERTEX25D@@11PEAPEAV1@@Z
    static long Create(IPALSurface *, XVERTEX25D const &, XVERTEX25D const &, XVERTEX25D const &, CPerspectiveTextureSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CPerspectiveTextureSpan@@UEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CPerspectiveTextureSpan@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroAlpha@CPerspectiveTextureSpan@@UEAA_NXZ
    virtual bool IsZeroAlpha();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CPerspectiveTextureSpan@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CPerspectiveTextureSpan@@UEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerspectiveTextureSpan@@UEAA@XZ
    virtual ~CPerspectiveTextureSpan();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPerspectiveTextureSpan@@AEAAJAEBUXVERTEX25D@@00@Z
    long Initialize(XVERTEX25D const &, XVERTEX25D const &, XVERTEX25D const &);
};
