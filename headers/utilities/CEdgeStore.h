#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CEdgeStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendClip@CEdgeStore@@QEAAJAEBUXRECTF_WH@@PEBVCMILMatrix@@@Z
    long AppendClip(XRECTF_WH const &, CMILMatrix const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdgeStore@@QEAA@XZ
    CEdgeStore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInsideFrame@CEdgeStore@@QEAAIPEBVCMILMatrix@@IHHMM@Z
    unsigned int IsInsideFrame(CMILMatrix const *, unsigned int, int, int, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTranslation@CEdgeStore@@QEAAHPEBVCMILMatrix@@@Z
    int IsTranslation(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@CEdgeStore@@QEAAJPEAV1@@Z
    long Merge(CEdgeStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateEdgeStore@CEdgeStore@@QEAAJIPEBUXPOINTF@@PEBEPEBVCMILMatrix@@@Z
    long PopulateEdgeStore(unsigned int, XPOINTF const *, unsigned char const *, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateFromGlyphBitmap@CEdgeStore@@QEAAJPEAUIPALGlyphBitmap@@PEBVCMILMatrix@@@Z
    long PopulateFromGlyphBitmap(IPALGlyphBitmap *, CMILMatrix const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeStore@@AEAA@XZ
    ~CEdgeStore();
};
