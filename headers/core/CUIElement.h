#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 568 member(s).
class CUIElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CUIElement@@UEAAJPEAV1@@Z
    virtual long AddChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CUIElement@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLayoutTransitionRenderer@CUIElement@@QEAAJPEAVCLayoutTransitionElement@@@Z
    long AddLayoutTransitionRenderer(CLayoutTransitionElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustBoundingRectToRoot@CUIElement@@QEAAJPEAUXRECTF_WH@@@Z
    long AdjustBoundingRectToRoot(XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDrop@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long AllowDrop(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsHandlerWhenNotLive@CUIElement@@UEBA_NHW4KnownEventIndex@@@Z
    virtual bool AllowsHandlerWhenNotLive(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppliesFlattening@CUIElement@@QEBA_NXZ
    bool AppliesFlattening() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllAncestorsVisible@CUIElement@@QEAAIXZ
    unsigned int AreAllAncestorsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreChildrenInLogicalTree@CUIElement@@UEAA_NXZ
    virtual bool AreChildrenInLogicalTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreFacadesInUse@CUIElement@@QEBA_NXZ
    bool AreFacadesInUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arrange@CUIElement@@QEAAJUXRECTF_WH@@@Z
    long Arrange(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachListenerToPrependVisual@CUIElement@@QEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    void AttachListenerToPrependVisual(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeforeSetLocalOpacity@CUIElement@@QEAA_NM@Z
    bool BeforeSetLocalOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestInternal@CUIElement@@UEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestInternal(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestInternal@CUIElement@@UEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestInternal(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoView@CUIElement@@QEAAXUXRECTF_WH@@_N11NNNN@Z
    void BringIntoView(XRECTF_WH, bool, bool, bool, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheVisibleBounds@CUIElement@@QEAAJPEBUXRECTF_RB@@@Z
    long CacheVisibleBounds(XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBoundsForTransform3D@CUIElement@@QEAAXPEBVHitTestParams@@_NPEAUXRECTF_RB@@@Z
    void CalculateBoundsForTransform3D(HitTestParams const *, bool, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDrag@CUIElement@@QEAAJPEA_N@Z
    long CanDrag(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDrag@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanDrag(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CUIElement@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanModifyChildrenCollection@CUIElement@@QEBA_NXZ
    bool CanModifyChildrenCollection() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanReleaseWUCExpression@CUIElement@@QEBA_NW4KnownPropertyIndex@@@Z
    bool CanReleaseWUCExpression(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseHandOffVisualTransformGroupForLocalTransform@CUIElement@@QEBA_NXZ
    bool CanUseHandOffVisualTransformGroupForLocalTransform() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelImplicitAnimation@CUIElement@@QEAAXW4ImplicitAnimationType@@@Z
    void CancelImplicitAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePointer@CUIElement@@QEAAJPEAVCPointer@@PEAI@Z
    long CapturePointer(CPointer *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAutomaticAutomationChanges@CUIElement@@QEAAJXZ
    long CheckAutomaticAutomationChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CUIElement@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHandOffVisualClip@CUIElement@@QEAAXXZ
    void ClearHandOffVisualClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPCRenderData@CUIElement@@UEAAXXZ
    virtual void ClearPCRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCOffsetExpression@CUIElement@@QEAAXXZ
    void ClearWUCOffsetExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCOpacityExpression@CUIElement@@QEAAXXZ
    void ClearWUCOpacityExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CUIElement@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceIsEnabled@CUIElement@@UEAAJ_N0@Z
    virtual long CoerceIsEnabled(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDepthInSubtree@CUIElement@@QEAA_NXZ
    bool ComputeDepthInSubtree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEffectiveVisibility@CUIElement@@QEAA?AUEffectiveVisibilityInfo@@XZ
    EffectiveVisibilityInfo ComputeEffectiveVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeKeepVisible@CUIElement@@QEAA_NXZ
    bool ComputeKeepVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeRealizationTransform@CUIElement@@QEAAJPEAVCTransformToRoot@@@Z
    long ComputeRealizationTransform(CTransformToRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVisibleBoundsOfRect@CUIElement@@QEAAJPEBUXRECTF_RB@@0PEAUXPOINTF@@I@Z
    long ComputeVisibleBoundsOfRect(XRECTF_RB const *, XRECTF_RB const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackingCompositionObjectForFacade@CUIElement@@QEAAXPEAUICompositor@Composition@UI@Windows@@PEAPEAUICompositionObject@345@PEAPEAUIFacadePropertyListener@@@Z
    void CreateBackingCompositionObjectForFacade(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionObject * *, IFacadePropertyListener * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDirectManipulationContainer@CUIElement@@QEAAJXZ
    long CreateDirectManipulationContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateImageSurfaceWrapperOverPixels@CUIElement@@QEAAJPEAVCWindowRenderTarget@@PEAPEAVImageSurfaceWrapper@@@Z
    long CreateImageSurfaceWrapperOverPixels(CWindowRenderTarget *, ImageSurfaceWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTemporaryCompositionPeer@CUIElement@@QEAAJPEAVCWindowRenderTarget@@PEAVHWCompTreeNode@@PEBVCMILMatrix@@_NPEAPEAV3@@Z
    long CreateTemporaryCompositionPeer(CWindowRenderTarget *, HWCompTreeNode *, CMILMatrix const *, bool, HWCompTreeNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DPopClipHelper@CUIElement@@SAJPEAUIPALAcceleratedRenderTarget@@II@Z
    static long D2DPopClipHelper(IPALAcceleratedRenderTarget *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DSetUpClipHelper@CUIElement@@SAJPEAUIPALAcceleratedRenderTarget@@IPEAUIPALAcceleratedGeometry@@PEBUXRECTF_RB@@PEAI33@Z
    static long D2DSetUpClipHelper(IPALAcceleratedRenderTarget *, unsigned int, IPALAcceleratedGeometry *, XRECTF_RB const *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteLayoutTransitionStorage@CUIElement@@QEAAJXZ
    long DeleteLayoutTransitionStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachListenerFromPrependVisual@CUIElement@@QEAAXXZ
    void DetachListenerFromPrependVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachWUCPropertyListenerFromWUCClip@CUIElement@@QEAAXXZ
    void DetachWUCPropertyListenerFromWUCClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardHandOffVisual@CUIElement@@QEAAXXZ
    void DiscardHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChildrenCollection@CUIElement@@QEAAJXZ
    long EnsureChildrenCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionPeer@CUIElement@@SAJPEAVDCompTreeHost@@PEAVHWCompTreeNode@@1PEAVHWCompNode@@PEAUIVisual@Composition@UI@Windows@@PEAV1@_NPEAPEAV3@@Z
    static long EnsureCompositionPeer(DCompTreeHost *, HWCompTreeNode *, HWCompTreeNode *, HWCompNode *, ::Windows::UI::Composition::IVisual *, CUIElement *, bool, HWCompTreeNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLayoutTransitionStorage@CUIElement@@SAJPEAVCDependencyObject@@PEBVCDependencyProperty@@_N@Z
    static long EnsureLayoutTransitionStorage(CDependencyObject *, CDependencyProperty const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTranslationInitialized@CUIElement@@SAXPEAUIUnknown@@@Z
    static void EnsureTranslationInitialized(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CUIElement@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCOffsetExpression@CUIElement@@QEAAXPEAVWinRTExpressionConversionContext@@@Z
    void EnsureWUCOffsetExpression(WinRTExpressionConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCOpacityExpression@CUIElement@@QEAAXPEAVWinRTExpressionConversionContext@@@Z
    void EnsureWUCOpacityExpression(WinRTExpressionConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateIsRightToLeft@CUIElement@@UEAAXXZ
    virtual void EvaluateIsRightToLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstUIElementStrictOnlyPropertyInUse@CUIElement@@QEBAPEBGXZ
    unsigned short const * FindFirstUIElementStrictOnlyPropertyInUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPendingKeepVisibleOperations@CUIElement@@UEAAXXZ
    virtual void FlushPendingKeepVisibleOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Focus@CUIElement@@QEAAJW4FocusState@DirectUI@@_NPEA_NW4FocusNavigationDirection@3@@Z
    long Focus(int, bool, bool *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPChildren@CUIElement@@UEAAIPEAPEAPEAVCAutomationPeer@@@Z
    virtual unsigned int GetAPChildren(CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPChildrenCount@CUIElement@@QEAAIXZ
    unsigned int GetAPChildrenCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPPopupChildren@CUIElement@@QEAAIIPEAPEAVCAutomationPeer@@@Z
    unsigned int GetAPPopupChildren(unsigned int, CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CUIElement@@UEAAMXZ
    virtual float GetActualHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffset@CUIElement@@QEAA?AUVector3@Numerics@Foundation@Windows@@XZ
    WindissectOpaque GetActualOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetX@CUIElement@@UEAAMXZ
    virtual float GetActualOffsetX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetY@CUIElement@@UEAAMXZ
    virtual float GetActualOffsetY();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CUIElement@@UEAAMXZ
    virtual float GetActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllowDrop@CUIElement@@QEBAIXZ
    unsigned int GetAllowDrop() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeer@CUIElement@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsForImageBrushVirtual@CUIElement@@UEAAJPEBVCImageBrush@@PEAUXRECTF_WH@@@Z
    virtual long GetBoundsForImageBrushVirtual(CImageBrush const *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCenterPoint@CUIElement@@QEBA?AUVector3@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetCenterPoint(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetChildren(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInRenderOrder@CUIElement@@UEAAXPEAPEAPEAV1@PEAI@Z
    virtual void GetChildrenInRenderOrder(CUIElement * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInternal@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetChildrenInternal(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointRasterizedClient@CUIElement@@QEAAJPEAUXPOINTF@@@Z
    long GetClickablePointRasterizedClient(XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClip@CUIElement@@QEBA?AV?$xref_ptr@VCGeometry@@@@XZ
    WindissectOpaque GetClip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoercedIsEnabled@CUIElement@@UEAAIXZ
    virtual unsigned int GetCoercedIsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteAdapter@CUIElement@@QEBAPEAVComponentSiteAdapter@@XZ
    ComponentSiteAdapter * GetComponentSiteAdapter() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositeMode@CUIElement@@QEBA?AW4ElementCompositeMode@DirectUI@@XZ
    int GetCompositeMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInnerBounds@CUIElement@@QEAAJPEAUXRECTF_RB@@@Z
    long GetContentInnerBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextFlyout@CUIElement@@UEBA?AV?$xref_ptr@VCFlyoutBase@@@@XZ
    virtual WindissectOpaque GetContextFlyout() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompCanvasOffsetTransform@CUIElement@@QEBA?AV?$xref_ptr@UIDCompositionTransform@@@@XZ
    WindissectOpaque GetDCompCanvasOffsetTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompOffsetTransform@CUIElement@@QEAAXPEAVDCompTransformConversionContext@@PEAPEAUIDCompositionTransform@@@Z
    void GetDCompOffsetTransform(DCompTransformConversionContext *, IDCompositionTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompTreeHost@CUIElement@@QEBAPEAVDCompTreeHost@@XZ
    DCompTreeHost * GetDCompTreeHost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationClipContentTransform@CUIElement@@QEAAJPEAUIPALDirectManipulationService@@PEAUIObject@@AEAM222@Z
    long GetDirectManipulationClipContentTransform(IPALDirectManipulationService *, IObject *, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationCompositorTransform@CUIElement@@QEAAJW4TransformRetrievalOptions@@AEAHAEAM2222@Z
    long GetDirectManipulationCompositorTransform(int, int &, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationContainer@CUIElement@@QEAAJPEAPEAVCUIDMContainer@@@Z
    long GetDirectManipulationContainer(CUIDMContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationContentOffsetX@CUIElement@@QEBAMXZ
    float GetDirectManipulationContentOffsetX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationContentOffsetY@CUIElement@@QEBAMXZ
    float GetDirectManipulationContentOffsetY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveOpacity@CUIElement@@QEAAMXZ
    float GetEffectiveOpacity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementSizeForProjection@CUIElement@@QEAAJPEAUXSIZEF@@@Z
    long GetElementSizeForProjection(XSIZEF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFacadeTransformInfo@CUIElement@@QEBA?AUFacadeTransformInfo@@_N@Z
    FacadeTransformInfo GetFacadeTransformInfo(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChild@CUIElement@@UEAAPEAV1@XZ
    virtual CUIElement * GetFirstChild();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChildNoAddRef@CUIElement@@QEAAPEAV1@XZ
    CUIElement * GetFirstChildNoAddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstLTETargetingThis@CUIElement@@QEBAPEAV1@XZ
    CUIElement * GetFirstLTETargetingThis() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundBrush@CUIElement@@QEAAJPEAIPEAPEAVCBrush@@@Z
    long GetForegroundBrush(unsigned int *, CBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBoundsLogical@CUIElement@@QEAAJPEAUXRECTF_RB@@I_N@Z
    long GetGlobalBoundsLogical(XRECTF_RB *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBoundsWithOptions@CUIElement@@QEAAJPEAUXRECTF_RB@@I_N_N@Z
    long GetGlobalBoundsWithOptions(XRECTF_RB *, unsigned int, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWRealizationCache@CUIElement@@QEAAPEAVHWRealization@@XZ
    HWRealization * GetHWRealizationCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffLayerVisual@CUIElement@@QEAAJPEAPEAUILayerVisual@Composition@UI@Windows@@@Z
    long GetHandOffLayerVisual(::Windows::UI::Composition::ILayerVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffTarget@CUIElement@@QEAAJPEAPEAUIUnknown@@@Z
    long GetHandOffTarget(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisual@CUIElement@@QEAAJPEAPEAUIUnknown@@@Z
    long GetHandOffVisual(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisualTransform@CUIElement@@QEBA?AV?$xref_ptr@VCTransform@@@@XZ
    WindissectOpaque GetHandOffVisualTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestingTransform3DMatrix@CUIElement@@QEBA?AVCMILMatrix4x4@@_N@Z
    CMILMatrix4x4 GetHitTestingTransform3DMatrix(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimationInfo@CUIElement@@QEAA?AUImplicitAnimationInfo@@W4ImplicitAnimationType@@@Z
    ImplicitAnimationInfo GetImplicitAnimationInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CUIElement@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerBounds@CUIElement@@QEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    long GetInnerBounds(HitTestParams *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerBounds@CUIElement@@QEAAJPEAUXRECTF_RB@@@Z
    long GetInnerBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CUIElement@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsParentLayoutElement@CUIElement@@QEBAIXZ
    unsigned int GetIsParentLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkAPChildrenCount@CUIElement@@UEAAIXZ
    virtual unsigned int GetLinkAPChildrenCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTransform@CUIElement@@QEAAIW4TransformRetrievalOptions@@PEAVCMILMatrix@@@Z
    unsigned int GetLocalTransform(int, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTransform4x4@CUIElement@@QEAA?AVCMILMatrix4x4@@XZ
    CMILMatrix4x4 GetLocalTransform4x4();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTransformHelper@CUIElement@@SAXPEAVLocalTransformBuilder@@MMPEAUIDCompositionTransform@@MMMMIIMMPEAVCTransform@@UXPOINTF@@PEAVCTransitionTarget@@_NPEAUIUnknown@@2PEAURedirectionTransformInfo@@PEAUFacadeTransformInfo@@@Z
    static void GetLocalTransformHelper(LocalTransformBuilder *, float, float, IDCompositionTransform *, float, float, float, float, unsigned int, unsigned int, float, float, CTransform *, XPOINTF, CTransitionTarget *, bool, IUnknown *, CTransform *, RedirectionTransformInfo *, FacadeTransformInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTransitionRoot@CUIElement@@QEAAPEAVCTransitionRoot@@_N@Z
    CTransitionRoot * GetLocalTransitionRoot(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParentNoRef@CUIElement@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetLogicalParentNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationMode@CUIElement@@QEBA?AW4ManipulationModes@DirectUI@@XZ
    int GetManipulationMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetX@CUIElement@@QEBAMXZ
    float GetOffsetX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetY@CUIElement@@QEBAMXZ
    float GetOffsetY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacityCombined@CUIElement@@QEAAMXZ
    float GetOpacityCombined();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterBounds@CUIElement@@QEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    long GetOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPCPreChildrenRenderDataNoRef@CUIElement@@QEAAJPEAPEAV?$xvector@PEAUIUnknown@@@@@Z
    long GetPCPreChildrenRenderDataNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentFollowPopups@CUIElement@@QEAAPEAV1@XZ
    CUIElement * GetParentFollowPopups();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerCaptures@CUIElement@@QEBA?AV?$xref_ptr@VCPointerCollection@@@@XZ
    WindissectOpaque GetPointerCaptures() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupAssociatedAutomationPeer@CUIElement@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetPopupAssociatedAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupRoot@CUIElement@@QEAAPEAVCPopupRoot@@XZ
    CPopupRoot * GetPopupRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjection@CUIElement@@QEBA?AV?$xref_ptr@VCProjection@@@@XZ
    WindissectOpaque GetProjection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScaleIncludingAncestors@CUIElement@@QEAANXZ
    double GetRasterizationScaleIncludingAncestors();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionTransformsAndParentCompNode@CUIElement@@QEAAJPEAVCWindowRenderTarget@@PEAVCMILMatrix@@I_NPEAVCTransformToRoot@@PEAI4PEAPEAVHWCompTreeNode@@@Z
    long GetRedirectionTransformsAndParentCompNode(CWindowRenderTarget *, CMILMatrix *, unsigned int, bool, CTransformToRoot *, unsigned int *, unsigned int *, HWCompTreeNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderSize@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetRenderSize(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTransform@CUIElement@@QEBA?AV?$xref_ptr@VCTransform@@@@XZ
    WindissectOpaque GetRenderTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTransformLocal@CUIElement@@QEBAPEAVCTransform@@XZ
    CTransform * GetRenderTransformLocal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTransformOrigin@CUIElement@@QEBA?AUXPOINTF@@XZ
    XPOINTF GetRenderTransformOrigin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOfPopupSubTree@CUIElement@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * GetRootOfPopupSubTree();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@CUIElement@@QEBAM_N@Z
    float GetRotation(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAxis@CUIElement@@QEBA?AUVector3@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetRotationAxis(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScale@CUIElement@@QEBA?AUVector3@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetScale(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleFactorForLayoutRounding@CUIElement@@QEAAMXZ
    float GetScaleFactorForLayoutRounding();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowVisualNoRef@CUIElement@@QEAAPEAUIVisual@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::IVisual * GetShadowVisualNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandOffVisual@CUIElement@@QEAAJPEA_J@Z
    long GetSharedHandOffVisual(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedPrimaryContentTransform@CUIElement@@QEBAPEAUIDCompositionTransform@@XZ
    IDCompositionTransform * GetSharedPrimaryContentTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldFlipRTL@CUIElement@@UEAAXPEAI0@Z
    virtual void GetShouldFlipRTL(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredCrossDeviceHandOffVisual@CUIElement@@QEAAXPEAPEAUIDCompositionVisual2@@@Z
    void GetStoredCrossDeviceHandOffVisual(IDCompositionVisual2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredHandInVisual@CUIElement@@QEAAXPEAPEAUIVisual@Composition@UI@Windows@@@Z
    void GetStoredHandInVisual(::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredHandOffVisual@CUIElement@@QEAAXPEAPEAUIVisual@Composition@UI@Windows@@@Z
    void GetStoredHandOffVisual(::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextFormattingMember@CUIElement@@UEAAPEAPEAVTextFormatting@@XZ
    virtual TextFormatting * * GetTextFormattingMember();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightGlobalBounds@CUIElement@@UEAAJPEAUXRECTF_RB@@I_N@Z
    virtual long GetTightGlobalBounds(XRECTF_RB *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightInnerBounds@CUIElement@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GetTightInnerBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform3D@CUIElement@@QEBA?AV?$xref_ptr@VCTransform3D@@@@XZ
    WindissectOpaque GetTransform3D() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformMatrix@CUIElement@@QEBA?AUMatrix4x4@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetTransformMatrix(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformer@CUIElement@@QEAAJPEAPEAUITransformer@@@Z
    long GetTransformer(ITransformer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionTarget@CUIElement@@QEBA?AV?$xref_ptr@VCTransitionTarget@@@@XZ
    WindissectOpaque GetTransitionTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitions@CUIElement@@QEBA?AV?$xref_ptr@VCTransitionCollection@@@@XZ
    WindissectOpaque GetTransitions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionsForChildElementNoAddRef@CUIElement@@UEAAPEAVCTransitionCollection@@PEAV1@@Z
    virtual CTransitionCollection * GetTransitionsForChildElementNoAddRef(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTranslation@CUIElement@@QEBA?AUVector3@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetTranslation(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CUIElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIElementAdjustedParentInternal@CUIElement@@QEAAPEAV1@_N0@Z
    CUIElement * GetUIElementAdjustedParentInternal(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseLayoutRounding@CUIElement@@UEBA_NXZ
    virtual bool GetUseLayoutRounding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CUIElement@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportInteraction@CUIElement@@QEAAXPEAVDCompTreeHost@@PEAPEAUIDCompositionInteractionPartner@@@Z
    void GetViewportInteraction(DCompTreeHost *, IDCompositionInteractionPartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleImageBrushBounds@CUIElement@@QEAAJPEAVCImageBrush@@PEBUXRECTF_RB@@PEAUXRECTF_WH@@@Z
    long GetVisibleImageBrushBounds(CImageBrush *, XRECTF_RB const *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCCanvasOffsetExpression@CUIElement@@QEBA?AV?$xref_ptr@UIExpressionAnimation@Composition@UI@Windows@@@@XZ
    WindissectOpaque GetWUCCanvasOffsetExpression() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCOpacityExpression@CUIElement@@QEBA?AV?$xref_ptr@UIExpressionAnimation@Composition@UI@Windows@@@@XZ
    WindissectOpaque GetWUCOpacityExpression() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlLightCollection@CUIElement@@QEBA?AV?$xref_ptr@VCXamlLightCollection@@@@XZ
    WindissectOpaque GetXamlLightCollection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZIndex@CUIElement@@QEBAHXZ
    int GetZIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalScaleFactor@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GlobalScaleFactor(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWIsCached@CUIElement@@QEAA_NXZ
    bool HWIsCached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Has3DDepthOnSelfOrSubtreeOrLTETargetingSelf@CUIElement@@QEBA_NXZ
    bool Has3DDepthOnSelfOrSubtreeOrLTETargetingSelf() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAbsolutelyPositionedLayoutTransitionRenderers@CUIElement@@QEBA_NXZ
    bool HasAbsolutelyPositionedLayoutTransitionRenderers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveProjection@CUIElement@@QEBA_NXZ
    bool HasActiveProjection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDepthLegacy@CUIElement@@QEBA_NXZ
    bool HasDepthLegacy() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImplicitAnimation@CUIElement@@QEBA_NW4ImplicitAnimationType@@@Z
    bool HasImplicitAnimation(int) const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasInheritedProperties@CUIElement@@UEAAHXZ
    virtual int HasInheritedProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLayoutClip@CUIElement@@QEAA_NXZ
    bool HasLayoutClip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSharedManipulationTransform@CUIElement@@QEAA_N_N@Z
    bool HasSharedManipulationTransform(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransform3DCompositionRequirement@CUIElement@@QEBA_NXZ
    bool HasTransform3DCompositionRequirement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransitionTarget@CUIElement@@QEBA_NXZ
    bool HasTransitionTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasXamlLights@CUIElement@@QEBA_NXZ
    bool HasXamlLights() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestEntry@CUIElement@@QEAAJAEBVHitTestParams@@UXPOINTF@@_N2PEAPEAV1@@Z
    long HitTestEntry(HitTestParams const &, XPOINTF, bool, bool, CUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestVisible@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long HitTestVisible(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImplicitAnimationTypeToCompositionRequirement@CUIElement@@SA?AW4Value@CompositionRequirement@@W4ImplicitAnimationType@@@Z
    static int ImplicitAnimationTypeToCompositionRequirement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@CUIElement@@QEAAJIPEAV1@@Z
    long InsertChild(unsigned int, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrange@CUIElement@@QEAAXXZ
    void InvalidateArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateFontSize@CUIElement@@UEAAJXZ
    virtual long InvalidateFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasure@CUIElement@@QEAAXXZ
    void InvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateViewport@CUIElement@@QEAAXXZ
    void InvalidateViewport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAlignedByDirectManipulation@CUIElement@@QEAAJPEA_N@Z
    long IsAlignedByDirectManipulation(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBitmapCacheEnabled@CUIElement@@SA_NXZ
    static bool IsBitmapCacheEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClipManipulatedIndependently@CUIElement@@QEBAIXZ
    unsigned int IsClipManipulatedIndependently() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDoubleTapEnabled@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long IsDoubleTapEnabled(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAndVisibleForDCompHitTest@CUIElement@@QEBA_NXZ
    bool IsEnabledAndVisibleForDCompHitTest() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAndVisibleForHitTest@CUIElement@@QEBA_N_N0@Z
    bool IsEnabledAndVisibleForHitTest(bool, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CUIElement@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocused@CUIElement@@UEAAIXZ
    virtual unsigned int IsFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsForceNoCulling@CUIElement@@QEBA_NXZ
    bool IsForceNoCulling() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHiddenForLayoutTransition@CUIElement@@QEBAIXZ
    unsigned int IsHiddenForLayoutTransition() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHitTestVisible@CUIElement@@QEBA_N_N@Z
    bool IsHitTestVisible(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoldEnabled@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long IsHoldEnabled(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImplicitAnimationPlaying@CUIElement@@QEAA_NW4ImplicitAnimationType@@@Z
    bool IsImplicitAnimationPlaying(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInPCScene@CUIElement@@QEBAIXZ
    unsigned int IsInPCScene() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInTransform3DSubtree@CUIElement@@SA_NPEAV1@PEBV1@@Z
    static bool IsInTransform3DSubtree(CUIElement *, CUIElement const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInUIElementsAdjustedVisualSubTree@CUIElement@@QEAA_NPEBV1@@Z
    bool IsInUIElementsAdjustedVisualSubTree(CUIElement const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractionEngineRequired@CUIElement@@QEBA_N_N@Z
    bool IsInteractionEngineRequired(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeepVisible@CUIElement@@QEAA_NXZ
    bool IsKeepVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadedEventPending@CUIElement@@QEAA_NXZ
    bool IsLoadedEventPending();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointerPositionOver@CUIElement@@QEAA_NUXPOINTF@@@Z
    bool IsPointerPositionOver(XPOINTF);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyForRenderTargetElementRender@CUIElement@@QEAAJPEAE@Z
    long IsReadyForRenderTargetElementRender(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightTapEnabled@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long IsRightTapEnabled(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CUIElement@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTapEnabled@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long IsTapEnabled(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransformOrOffsetAffectingPropertyIndependentlyAnimating@CUIElement@@QEBAIXZ
    unsigned int IsTransformOrOffsetAffectingPropertyIndependentlyAnimating() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRound@CUIElement@@QEAAMM@Z
    float LayoutRound(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundCeiling@CUIElement@@QEAAMM@Z
    float LayoutRoundCeiling(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeavePCSceneRecursive@CUIElement@@QEAAXXZ
    void LeavePCSceneRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockParent@CUIElement@@QEAAXXZ
    void LockParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManipulationMode@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long ManipulationMode(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Measure@CUIElement@@QEAAJUXSIZEF@@@Z
    long Measure(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MustAttachWUCExpression@CUIElement@@QEBA_NW4KnownPropertyIndex@@@Z
    bool MustAttachWUCExpression(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlagsRecursive@CUIElement@@QEAAXXZ
    void NWCleanDirtyFlagsRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWComputeElementSize@CUIElement@@QEAA?AUXSIZEF@@PEBVCCompositeVectorBuffer@@@Z
    XSIZEF NWComputeElementSize(CCompositeVectorBuffer const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWIsContentDirty@CUIElement@@UEAAIXZ
    virtual unsigned int NWIsContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWNeedsElementRenderingInnerProjection@CUIElement@@QEAAIXZ
    unsigned int NWNeedsElementRenderingInnerProjection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWNeedsElementRenderingOuterCacheMode@CUIElement@@QEAAIXZ
    unsigned int NWNeedsElementRenderingOuterCacheMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWNeedsRendering@CUIElement@@QEAAIXZ
    unsigned int NWNeedsRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRender@CUIElement@@QEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@@Z
    long NWRender(SharedRenderParams const &, NWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderTransformed@CUIElement@@QEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@@Z
    long NWRenderTransformed(SharedRenderParams &, NWRenderParams &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderTransformedContent@CUIElement@@QEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@@Z
    long NWRenderTransformedContent(SharedRenderParams const &, NWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetCacheModeDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetCacheModeDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetClipDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetClipDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetCompositeModeDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetCompositeModeDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetContentAndBoundsDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetContentAndBoundsDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetContentDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetContentDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetLightCollectionDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetLightCollectionDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetLightTargetDirty@CUIElement@@SAXPEAVCDependencyObject@@_N@Z
    static void NWSetLightTargetDirty(CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetOpacityDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetOpacityDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetProjectionDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetProjectionDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetSubgraphDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetSubgraphDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetTransform3DDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetTransform3DDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetTransformDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetTransformDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetTransitionTargetDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetTransitionTargetDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetVisibilityDirty@CUIElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetVisibilityDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSkipRendering@CUIElement@@UEAAIXZ
    virtual unsigned int NWSkipRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsWUCOffsetExpression@CUIElement@@QEAA_NXZ
    bool NeedsWUCOffsetExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsWUCOpacityExpression@CUIElement@@QEAA_NXZ
    bool NeedsWUCOpacityExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyApplicationHighContrastAdjustmentChangedCore@CUIElement@@QEAAJXZ
    long NotifyApplicationHighContrastAdjustmentChangedCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyParentChange@CUIElement@@UEAAXPEAVCDependencyObject@@P6AX0W4Value@DirtyFlags@@@Z@Z
    virtual void NotifyParentChange(CDependencyObject *, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAssociationFailure@CUIElement@@QEAAJXZ
    long OnAssociationFailure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBringIntoViewRequested@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnBringIntoViewRequested(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceived@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnCharacterReceived(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildDesiredSizeChanged@CUIElement@@UEAAXPEAV1@@Z
    virtual void OnChildDesiredSizeChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextCanceled@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnContextCanceled(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequested@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnContextRequested(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequestedCore@CUIElement@@SAJPEAVCDependencyObject@@0PEAVCEventArgs@@@Z
    static long OnContextRequestedCore(CDependencyObject *, CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CUIElement@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerImpl@CUIElement@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDoubleTapped(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnter@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDragEnter(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDragLeave(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragOver@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDragOver(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDrop(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnGettingFocus(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnGotFocus(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnHolding(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnInheritedPropertyChanged(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnIsEnabledChanged(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnKeyDown(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnKeyUp(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLosingFocus@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnLosingFocus(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnLostFocus(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnManipulationCompleted(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnManipulationDelta(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationInertiaStarting@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnManipulationInertiaStarting(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnManipulationStarted(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarting@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnManipulationStarting(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoFocusCandidateFound@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnNoFocusCandidateFound(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerCanceled(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerCaptureLost(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerEntered(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerExited(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerMoved(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerPressed(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerReleased(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChanged@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPointerWheelChanged(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDown@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPreviewKeyDown(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyUp@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPreviewKeyUp(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAccelerators@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnProcessKeyboardAccelerators(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CUIElement@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnRightTapped(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnRightTappedUnhandled(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CUIElement@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnTapped(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformMatrixForHitTestingChanged@CUIElement@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    void OnTransformMatrixForHitTestingChanged(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZOrderChanged@CUIElement@@QEAAJXZ
    long OnZOrderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayImplicitAnimation@CUIElement@@QEAAXAEAUImplicitAnimationInfo@@W4ImplicitAnimationType@@@Z
    void PlayImplicitAnimation(ImplicitAnimationInfo &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateBackingCompositionObjectWithFacade@CUIElement@@QEAAXPEAUICompositionObject@Composition@UI@Windows@@W4KnownPropertyIndex@@@Z
    void PopulateBackingCompositionObjectWithFacade(::Windows::UI::Composition::ICompositionObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreserveDepthAndUseNewHitTestingWalk@CUIElement@@SA_NXZ
    static bool PreserveDepthAndUseNewHitTestingWalk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Print@CUIElement@@QEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    long Print(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDepthInSubtree@CUIElement@@QEAAXXZ
    void PropagateDepthInSubtree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateLayoutDirty@CUIElement@@UEAAX_N0@Z
    virtual void PropagateLayoutDirty(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullFacadePropertyValueFromCompositionObject@CUIElement@@QEAAJPEAUICompositionObject@Composition@UI@Windows@@W4KnownPropertyIndex@@@Z
    long PullFacadePropertyValueFromCompositionObject(::Windows::UI::Composition::ICompositionObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CUIElement@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAccessKeyHidden@CUIElement@@QEAAXXZ
    void RaiseAccessKeyHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAccessKeyInvoked@CUIElement@@QEAA_NXZ
    bool RaiseAccessKeyInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAccessKeyShown@CUIElement@@QEAAXPEBG@Z
    void RaiseAccessKeyShown(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsEnabledChangedEvent@CUIElement@@UEAAJPEAVCValue@@@Z
    virtual long RaiseIsEnabledChangedEvent(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveInvalidateFontSize@CUIElement@@UEAAJXZ
    virtual long RecursiveInvalidateFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveInvalidateMeasure@CUIElement@@UEAAXXZ
    virtual void RecursiveInvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CUIElement@@UEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CUIElement@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseKeepAlive@CUIElement@@QEAAXXZ
    void ReleaseKeepAlive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePointerCapture@CUIElement@@QEAAJPEAVCPointer@@@Z
    long ReleasePointerCapture(CPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePointerCaptures@CUIElement@@QEAAJXZ
    long ReleasePointerCaptures();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAbsolutelyPositionedLayoutTransitionRenderers@CUIElement@@QEAAJXZ
    long RemoveAbsolutelyPositionedLayoutTransitionRenderers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllEventListeners@CUIElement@@QEAAJ_N@Z
    long RemoveAllEventListeners(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@CUIElement@@QEAAJPEAV1@@Z
    long RemoveChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCompositionPeer@CUIElement@@QEAAXXZ
    void RemoveCompositionPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CUIElement@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLayoutTransitionRenderer@CUIElement@@QEAAJPEAVCLayoutTransitionElement@@@Z
    long RemoveLayoutTransitionRenderer(CLayoutTransitionElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestKeepAlive@CUIElement@@QEAAXXZ
    void RequestKeepAlive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresCompositionNode@CUIElement@@QEBAIXZ
    unsigned int RequiresCompositionNode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCompositionNodeManipulationData@CUIElement@@QEAAXXZ
    void ResetCompositionNodeManipulationData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowDrop@CUIElement@@QEAAXI@Z
    void SetAllowDrop(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndPropagateForceNoCulling@CUIElement@@QEAAX_N@Z
    void SetAndPropagateForceNoCulling(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationPeer@CUIElement@@UEAAJPEAVCAutomationPeer@@@Z
    virtual long SetAutomationPeer(CAutomationPeer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CUIElement@@QEAAJV?$xref_ptr@VCGeometry@@@@@Z
    long SetClip(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSite@CUIElement@@QEAAJPEAUIComponentSite@Private@Foundation@Windows@@@Z
    long SetComponentSite(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEntireSubtreeDirty@CUIElement@@QEAAXXZ
    void SetEntireSubtreeDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHWRealizationCache@CUIElement@@UEAAXPEAVHWRealization@@@Z
    virtual void SetHWRealizationCache(HWRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandInVisual@CUIElement@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    long SetHandInVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualCenterPoint@CUIElement@@QEAAJMM@Z
    long SetHandOffVisualCenterPoint(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualClip@CUIElement@@QEAAXAEBUXRECTF_WH@@@Z
    void SetHandOffVisualClip(XRECTF_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualClipTransform@CUIElement@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z
    void SetHandOffVisualClipTransform(D2D_MATRIX_3X2_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualOffset@CUIElement@@QEAAJMM@Z
    long SetHandOffVisualOffset(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualRotationAngle@CUIElement@@QEAAJM@Z
    long SetHandOffVisualRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualScale@CUIElement@@QEAAJMM@Z
    long SetHandOffVisualScale(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualTransformMatrix@CUIElement@@QEAAXAEBUD2D_MATRIX_4X4_F@@@Z
    void SetHandOffVisualTransformMatrix(D2D_MATRIX_4X4_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHas3DDepth@CUIElement@@QEAAX_N@Z
    void SetHas3DDepth(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitAnimationRequested@CUIElement@@QEAAXW4ImplicitAnimationType@@_N@Z
    void SetImplicitAnimationRequested(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitShowHideAnimation@CUIElement@@QEAAXW4ImplicitAnimationType@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    void SetImplicitShowHideAnimation(int, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTranslationEnabled@CUIElement@@QEAAX_N@Z
    void SetIsTranslationEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeepVisible@CUIElement@@QEAAX_N@Z
    void SetKeepVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRasterizationScale@CUIElement@@QEAAXN@Z
    void SetRasterizationScale(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequiresComposition@CUIElement@@UEAAJW4Value@CompositionRequirement@@W42IndependentAnimationType@@@Z
    virtual long SetRequiresComposition(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotation@CUIElement@@QEAAXM@Z
    void SetRotation(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAxis@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void SetRotationAxis(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void SetScale(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadowVisual@CUIElement@@QEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    void SetShadowVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@CUIElement@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    void SetTransformMatrix(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTranslation@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void SetTranslation(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CUIElement@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@CUIElement@@QEAAXW4Visibility@DirectUI@@@Z
    void SetVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZIndex@CUIElement@@QEAAJH@Z
    long SetZIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldApplyLayoutClipAsAncestorClip@CUIElement@@QEBA_NXZ
    bool ShouldApplyLayoutClipAsAncestorClip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPropagateDepthLegacy@CUIElement@@QEAA_NXZ
    bool ShouldPropagateDepthLegacy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CUIElement@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSkipForAPChildren@CUIElement@@QEAA_NPEAV1@@Z
    bool ShouldSkipForAPChildren(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSkipForAPPopupChildren@CUIElement@@QEBA_NPEAV1@PEBVCPopupRoot@@@Z
    bool ShouldSkipForAPPopupChildren(CUIElement *, CPopupRoot const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CUIElement@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipRenderForLayoutTransition@CUIElement@@UEAAIXZ
    virtual unsigned int SkipRenderForLayoutTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreLayoutCycleWarningContext@CUIElement@@QEAAXPEAVCLayoutManager@@_K@Z
    void StoreLayoutCycleWarningContext(CLayoutManager *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreLayoutCycleWarningContexts@CUIElement@@QEAA_NXZ
    bool StoreLayoutCycleWarningContexts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabFocusNavigation@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long TabFocusNavigation(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabNavigation@CUIElement@@QEBA?AW4KeyboardNavigationMode@DirectUI@@XZ
    int TabNavigation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferHandOffAndHandInVisuals@CUIElement@@QEAAJPEAVHWCompTreeNode@@@Z
    long TransferHandOffAndHandInVisuals(HWCompTreeNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInnerToOuterChain@CUIElement@@SAJPEAV1@PEBV1@PEBUXRECTF_RB@@PEAU2@I_N@Z
    static long TransformInnerToOuterChain(CUIElement *, CUIElement const *, XRECTF_RB const *, XRECTF_RB *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformOuterToInnerChain@CUIElement@@SAJPEAV1@PEBV1@PEBUXPOINTF@@PEAU2@IPEAIPEAVHitTestParams@@@Z
    static long TransformOuterToInnerChain(CUIElement *, CUIElement const *, XPOINTF const *, XPOINTF *, unsigned int, unsigned int *, HitTestParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToVisual@CUIElement@@QEAAJPEAV1@_NPEAV?$xref_ptr@VCGeneralTransform@@@@@Z
    long TransformToVisual(CUIElement *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToWorldSpace@CUIElement@@QEAAJPEBUXRECTF_RB@@PEAU2@_N_N2@Z
    long TransformToWorldSpace(XRECTF_RB const *, XRECTF_RB *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionLayout@CUIElement@@QEAAJPEAV1@UXRECTF_WH@@@Z
    long TransitionLayout(CUIElement *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerImplicitShowHideAnimations@CUIElement@@QEAAXXZ
    void TriggerImplicitShowHideAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvokeKeyboardAccelerator@CUIElement@@SAJQEBVCDependencyObject@@QEAV1@W4VirtualKey@System@Windows@@W4VirtualKeyModifiers@45@AEAE4@Z
    static long TryInvokeKeyboardAccelerator(CDependencyObject const * const, CUIElement * const, int, int, unsigned char &, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockParent@CUIElement@@QEAAXXZ
    void UnlockParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetRequiresComposition@CUIElement@@UEAAXW4Value@CompositionRequirement@@W42IndependentAnimationType@@@Z
    virtual void UnsetRequiresComposition(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UntargetByLight@CUIElement@@QEAAXPEAVCXamlLight@@@Z
    void UntargetByLight(CXamlLight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnchorCandidateOnParentScrollProvider@CUIElement@@QEAAJ_N@Z
    long UpdateAnchorCandidateOnParentScrollProvider(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CUIElement@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHas3DDepth@CUIElement@@QEAAXXZ
    void UpdateHas3DDepth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHas3DDepthInSubtree@CUIElement@@QEAAXXZ
    void UpdateHas3DDepthInSubtree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasNonDefaultRotationAxis@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void UpdateHasNonDefaultRotationAxis(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasNonIdentityTransformMatrix@CUIElement@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    void UpdateHasNonIdentityTransformMatrix(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasNonZeroCenterPoint@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void UpdateHasNonZeroCenterPoint(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasNonZeroRotation@CUIElement@@QEAAXM@Z
    void UpdateHasNonZeroRotation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasScaleZ@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void UpdateHasScaleZ(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasTranslateZ@CUIElement@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@@Z
    void UpdateHasTranslateZ(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestVisibilityForComposition@CUIElement@@QEAAXXZ
    void UpdateHitTestVisibilityForComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImplicitStyle@CUIElement@@UEAAJPEAVCStyle@@0_N11@Z
    virtual long UpdateImplicitStyle(CStyle *, CStyle *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CUIElement@@QEAAJXZ
    long UpdateLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutClip@CUIElement@@UEAAJ_N@Z
    virtual long UpdateLayoutClip(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLayoutRounding@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long UseLayoutRounding(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseViewportInteractionOnlyForRootVisual@CUIElement@@SA_NXZ
    static bool UseViewportInteractionOnlyForRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisibilityState@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long VisibilityState(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZIndex@CUIElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long ZIndex(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIElement@@UEAA@XZ
    virtual ~CUIElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@CUIElement@@MEAAJUXRECTF_WH@@@Z
    virtual long ArrangeCore(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CUIElement@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CUIElement@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIElement@@IEAA@PEAVCCoreServices@@@Z
    CUIElement(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBoundsForTransform3DChildren@CUIElement@@MEAAXPEAVHitTestParams@@_NPEAUXRECTF_RB@@@Z
    virtual void CalculateBoundsForTransform3DChildren(HitTestParams *, bool, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDirectManipulationContainerHandler@CUIElement@@IEAAJPEAPEAUIDirectManipulationContainerHandler@@@Z
    long CreateDirectManipulationContainerHandler(IDirectManipulationContainerHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContentRenderDataVirtual@CUIElement@@MEAAXW4RenderWalkType@@0@Z
    virtual void EnsureContentRenderDataVirtual(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInnerBounds@CUIElement@@IEAAJPEAVHitTestParams@@@Z
    long EnsureInnerBounds(HitTestParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePropertyRenderData@CUIElement@@IEAAXW4RenderWalkType@@@Z
    void EnsurePropertyRenderData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRootCanvasCompNode@CUIElement@@IEAAXXZ
    void EnsureRootCanvasCompNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CUIElement@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CUIElement@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CUIElement@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalScaleFactorCore@CUIElement@@IEBAMXZ
    float GetGlobalScaleFactorCore() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationModeCore@CUIElement@@MEBA?AW4ManipulationModes@DirectUI@@XZ
    virtual int GetManipulationModeCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CUIElement@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CUIElement@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoresInheritedClips@CUIElement@@MEAAIXZ
    virtual unsigned int IgnoresInheritedClips();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameSize@CUIElement@@KAIAEBUXSIZEF@@0@Z
    static unsigned int IsSameSize(XSIZEF const &, XSIZEF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CUIElement@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CUIElement@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCore@CUIElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureCore(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCanApplyOpacityWithoutLayer@CUIElement@@MEAAIXZ
    virtual unsigned int NWCanApplyOpacityWithoutLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CUIElement@@MEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWGetProjectionTransformer@CUIElement@@IEAAJPEAPEAVCPerspectiveTransformer@@@Z
    long NWGetProjectionTransformer(CPerspectiveTransformer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CUIElement@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlagForLayoutTransitions@CUIElement@@IEAAXW4Value@DirtyFlags@@@Z
    void NWPropagateDirtyFlagForLayoutTransitions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderChildren@CUIElement@@IEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@@Z
    long NWRenderChildren(SharedRenderParams const &, NWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPostChildrenEdgesVirtual@CUIElement@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPostChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CUIElement@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetDirtyFlagsAndPropagate@CUIElement@@IEAAXW4Value@DirtyFlags@@I@Z
    void NWSetDirtyFlagsAndPropagate(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyApplicationHighContrastAdjustmentChanged@CUIElement@@MEAAJXZ
    virtual long NotifyApplicationHighContrastAdjustmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CUIElement@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlignmentChanged@CUIElement@@IEAAJIII@Z
    long OnAlignmentChanged(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceived@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnCharacterReceived(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentDirty@CUIElement@@MEAAXXZ
    virtual void OnContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnGotFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnHolding(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnInheritedPropertyChanged(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnIsEnabledChanged(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnLostFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerCaptureLost(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerEntered(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CUIElement@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CUIElement@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintChildren@CUIElement@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PrintChildren(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalScaleFactorCore@CUIElement@@IEAAJM@Z
    long SetGlobalScaleFactorCore(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationModeCore@CUIElement@@MEAAJW4ManipulationModes@DirectUI@@@Z
    virtual long SetManipulationModeCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInnerToOuter@CUIElement@@IEAAJPEBUXRECTF_RB@@PEAU2@IPEBVHitTestParams@@_N@Z
    long TransformInnerToOuter(XRECTF_RB const *, XRECTF_RB *, unsigned int, HitTestParams const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInnerToOuter@CUIElement@@IEAAJPEBUXPOINTF@@PEAU2@IPEAVHitTestParams@@PEAI@Z
    long TransformInnerToOuter(XPOINTF const *, XPOINTF *, unsigned int, HitTestParams *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformOuterToInner@CUIElement@@IEAA_NPEBUXPOINTF@@PEAU2@IPEAVHitTestParams@@@Z
    bool TransformOuterToInner(XPOINTF const *, XPOINTF *, unsigned int, HitTestParams *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLayoutClipToBounds@CUIElement@@AEAAJPEAUXRECTF_RB@@@Z
    long ApplyLayoutClipToBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUIEClipToBounds@CUIElement@@AEAAJPEAUXRECTF_RB@@@Z
    long ApplyUIEClipToBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeInternal@CUIElement@@AEAAJUXRECTF_WH@@@Z
    long ArrangeInternal(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupImplicitAnimationInfo@CUIElement@@AEAAXW4ImplicitAnimationType@@@Z
    void CleanupImplicitAnimationInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupImplicitAnimationOnCompletion@CUIElement@@AEAAXW4ImplicitAnimationType@@@Z
    void CleanupImplicitAnimationOnCompletion(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHandOffVisualSubTransform@CUIElement@@AEAAXW4KnownTypeIndex@@@Z
    void ClearHandOffVisualSubTransform(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHandOffVisualTransformMatrix3D@CUIElement@@AEAAXXZ
    void ClearHandOffVisualTransformMatrix3D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceIsEnabledOnVisualChildren@CUIElement@@AEAAJ_N@Z
    long CoerceIsEnabledOnVisualChildren(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInsertHandOffVisualSubTransform@CUIElement@@AEAAJW4KnownTypeIndex@@@Z
    long CreateAndInsertHandOffVisualSubTransform(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateChildrenCollection@CUIElement@@AEAAJPEAPEAVCUIElementCollection@@@Z
    long CreateChildrenCollection(CUIElementCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardHandInVisual@CUIElement@@AEAAX_N@Z
    void DiscardHandInVisual(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardRejectionViewportsInSubTree@CUIElement@@AEAAJXZ
    long DiscardRejectionViewportsInSubTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCrossDeviceHandOffVisual@CUIElement@@AEAAJPEAPEAUIDCompositionVisual2@@@Z
    long EnsureCrossDeviceHandOffVisual(IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandOffVisual@CUIElement@@AEAAJPEAPEAUIVisual@Composition@UI@Windows@@_N@Z
    long EnsureHandOffVisual(::Windows::UI::Composition::IVisual * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandOffVisualClip@CUIElement@@AEAA?AV?$xref_ptr@VCRectangleGeometry@@@@XZ
    WindissectOpaque EnsureHandOffVisualClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandOffVisualSubTransform@CUIElement@@AEAAJW4KnownTypeIndex@@@Z
    long EnsureHandOffVisualSubTransform(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandOffVisualTransformGroupAndCollection@CUIElement@@AEAAJXZ
    long EnsureHandOffVisualTransformGroupAndCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandOffVisualTransformMatrix3D@CUIElement@@AEAAXAEBVCMILMatrix4x4@@@Z
    void EnsureHandOffVisualTransformMatrix3D(CMILMatrix4x4const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOuterBounds@CUIElement@@AEAAJPEAVHitTestParams@@@Z
    long EnsureOuterBounds(HitTestParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTranslationPropertyInitialized@CUIElement@@AEAAXXZ
    void EnsureTranslationPropertyInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAncestorChainForTransformToRoot@CUIElement@@AEAAXAEAU?$stack_vector@PEAVCUIElement@@$0CA@@Jupiter@@_N1@Z
    void FillAncestorChainForTransformToRoot(WindissectOpaque &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCloseHandInAndHandOffVisuals@CUIElement@@AEAAXXZ
    void ForceCloseHandInAndHandOffVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GatherTransformsUpTreeAndMoveToPerspectiveAncestor@CUIElement@@CAPEAV1@PEAV1@PEBV1@PEAVHitTestParams@@@Z
    static CUIElement * GatherTransformsUpTreeAndMoveToPerspectiveAncestor(CUIElement *, CUIElement const *, HitTestParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanDrag@CUIElement@@AEBAIXZ
    unsigned int GetCanDrag() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBoundsIn3DDescendants@CUIElement@@AEAAJPEAUXRECTF_RB@@_N_N1@Z
    long GetGlobalBoundsIn3DDescendants(XRECTF_RB *, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBoundsOnSelf@CUIElement@@AEAAJPEAUXRECTF_RB@@_N_N1@Z
    long GetGlobalBoundsOnSelf(XRECTF_RB *, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisualClip@CUIElement@@AEBA?AV?$xref_ptr@VCRectangleGeometry@@@@XZ
    WindissectOpaque GetHandOffVisualClip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisualClipOrElementClip@CUIElement@@AEBA?AV?$xref_ptr@VCGeometry@@@@XZ
    WindissectOpaque GetHandOffVisualClipOrElementClip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisualSubTransform@CUIElement@@AEBA?AV?$xref_ptr@VCTransform@@@@W4KnownTypeIndex@@@Z
    WindissectOpaque GetHandOffVisualSubTransform(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisualTransformCollection@CUIElement@@AEBA?AV?$xref_ptr@VCTransformCollection@@@@XZ
    WindissectOpaque GetHandOffVisualTransformCollection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisualTransformMatrix3D@CUIElement@@AEBA?AVCMILMatrix4x4@@XZ
    CMILMatrix4x4 GetHandOffVisualTransformMatrix3D() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDoubleTapEnabled@CUIElement@@AEBAIXZ
    unsigned int GetIsDoubleTapEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHitTestVisible@CUIElement@@AEBAIXZ
    unsigned int GetIsHitTestVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHoldEnabled@CUIElement@@AEBAIXZ
    unsigned int GetIsHoldEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsManipulationModeInvalid@CUIElement@@CA_NW4ManipulationModes@DirectUI@@@Z
    static bool GetIsManipulationModeInvalid(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsRightTapEnabled@CUIElement@@AEBAIXZ
    unsigned int GetIsRightTapEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTapEnabled@CUIElement@@AEBAIXZ
    unsigned int GetIsTapEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrSetBitfield@CUIElement@@CAJPEAVCDependencyObject@@IPEAVCValue@@P81@EBAIXZP81@EAAXI@Z1@Z
    static long GetOrSetBitfield(CDependencyObject *, unsigned int, CValue *, unsigned int ( ::CUIElement::*)(void) const, void ( ::CUIElement::*)(unsigned int), CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterBoundsAsQuad@CUIElement@@AEAAJPEAVHitTestParams@@PEAIPEAUXPOINTF@@@Z
    long GetOuterBoundsAsQuad(HitTestParams *, unsigned int *, XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionMatrix4x4@CUIElement@@AEBA?AVCMILMatrix4x4@@XZ
    CMILMatrix4x4 GetProjectionMatrix4x4() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformToAncestorCommon@CUIElement@@AEAAJPEBV1@IIPEAPEAUITransformer@@@Z
    long GetTransformToAncestorCommon(CUIElement const *, unsigned int, unsigned int, ITransformer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHandOffVisualTransform@CUIElement@@AEBA_NXZ
    bool HasHandOffVisualTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransform3DInSubtree@CUIElement@@AEBA_NPEBVHitTestParams@@@Z
    bool HasTransform3DInSubtree(HitTestParams const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAutomationPeerDataInternal@CUIElement@@AEAAXXZ
    void InvalidateAutomationPeerDataInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasureInternal@CUIElement@@AEAAXPEAVCLayoutManager@@@Z
    void InvalidateMeasureInternal(CLayoutManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateViewportInternal@CUIElement@@AEAAXXZ
    void InvalidateViewportInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundHelper@CUIElement@@AEAAMM_N@Z
    float LayoutRoundHelper(float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundHelper@CUIElement@@AEAAMMA6AHN@Z@Z
    float LayoutRoundHelper(float, int ( &)(double));
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeavePCSceneSubgraph@CUIElement@@EEAAXXZ
    virtual void LeavePCSceneSubgraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureInternal@CUIElement@@AEAAJUXSIZEF@@@Z
    long MeasureInternal(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWDrawClipHelper@CUIElement@@CAJPEAVCGeometry@@IIIIIAEAUNWRenderParams@@@Z
    static long NWDrawClipHelper(CGeometry *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, NWRenderParams &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWDrawClips@CUIElement@@AEAAJAEAUNWRenderParams@@I@Z
    long NWDrawClips(NWRenderParams &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWDrawOpacityAndOpacityMask@CUIElement@@AEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@@Z
    long NWDrawOpacityAndOpacityMask(SharedRenderParams const &, NWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWDrawProjection@CUIElement@@AEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@III@Z
    long NWDrawProjection(SharedRenderParams &, NWRenderParams &, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderEdgesImpl@CUIElement@@AEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@IPEAPEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long NWRenderEdgesImpl(SharedRenderParams const &, NWRenderParams const &, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPostChildrenEdges@CUIElement@@AEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@@Z
    long NWRenderPostChildrenEdges(SharedRenderParams const &, NWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdges@CUIElement@@AEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@@Z
    long NWRenderPreChildrenEdges(SharedRenderParams const &, NWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetUpClipHelper@CUIElement@@CAJAEAUSharedRenderParams@@AEAUNWRenderParams@@PEAVCGeometry@@II@Z
    static long NWSetUpClipHelper(SharedRenderParams &, NWRenderParams &, CGeometry *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetUpLayoutClip@CUIElement@@AEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@@Z
    long NWSetUpLayoutClip(SharedRenderParams &, NWRenderParams &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetUpOpacityAndOpacityMask@CUIElement@@AEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@@Z
    long NWSetUpOpacityAndOpacityMask(SharedRenderParams &, NWRenderParams &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetUpProjection@CUIElement@@AEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@AEAI2@Z
    long NWSetUpProjection(SharedRenderParams &, NWRenderParams &, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandOffOrHandInVisualDirty@CUIElement@@AEAAXXZ
    void OnHandOffOrHandInVisualDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImplicitHideAnimationCompleted@CUIElement@@AEAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Z
    long OnImplicitHideAnimationCompleted(IInspectable *, ::Windows::UI::Composition::ICompositionBatchCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImplicitShowAnimationCompleted@CUIElement@@AEAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Z
    long OnImplicitShowAnimationCompleted(IInspectable *, ::Windows::UI::Composition::ICompositionBatchCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetShadowValue@CUIElement@@AEAA_NAEBUSetValueParams@@@Z
    bool OnSetShadowValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPopClip@CUIElement@@CAJAEBUD2DRenderParams@@@Z
    static long PrintPopClip(D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPopOpacity@CUIElement@@AEAAJAEBUD2DRenderParams@@@Z
    long PrintPopOpacity(D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPushLayoutClip@CUIElement@@AEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEA_N@Z
    long PrintPushLayoutClip(D2DPrecomputeParams const &, D2DRenderParams const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPushOpacity@CUIElement@@AEAAJAEBUD2DRenderParams@@@Z
    long PrintPushOpacity(D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPushUIEClip@CUIElement@@AEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEA_N@Z
    long PrintPushUIEClip(D2DPrecomputeParams const &, D2DRenderParams const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintTransformed@CUIElement@@AEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    long PrintTransformed(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerExitedEventByPointerEnteredElementStateChange@CUIElement@@AEAAJXZ
    long ProcessPointerExitedEventByPointerEnteredElementStateChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateOnPathInternal@CUIElement@@AEAAXIII@Z
    void PropagateOnPathInternal(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushUseLayoutRounding@CUIElement@@AEAAJ_N@Z
    long PushUseLayoutRounding(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRequestBringIntoViewEvent@CUIElement@@AEAAXUXRECTF_WH@@_N11NNNN@Z
    void RaiseRequestBringIntoViewEvent(XRECTF_WH, bool, bool, bool, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDataListHasHitTestVisibleVisuals@CUIElement@@CA_NPEBV?$xvector@PEAUIUnknown@@@@@Z
    static bool RenderDataListHasHitTestVisibleVisuals(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCanDrag@CUIElement@@AEAAXI@Z
    void SetCanDrag(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisualTransformDirty@CUIElement@@AEAAXXZ
    void SetHandOffVisualTransformDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDoubleTapEnabled@CUIElement@@AEAAXI@Z
    void SetIsDoubleTapEnabled(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHitTestVisible@CUIElement@@AEAAXI@Z
    void SetIsHitTestVisible(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHoldEnabled@CUIElement@@AEAAXI@Z
    void SetIsHoldEnabled(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsRightTapEnabled@CUIElement@@AEAAXI@Z
    void SetIsRightTapEnabled(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTapEnabled@CUIElement@@AEAAXI@Z
    void SetIsTapEnabled(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStoredCrossDeviceHandOffVisual@CUIElement@@AEAAXPEAUIDCompositionVisual2@@@Z
    void SetStoredCrossDeviceHandOffVisual(IDCompositionVisual2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStoredHandInVisual@CUIElement@@AEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    void SetStoredHandInVisual(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationImpl@CUIElement@@AEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@_N@Z
    long StartAnimationImpl(::Windows::UI::Composition::ICompositionAnimationBase *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHandOffVisualCaching@CUIElement@@AEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    void StartHandOffVisualCaching(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllFacadeAnimations@CUIElement@@AEAAXXZ
    void StopAllFacadeAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopHandOffVisualCaching@CUIElement@@AEAAXXZ
    void StopHandOffVisualCaching();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInnerToOuterChain@CUIElement@@CAJPEAV1@PEBV1@PEBUXPOINTF@@PEAU2@I@Z
    static long TransformInnerToOuterChain(CUIElement *, CUIElement const *, XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInnerToOuterChainThrough3DSubtree@CUIElement@@CAPEAV1@PEAV1@PEBV1@PEBUXRECTF_RB@@PEAU2@@Z
    static CUIElement * TransformInnerToOuterChainThrough3DSubtree(CUIElement *, CUIElement const *, XRECTF_RB const *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToOuter2D@CUIElement@@AEAA_NPEBVHitTestParams@@AEAUXRECTF_RB@@@Z
    bool TransformToOuter2D(HitTestParams const *, XRECTF_RB &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToVisualHelperGetTransformer@CUIElement@@AEAAJPEAV1@PEAIPEAPEAUITransformer@@@Z
    long TransformToVisualHelperGetTransformer(CUIElement *, unsigned int *, ITransformer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImplicitShowHideAnimationInfo@CUIElement@@AEAAXW4ImplicitAnimationType@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    void UpdateImplicitShowHideAnimationInfo(int, ::Windows::UI::Composition::ICompositionAnimationBase *);
};
