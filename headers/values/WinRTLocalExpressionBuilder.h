#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class WinRTLocalExpressionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDManipSharedTransform@WinRTLocalExpressionBuilder@@UEAAXPEAUIUnknown@@@Z
    virtual void ApplyDManipSharedTransform(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFacadeTransforms@WinRTLocalExpressionBuilder@@UEAAXPEAUFacadeTransformInfo@@@Z
    virtual void ApplyFacadeTransforms(FacadeTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFlowDirection@WinRTLocalExpressionBuilder@@UEAAX_N0M@Z
    virtual void ApplyFlowDirection(bool, bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyHandOffVisualTransform@WinRTLocalExpressionBuilder@@UEAAXPEAVCTransform@@UVector3@Numerics@Foundation@Windows@@@Z
    virtual void ApplyHandOffVisualTransform(CTransform *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOffsetAndDM@WinRTLocalExpressionBuilder@@UEAAXMMPEAUIDCompositionTransform@@MMMM_N@Z
    virtual void ApplyOffsetAndDM(float, float, IDCompositionTransform *, float, float, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyProjectionExpression@WinRTLocalExpressionBuilder@@QEAAXPEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void ApplyProjectionExpression(::Windows::UI::Composition::IExpressionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRedirectionTransform@WinRTLocalExpressionBuilder@@UEAAXPEAURedirectionTransformInfo@@@Z
    virtual void ApplyRedirectionTransform(RedirectionTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderTransform@WinRTLocalExpressionBuilder@@UEAAXPEAVCTransform@@MM@Z
    virtual void ApplyRenderTransform(CTransform *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransform3DExpression@WinRTLocalExpressionBuilder@@QEAAXPEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void ApplyTransform3DExpression(::Windows::UI::Composition::IExpressionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransitionTargetRenderTransform@WinRTLocalExpressionBuilder@@UEAAXPEAVCTransform@@MM@Z
    virtual void ApplyTransitionTargetRenderTransform(CTransform *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLocalExpression@WinRTLocalExpressionBuilder@@QEAAXXZ
    void EnsureLocalExpression();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTLocalExpressionBuilder@@QEAA@PEAUICompositor@Composition@UI@Windows@@PEAUIVisual@234@PEAVWinRTLocalExpressionCache@@@Z
    WinRTLocalExpressionBuilder(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IVisual *, WinRTLocalExpressionCache *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTLocalExpressionBuilder@@UEAA@XZ
    virtual ~WinRTLocalExpressionBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransform@WinRTLocalExpressionBuilder@@AEAA?AV?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@PEAVCTransform@@MMPEBG@Z
    WindissectOpaque ApplyTransform(CTransform *, float, float, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePropertySet@WinRTLocalExpressionBuilder@@AEAAXXZ
    void EnsurePropertySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseUnnecessarySubParts@WinRTLocalExpressionBuilder@@AEAAXXZ
    void ReleaseUnnecessarySubParts();
};
