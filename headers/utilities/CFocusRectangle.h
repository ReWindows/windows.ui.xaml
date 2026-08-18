#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CFocusRectangle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFocusRectangle@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CFocusRectangle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CFocusRectangle@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStroke@CFocusRectangle@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetStroke() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeDashArray@CFocusRectangle@@UEBA?AV?$xref_ptr@VCDoubleCollection@@@@XZ
    virtual WindissectOpaque GetStrokeDashArray() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasStrokeDashArray@CFocusRectangle@@UEBA_NXZ
    virtual bool HasStrokeDashArray() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRender@CFocusRectangle@@QEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long NWRender(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CFocusRectangle@@QEAAJAEBUXRECTF_WH@@PEAVCBrush@@@Z
    long SetBounds(XRECTF_WH const &, CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStroke@CFocusRectangle@@UEAAJV?$xref_ptr@VCBrush@@@@@Z
    virtual long SetStroke(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeDashArray@CFocusRectangle@@UEAAJV?$xref_ptr@VCDoubleCollection@@@@@Z
    virtual long SetStrokeDashArray(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeDashOffset@CFocusRectangle@@QEAAJM@Z
    long SetStrokeDashOffset(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeThickness@CFocusRectangle@@QEAAJM@Z
    long SetStrokeThickness(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFocusRectangle@@UEAA@XZ
    virtual ~CFocusRectangle();
};
