#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CListViewBaseItemSecondaryChrome {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CListViewBaseItemSecondaryChrome@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CListViewBaseItemSecondaryChrome@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CListViewBaseItemSecondaryChrome@@UEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CListViewBaseItemSecondaryChrome@@UEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareEarmarkPath@CListViewBaseItemSecondaryChrome@@QEAAJXZ
    long PrepareEarmarkPath();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CListViewBaseItemSecondaryChrome@@MEAA@XZ
    virtual ~CListViewBaseItemSecondaryChrome();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateEdgesCommon@CListViewBaseItemSecondaryChrome@@AEAAJPEAVCFrameVectorBuffer@@PEBVCMILMatrix@@IIIMPEAVCLayer@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long GenerateEdgesCommon(CFrameVectorBuffer *, CMILMatrix const *, unsigned int, unsigned int, unsigned int, float, CLayer *, WindissectOpaque &);
};
