#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 48 member(s).
class DCompVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DCompVisual@@SAJPEAVDCompTreeHost@@PEAVHWCompNode@@PEAPEAV1@@Z
    static long Create(DCompTreeHost *, HWCompNode *, DCompVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEx@DCompVisual@@SAXPEAVDCompTreeHost@@PEAVHWCompNode@@PEAUIDCompositionVisual2@@PEAPEAV1@@Z
    static void CreateEx(DCompTreeHost *, HWCompNode *, IDCompositionVisual2*, DCompVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompSharedTarget@DCompVisual@@QEAAJPEAPEAUIDCompositionTarget@@@Z
    long GetDCompSharedTarget(IDCompositionTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompVisual@DCompVisual@@UEBAPEAUIDCompositionVisual2@@XZ
    virtual IDCompositionVisual2* GetDCompVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionOnMainDevice@DCompVisual@@UEBAPEAUIDCompositionTransform3D@@XZ
    virtual IDCompositionTransform3D * GetProjectionOnMainDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedDCompVisualHandle@DCompVisual@@UEAAJPEA_J@Z
    virtual long GetSharedDCompVisualHandle(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformOnMainDevice@DCompVisual@@UEBAPEAUIDCompositionTransform@@XZ
    virtual IDCompositionTransform * GetTransformOnMainDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCrossDeviceSharedVisual@DCompVisual@@UEAA_NXZ
    virtual bool HasCrossDeviceSharedVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@DCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@0@Z
    virtual long InsertChild(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtBeginning@DCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@@Z
    virtual long InsertChildAtBeginning(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCrossDeviceSharedVisual@DCompVisual@@UEAAJPEAUIDCompositionVisual2@@@Z
    virtual long InsertCrossDeviceSharedVisual(IDCompositionVisual2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertWinRTChildAtTop@DCompVisual@@UEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long InsertWinRTChildAtTop(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmulated@DCompVisual@@UEAAIXZ
    virtual unsigned int IsEmulated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllWinRTChildren@DCompVisual@@UEAAJXZ
    virtual long RemoveAllWinRTChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@DCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@@Z
    virtual long RemoveChild(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWinRTChild@DCompVisual@@UEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long RemoveWinRTChild(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@DCompVisual@@UEAAJPEBUXRECTF_WH@@@Z
    virtual long SetClip(XRECTF_WH const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositeMode@DCompVisual@@UEAAJW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    virtual long SetCompositeMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompOpacity@DCompVisual@@UEAAXPEAUIDCompositionAnimation@@@Z
    virtual void SetDCompOpacity(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompProjection@DCompVisual@@UEAAXPEAUIDCompositionTransform3D@@@Z
    virtual void SetDCompProjection(IDCompositionTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompTransform@DCompVisual@@UEAAJPEAUIDCompositionTransform@@@Z
    virtual long SetDCompTransform(IDCompositionTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompTransforms@DCompVisual@@UEAAXPEBV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@PEAUIDCompositionTransform@@@Z
    virtual void SetDCompTransforms(WindissectOpaque const *, IDCompositionTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHitTestVisible@DCompVisual@@UEAAX_N@Z
    virtual void SetIsHitTestVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPixelSnappingEnabled@DCompVisual@@UEAAX_N@Z
    virtual void SetIsPixelSnappingEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMedia@DCompVisual@@UEAAJPEAX@Z
    virtual long SetMedia(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@DCompVisual@@UEAAJM@Z
    virtual long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimitiveGroup@DCompVisual@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@@Z
    virtual long SetPrimitiveGroup(IDCompositionPrimitiveGroupPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjection@DCompVisual@@UEAAJPEBVCMILMatrix4x4@@@Z
    virtual long SetProjection(CMILMatrix4x4const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedirectionProjection@DCompVisual@@UEAAJPEAUIDCompositionTransform3D@@@Z
    virtual long SetRedirectionProjection(IDCompositionTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@DCompVisual@@UEAAJPEAVCSwapChainElement@@PEAUIUnknown@@MMI1@Z
    virtual long SetSwapChain(CSwapChainElement *, IUnknown *, float, float, unsigned int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChainSurface@DCompVisual@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSwapChainSurface(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@DCompVisual@@UEAAJPEBVCMILMatrix@@@Z
    virtual long SetTransform(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParent@DCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@@Z
    virtual long SetTransformParent(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransforms@DCompVisual@@UEAAJPEBV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@PEBVCMILMatrix@@I@Z
    virtual long SetTransforms(WindissectOpaque const *, CMILMatrix const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@DCompVisual@@UEAAJI@Z
    virtual long SetVisible(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompVisual@@AEAA@PEAVDCompTreeHost@@@Z
    DCompVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEffectGroup@DCompVisual@@AEAAXXZ
    void EnsureEffectGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSharedDCompVisual@DCompVisual@@AEAAJXZ
    long EnsureSharedDCompVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransforms@DCompVisual@@AEAAJPEAPEAUIDCompositionTransform@@PEAPEAUIDCompositionMatrixTransform@@PEAI@Z
    long EnsureTransforms(IDCompositionTransform * *, IDCompositionMatrixTransform * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DCompVisual@@AEAAJPEAVHWCompNode@@@Z
    long Initialize(HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetProjection@DCompVisual@@AEAAXXZ
    void ResetProjection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTransform@DCompVisual@@AEAAXXZ
    void ResetTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentInternal@DCompVisual@@AEAAJPEAUIUnknown@@@Z
    long SetContentInternal(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreIndependentInputSource@DCompVisual@@AEAAJPEAUIUnknown@@@Z
    long SetCoreIndependentInputSource(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjectionInternal@DCompVisual@@AEAAJPEAUIDCompositionTransform3D@@@Z
    long SetProjectionInternal(IDCompositionTransform3D *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompVisual@@EEAA@XZ
    virtual ~DCompVisual();
};
