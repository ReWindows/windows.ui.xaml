#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class CCompositeVectorBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeSize@CCompositeVectorBuffer@@QEAAXXZ
    void ComputeSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetHeight() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsCached@CCompositeVectorBuffer@@UEBAIXZ
    virtual unsigned int GetIsCached() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumHeight@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetMaximumHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumWidth@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetMaximumWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedHeight@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetRenderedHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedOffsetX@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetRenderedOffsetX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedOffsetY@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetRenderedOffsetY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedWidth@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetRenderedWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CCompositeVectorBuffer@@UEBAHXZ
    virtual int GetWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDimensions@CCompositeVectorBuffer@@UEBAIXZ
    virtual unsigned int HasDimensions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClearTypeEnabled@CCompositeVectorBuffer@@UEBAIXZ
    virtual unsigned int IsClearTypeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CCompositeVectorBuffer@@UEBAIXZ
    virtual unsigned int IsEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeFrame@CCompositeVectorBuffer@@UEAAJW4XSURFTYPE@@IPEAUXRECT_WH@@@Z
    virtual long RasterizeFrame(int, unsigned int, XRECT_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetWithoutRasterize@CCompositeVectorBuffer@@UEAAJXZ
    virtual long ResetWithoutRasterize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositeVectorBuffer@@UEAA@XZ
    virtual ~CCompositeVectorBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgeStoreInternal@CCompositeVectorBuffer@@MEAAJPEAVCRasterizerEdgeStore@@I@Z
    virtual long AddEdgeStoreInternal(CRasterizerEdgeStore *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CCompositeVectorBuffer@@MEAAXXZ
    virtual void Reset();
};
