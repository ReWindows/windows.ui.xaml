#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CRenderTargetBitmapManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderTargetBitmapManager@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CRenderTargetBitmapManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCompTrees@CRenderTargetBitmapManager@@QEAAJPEAVCWindowRenderTarget@@@Z
    long DrawCompTrees(CWindowRenderTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDrawCompleted@CRenderTargetBitmapManager@@QEAAJPEAUIPALWaitable@@@Z
    long NotifyDrawCompleted(IPALWaitable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetCurrentState@CRenderTargetBitmapManager@@QEAAJPEAUIRenderTargetElement@@@Z
    long OnSetCurrentState(IRenderTargetElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PickupForRender@CRenderTargetBitmapManager@@QEAAJXZ
    long PickupForRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderElements@CRenderTargetBitmapManager@@QEAAJPEAVHWWalk@@PEAVCWindowRenderTarget@@PEAI@Z
    long RenderElements(HWWalk *, CWindowRenderTarget *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitGetPixelsWorkItem@CRenderTargetBitmapManager@@QEAAJPEAUIPALByteAccessSurface@@PEAVIRenderTargetBitmapGetPixelsAsyncOperation@@PEAUIRenderTargetBitmapExecutorControl@@@Z
    long SubmitGetPixelsWorkItem(IPALByteAccessSurface *, IRenderTargetBitmapGetPixelsAsyncOperation *, IRenderTargetBitmapExecutorControl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWaitItem@CRenderTargetBitmapManager@@AEAAPEAURenderTargetElementWaitData@@PEAUIRenderTargetElement@@PEAUIPALWaitable@@@Z
    RenderTargetElementWaitData * AddWaitItem(IRenderTargetElement *, IPALWaitable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPickupForRender@CRenderTargetBitmapManager@@AEAAIPEAVCUIElement@@@Z
    unsigned int CanPickupForRender(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesHelper@CRenderTargetBitmapManager@@AEAAJI_N@Z
    long CleanupDeviceRelatedResourcesHelper(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupResourcesForBackgroundTask@CRenderTargetBitmapManager@@AEAAJXZ
    long CleanupResourcesForBackgroundTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromDrawingLists@CRenderTargetBitmapManager@@AEAAJPEAUIRenderTargetElement@@@Z
    long RemoveFromDrawingLists(IRenderTargetElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRenderTargetElement@CRenderTargetBitmapManager@@AEAAJPEAUIRenderTargetElement@@@Z
    long RemoveRenderTargetElement(IRenderTargetElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitWaitWorkItem@CRenderTargetBitmapManager@@AEAAJPEAUIPALWaitable@@@Z
    long SubmitWaitWorkItem(IPALWaitable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkCallback@CRenderTargetBitmapManager@@CAJPEAUIObject@@@Z
    static long WorkCallback(IObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetBitmapManager@@EEAA@XZ
    virtual ~CRenderTargetBitmapManager();
};
