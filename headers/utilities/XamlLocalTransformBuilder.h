#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class XamlLocalTransformBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDManipSharedTransform@XamlLocalTransformBuilder@@UEAAXPEAUIUnknown@@@Z
    virtual void ApplyDManipSharedTransform(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFacadeTransforms@XamlLocalTransformBuilder@@UEAAXPEAUFacadeTransformInfo@@@Z
    virtual void ApplyFacadeTransforms(FacadeTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFlowDirection@XamlLocalTransformBuilder@@UEAAX_N0M@Z
    virtual void ApplyFlowDirection(bool, bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyHandOffVisualTransform@XamlLocalTransformBuilder@@UEAAXPEAVCTransform@@UVector3@Numerics@Foundation@Windows@@@Z
    virtual void ApplyHandOffVisualTransform(CTransform *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOffsetAndDM@XamlLocalTransformBuilder@@UEAAXMMPEAUIDCompositionTransform@@MMMM_N@Z
    virtual void ApplyOffsetAndDM(float, float, IDCompositionTransform *, float, float, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRedirectionTransform@XamlLocalTransformBuilder@@UEAAXPEAURedirectionTransformInfo@@@Z
    virtual void ApplyRedirectionTransform(RedirectionTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderTransform@XamlLocalTransformBuilder@@UEAAXPEAVCTransform@@MM@Z
    virtual void ApplyRenderTransform(CTransform *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransitionTargetRenderTransform@XamlLocalTransformBuilder@@UEAAXPEAVCTransform@@MM@Z
    virtual void ApplyTransitionTargetRenderTransform(CTransform *, float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransform@XamlLocalTransformBuilder@@AEAAXPEAVCTransform@@MM@Z
    void ApplyTransform(CTransform *, float, float);
};
