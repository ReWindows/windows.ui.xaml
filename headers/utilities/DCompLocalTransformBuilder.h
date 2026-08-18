#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class DCompLocalTransformBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDManipSharedTransform@DCompLocalTransformBuilder@@UEAAXPEAUIUnknown@@@Z
    virtual void ApplyDManipSharedTransform(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFacadeTransforms@DCompLocalTransformBuilder@@UEAAXPEAUFacadeTransformInfo@@@Z
    virtual void ApplyFacadeTransforms(FacadeTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFlowDirection@DCompLocalTransformBuilder@@UEAAX_N0M@Z
    virtual void ApplyFlowDirection(bool, bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyHandOffVisualTransform@DCompLocalTransformBuilder@@UEAAXPEAVCTransform@@UVector3@Numerics@Foundation@Windows@@@Z
    virtual void ApplyHandOffVisualTransform(CTransform *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOffsetAndDM@DCompLocalTransformBuilder@@UEAAXMMPEAUIDCompositionTransform@@MMMM_N@Z
    virtual void ApplyOffsetAndDM(float, float, IDCompositionTransform *, float, float, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRedirectionTransform@DCompLocalTransformBuilder@@UEAAXPEAURedirectionTransformInfo@@@Z
    virtual void ApplyRedirectionTransform(RedirectionTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderTransform@DCompLocalTransformBuilder@@UEAAXPEAVCTransform@@MM@Z
    virtual void ApplyRenderTransform(CTransform *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransitionTargetRenderTransform@DCompLocalTransformBuilder@@UEAAXPEAVCTransform@@MM@Z
    virtual void ApplyTransitionTargetRenderTransform(CTransform *, float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompLocalTransformBuilder@@QEAA@PEAUIDCompositionDesktopDevicePartner@@@Z
    DCompLocalTransformBuilder(IDCompositionDesktopDevicePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputTransform@DCompLocalTransformBuilder@@QEAAXPEAPEAUIDCompositionTransform@@@Z
    void GetOutputTransform(IDCompositionTransform * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompLocalTransformBuilder@@UEAA@XZ
    virtual ~DCompLocalTransformBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDMOffset@DCompLocalTransformBuilder@@AEAAXMM@Z
    void ApplyDMOffset(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDMZoom@DCompLocalTransformBuilder@@AEAAXMM@Z
    void ApplyDMZoom(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransform@DCompLocalTransformBuilder@@AEAAXPEAVCTransform@@MM@Z
    void ApplyTransform(CTransform *, float, float);
};
