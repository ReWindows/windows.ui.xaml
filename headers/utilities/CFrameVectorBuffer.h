#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class CFrameVectorBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgeStore@CFrameVectorBuffer@@QEAAJPEAVCRasterizerEdgeStore@@PEAVCLayer@@@Z
    long AddEdgeStore(CRasterizerEdgeStore *, CLayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgeStores@CFrameVectorBuffer@@QEAAJAEBV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@PEAVCLayer@@@Z
    long AddEdgeStores(WindissectOpaque const &, CLayer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCached@CFrameVectorBuffer@@UEBAIXZ
    virtual unsigned int GetIsCached() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumHeight@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetMaximumHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumWidth@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetMaximumWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedHeight@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetRenderedHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedOffsetX@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetRenderedOffsetX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedOffsetY@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetRenderedOffsetY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedWidth@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetRenderedWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CFrameVectorBuffer@@UEBAHXZ
    virtual int GetWidth() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasDimensions@CFrameVectorBuffer@@UEBAIXZ
    virtual unsigned int HasDimensions() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsClearTypeEnabled@CFrameVectorBuffer@@UEBAIXZ
    virtual unsigned int IsClearTypeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CFrameVectorBuffer@@UEBAIXZ
    virtual unsigned int IsEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OWSetSurface@CFrameVectorBuffer@@QEAAXPEAUIPALSurface@@I@Z
    void OWSetSurface(IPALSurface *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeFrame@CFrameVectorBuffer@@UEAAJW4XSURFTYPE@@IPEAUXRECT_WH@@@Z
    virtual long RasterizeFrame(int, unsigned int, XRECT_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRealizationSurface@CFrameVectorBuffer@@QEAAXXZ
    void ReleaseRealizationSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetWithoutRasterize@CFrameVectorBuffer@@UEAAJXZ
    virtual long ResetWithoutRasterize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameVectorBuffer@@UEAA@XZ
    virtual ~CFrameVectorBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgeStoreInternal@CFrameVectorBuffer@@MEAAJPEAVCRasterizerEdgeStore@@I@Z
    virtual long AddEdgeStoreInternal(CRasterizerEdgeStore *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBandVectorBuffers@CFrameVectorBuffer@@IEAAXXZ
    void DestroyBandVectorBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CFrameVectorBuffer@@MEAAXXZ
    virtual void Reset();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPreviousFrameDirtyRects@CFrameVectorBuffer@@AEAAXPEAVCBandVectorBuffer@@I@Z
    void InsertPreviousFrameDirtyRects(CBandVectorBuffer *, unsigned int);
};
