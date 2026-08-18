#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CRenderTargetElementData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResources@CRenderTargetElementData@@QEAAXXZ
    void CleanupDeviceRelatedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHWRealizations@CRenderTargetElementData@@QEAAXXZ
    void ClearHWRealizations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRenderAsyncAction@CRenderTargetElementData@@QEAAXJ@Z
    void CompleteRenderAsyncAction(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderTargetElementData@@SAJPEAVCUIElement@@HHPEAVICoreAsyncAction@@PEAPEAV1@@Z
    static long Create(CUIElement *, int, int, ICoreAsyncAction *, CRenderTargetElementData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionPeer@CRenderTargetElementData@@QEAAJPEAVCUIElement@@PEAVHWCompTreeNode@@1PEAVHWCompNode@@_N@Z
    long EnsureCompositionPeer(CUIElement *, HWCompTreeNode *, HWCompTreeNode *, HWCompNode *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareCustomRenderersForDraw@CRenderTargetElementData@@QEAAJPEAVCWindowRenderTarget@@PEAI@Z
    long PrepareCustomRenderersForDraw(CWindowRenderTarget *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRenderAsyncAction@CRenderTargetElementData@@QEAAXXZ
    void ReleaseRenderAsyncAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CRenderTargetElementData@@QEAAXXZ
    void ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackCustomRenderer@CRenderTargetElementData@@QEAAJPEAVCWindowRenderTarget@@PEAVCUIElement@@PEAVHWCompNode@@@Z
    long TrackCustomRenderer(CWindowRenderTarget *, CUIElement *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMetrics@CRenderTargetElementData@@QEAAJXZ
    long UpdateMetrics();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderTargetElementData@@IEAA@PEAVCUIElement@@PEAVICoreAsyncAction@@HH@Z
    CRenderTargetElementData(CUIElement *, ICoreAsyncAction *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCompNodeMap@CRenderTargetElementData@@IEAAXXZ
    void ClearCompNodeMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCustomRendererCompNodes@CRenderTargetElementData@@IEAAXXZ
    void ClearCustomRendererCompNodes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRenderTargetElementData@@IEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetElementData@@MEAA@XZ
    virtual ~CRenderTargetElementData();
};
