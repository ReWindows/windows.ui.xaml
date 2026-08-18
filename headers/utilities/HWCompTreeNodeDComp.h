#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 46 member(s).
class HWCompTreeNodeDComp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompTreeNodeDComp@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@IIPEAPEAVHWCompTreeNode@@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, unsigned int, unsigned int, HWCompTreeNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardHandInVisual@HWCompTreeNodeDComp@@UEAAXXZ
    virtual void DiscardHandInVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardHandOffVisual@HWCompTreeNodeDComp@@UEAAXXZ
    virtual void DiscardHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisual@HWCompTreeNodeDComp@@UEAAJPEAVDCompTreeHost@@@Z
    virtual long EnsureVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GatherRedirectionTransforms@HWCompTreeNodeDComp@@QEAAJPEAVDCompTreeHost@@PEBVHWCompTreeNode@@PEAUIDCompVisual@DCompHelpers@@PEAPEAU45@PEAV?$xvector@V?$xref_ptr@UIDCompVisual@DCompHelpers@@@@@@PEAV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@_N@Z
    long GatherRedirectionTransforms(DCompTreeHost *, HWCompTreeNode const *, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisual@HWCompTreeNodeDComp@@UEAAPEAUIVisual@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IVisual * GetHandOffVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionDCompTransform@HWCompTreeNodeDComp@@QEAA?AV?$ComPtr@UIDCompositionTransform3D@@@WRL@Microsoft@@PEAVDCompTransformConversionContext@@@Z
    WindissectOpaque GetProjectionDCompTransform(DCompTransformConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform3DDCompTransform@HWCompTreeNodeDComp@@QEAA?AV?$ComPtr@UIDCompositionTransform3D@@@WRL@Microsoft@@PEAVDCompTransformConversionContext@@@Z
    WindissectOpaque GetTransform3DDCompTransform(DCompTransformConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisual@HWCompTreeNodeDComp@@UEBAPEAUIDCompVisual@DCompHelpers@@XZ
    virtual WindissectOpaque * GetVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHandInVisual@HWCompTreeNodeDComp@@UEBA_NXZ
    virtual bool HasHandInVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHandOffVisual@HWCompTreeNodeDComp@@UEBA_NXZ
    virtual bool HasHandOffVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisualEqualTo@HWCompTreeNodeDComp@@UEBA_NPEAUIDCompositionVisual2@@@Z
    virtual bool IsVisualEqualTo(IDCompositionVisual2*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowReuseHandOffVisual@HWCompTreeNodeDComp@@UEAAX_N@Z
    virtual void SetAllowReuseHandOffVisual(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementData@HWCompTreeNodeDComp@@UEAAJPEAVCWindowRenderTarget@@PEAVCUIElement@@_N@Z
    virtual long SetElementData(CWindowRenderTarget *, CUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandInVisual@HWCompTreeNodeDComp@@UEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    virtual void SetHandInVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisual@HWCompTreeNodeDComp@@UEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    virtual void SetHandOffVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacityAnimation@HWCompTreeNodeDComp@@QEAAXPEAUIDCompVisual@DCompHelpers@@@Z
    void SetOpacityAnimation(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionTargetOpacityAnimation@HWCompTreeNodeDComp@@QEAAXPEAUIDCompVisual@DCompHelpers@@@Z
    void SetTransitionTargetOpacityAnimation(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompTreeNodeDComp@@UEAA@XZ
    virtual ~HWCompTreeNodeDComp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupHandInVisual@HWCompTreeNodeDComp@@IEAAJXZ
    long CleanupHandInVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupVisualAtIndex@HWCompTreeNodeDComp@@IEAAJI@Z
    long CleanupVisualAtIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCrossProcessHandOffVisualInserted@HWCompTreeNodeDComp@@IEAAJXZ
    long EnsureCrossProcessHandOffVisualInserted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDManipData@HWCompTreeNodeDComp@@MEAAJXZ
    virtual long EnsureDManipData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandInVisualInserted@HWCompTreeNodeDComp@@IEAAJXZ
    long EnsureHandInVisualInserted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandOffVisualInserted@HWCompTreeNodeDComp@@IEAAJXZ
    long EnsureHandOffVisualInserted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransformVisualAndSetTransform@HWCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@PEAUIDCompositionTransform@@_N@Z
    virtual long EnsureTransformVisualAndSetTransform(DCompTreeHost *, IDCompositionTransform *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransformVisualAndSetTransform@HWCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@PEBVCMILMatrix@@_N@Z
    virtual long EnsureTransformVisualAndSetTransform(DCompTreeHost *, CMILMatrix const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisualAtIndex@HWCompTreeNodeDComp@@IEAAJPEAVDCompTreeHost@@I@Z
    long EnsureVisualAtIndex(DCompTreeHost *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildVisual@HWCompTreeNodeDComp@@IEAAPEAUIDCompVisual@DCompHelpers@@I@Z
    WindissectOpaque * GetChildVisual(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationClipTranslationX@HWCompTreeNodeDComp@@IEAAMXZ
    float GetDirectManipulationClipTranslationX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationClipTranslationY@HWCompTreeNodeDComp@@IEAAMXZ
    float GetDirectManipulationClipTranslationY();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationClipZoomFactorX@HWCompTreeNodeDComp@@IEAAMXZ
    float GetDirectManipulationClipZoomFactorX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationClipZoomFactorY@HWCompTreeNodeDComp@@IEAAMXZ
    float GetDirectManipulationClipZoomFactorY();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentVisual@HWCompTreeNodeDComp@@IEAAPEAUIDCompVisual@DCompHelpers@@I@Z
    WindissectOpaque * GetParentVisual(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWCompTreeNodeDComp@@IEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@II@Z
    HWCompTreeNodeDComp(CCoreServices *, CompositorTreeHost *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtBeginningInternal@HWCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@PEAVHWCompNode@@@Z
    virtual long InsertChildAtBeginningInternal(DCompTreeHost *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildInternal@HWCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@PEAVHWCompNode@@1PEAVCUIElement@@@Z
    virtual long InsertChildInternal(DCompTreeHost *, HWCompNode *, HWCompNode *, CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransformVisualRequired@HWCompTreeNodeDComp@@MEBA_NXZ
    virtual bool IsTransformVisualRequired() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushProperties@HWCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@_N1@Z
    virtual long PushProperties(DCompTreeHost *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildInternal@HWCompTreeNodeDComp@@MEAAJPEAVHWCompNode@@@Z
    virtual long RemoveChildInternal(HWCompNode *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositeMode@HWCompTreeNodeDComp@@IEAAJW4ElementCompositeMode@DirectUI@@@Z
    long SetCompositeMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectedAnimationRunning@HWCompTreeNodeDComp@@MEAAJ_NPEAPEAUIDCompositionVisual2@@@Z
    virtual long SetConnectedAnimationRunning(bool, IDCompositionVisual2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrependVisualClip@HWCompTreeNodeDComp@@MEAAJPEBVCMILMatrix@@@Z
    virtual long SetPrependVisualClip(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrependVisualTransform@HWCompTreeNodeDComp@@MEAAJPEBVCMILMatrix@@@Z
    virtual long SetPrependVisualTransform(CMILMatrix const *);
};
