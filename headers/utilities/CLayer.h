#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CLayer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLayer@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLayer@@SAJMPEAVCBrush@@PEAPEAV1@@Z
    static long Create(float, CBrush *, CLayer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateColors@CLayer@@UEAAXPEAUGENCOLORSDATA@@@Z
    virtual void GenerateColors(GENCOLORSDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushBlendAlpha@CLayer@@UEAAIXZ
    virtual unsigned int GetBrushBlendAlpha();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasClearType@CLayer@@UEAAHXZ
    virtual int HasClearType();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsLayer@CLayer@@UEAAIXZ
    virtual unsigned int IsLayer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeafBrush@CLayer@@UEAAHXZ
    virtual int IsLeafBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CLayer@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimpleLayer@CLayer@@UEAAIXZ
    virtual unsigned int IsSimpleLayer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroAlpha@CLayer@@UEAA_NXZ
    virtual bool IsZeroAlpha();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetOpacityMask@CLayer@@QEAAJPEAVCBrush@@PEAVCMILMatrix@@PEAUXRECTF_WH@@I@Z
    long NWSetOpacityMask(CBrush *, CMILMatrix *, XRECTF_WH *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLayer@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CLayer@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAVCBrush@@@Z
    virtual long SetBrush(CMILMatrix const *, XRECTF_WH const *, CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipEdgeStore@CLayer@@QEAAXPEAVCRasterizerEdgeStore@@@Z
    void SetClipEdgeStore(CRasterizerEdgeStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColor@CLayer@@UEAAHIHPEAI@Z
    virtual int SolidColor(unsigned int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBounds@CLayer@@QEAAXHHHH@Z
    void UpdateBounds(int, int, int, int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLayer@@IEAA@XZ
    CLayer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayer@@IEAA@XZ
    ~CLayer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWResetOpacityMaskData@CLayer@@AEAAXXZ
    void NWResetOpacityMaskData();
};
