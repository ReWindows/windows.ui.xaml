#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 103 member(s).
class HWCompTreeNodeWinRT {
public:
    class ImplicitAnimationDisabler;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompTreeNodeWinRT@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@PEAVDCompTreeHost@@IIPEAPEAVHWCompTreeNode@@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, DCompTreeHost *, unsigned int, unsigned int, HWCompTreeNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardHandInVisual@HWCompTreeNodeWinRT@@UEAAXXZ
    virtual void DiscardHandInVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardHandOffVisual@HWCompTreeNodeWinRT@@UEAAXXZ
    virtual void DiscardHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisual@HWCompTreeNodeWinRT@@UEAAJPEAVDCompTreeHost@@@Z
    virtual long EnsureVisual(DCompTreeHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerVisualForChildren@HWCompTreeNodeWinRT@@QEBAPEAUIContainerVisual@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::IContainerVisual * GetContainerVisualForChildren() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandOffVisual@HWCompTreeNodeWinRT@@UEAAPEAUIVisual@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IVisual * GetHandOffVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceVisualForIncrementalRendering@HWCompTreeNodeWinRT@@UEBAPEAUIVisual@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IVisual * GetReferenceVisualForIncrementalRendering() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisual@HWCompTreeNodeWinRT@@UEBAPEAUIDCompVisual@DCompHelpers@@XZ
    virtual WindissectOpaque * GetVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCVisual@HWCompTreeNodeWinRT@@UEBA?AV?$xref_ptr@UIVisual@Composition@UI@Windows@@@@XZ
    virtual WindissectOpaque GetWUCVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHandInVisual@HWCompTreeNodeWinRT@@UEBA_NXZ
    virtual bool HasHandInVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHandOffVisual@HWCompTreeNodeWinRT@@UEBA_NXZ
    virtual bool HasHandOffVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHitTestVisibleContentInSubtree@HWCompTreeNodeWinRT@@UEBA_NXZ
    virtual bool HasHitTestVisibleContentInSubtree() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildSynchronous@HWCompTreeNodeWinRT@@QEAAXPEAVDCompTreeHost@@PEAVHWCompNode@@1PEAUIVisual@Composition@UI@Windows@@PEAVCUIElement@@@Z
    void InsertChildSynchronous(DCompTreeHost *, HWCompNode *, HWCompNode *, ::Windows::UI::Composition::IVisual *, CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisualEqualTo@HWCompTreeNodeWinRT@@UEBA_NPEAUIDCompositionVisual2@@@Z
    virtual bool IsVisualEqualTo(IDCompositionVisual2*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinRT@HWCompTreeNodeWinRT@@UEBA_NXZ
    virtual bool IsWinRT() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSynchronous@HWCompTreeNodeWinRT@@QEAAXXZ
    void RemoveSynchronous();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowReuseHandOffVisual@HWCompTreeNodeWinRT@@UEAAX_N@Z
    virtual void SetAllowReuseHandOffVisual(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementData@HWCompTreeNodeWinRT@@UEAAJPEAVCWindowRenderTarget@@PEAVCUIElement@@_N@Z
    virtual long SetElementData(CWindowRenderTarget *, CUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandInVisual@HWCompTreeNodeWinRT@@UEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    virtual void SetHandInVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandOffVisual@HWCompTreeNodeWinRT@@UEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    virtual void SetHandOffVisual(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeChildren@HWCompTreeNodeWinRT@@UEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    virtual long UpdateTreeChildren(DCompTreeHost *, unsigned int *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompTreeNodeWinRT@@UEAA@XZ
    virtual ~HWCompTreeNodeWinRT();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupBottomClipVisual@HWCompTreeNodeWinRT@@IEAAXH@Z
    void CleanupBottomClipVisual(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupChildLinks@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupChildLinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupContentVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupContentVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupCrossDeviceHandOffVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupCrossDeviceHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDManipHitTestVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupDManipHitTestVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupHandInVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupHandInVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupHandOffVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupPrependVisualListener@HWCompTreeNodeWinRT@@IEAAXXZ
    void CleanupPrependVisualListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContentVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void CreateContentVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDropShadowVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAPEAUIVisual@Composition@UI@Windows@@AEBUDropShadowRecipe@@@Z
    void CreateDropShadowVisual(DCompTreeHost *, ::Windows::UI::Composition::IVisual * *, DropShadowRecipe const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWUCSpineVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAPEAUIVisual@Composition@UI@Windows@@PEBG@Z
    void CreateWUCSpineVisual(DCompTreeHost *, ::Windows::UI::Composition::IVisual * *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDManipData@HWCompTreeNodeWinRT@@MEAAJXZ
    virtual long EnsureDManipData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDManipHitTestVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void EnsureDManipHitTestVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDropShadowVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void EnsureDropShadowVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFacadeGlueExpression@HWCompTreeNodeWinRT@@IEAA?AV?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@W4KnownPropertyIndex@@PEBG@Z
    WindissectOpaque EnsureFacadeGlueExpression(::Windows::UI::Composition::ICompositor *, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTranslationExpressions@HWCompTreeNodeWinRT@@IEAAXPEAVCUIElement@@@Z
    void EnsureTranslationExpressions(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBottomMostNonContentVisual@HWCompTreeNodeWinRT@@IEBAPEAUIVisual@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::IVisual * GetBottomMostNonContentVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBottomMostVisual@HWCompTreeNodeWinRT@@IEBAPEAUIVisual@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::IVisual * GetBottomMostVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildForBottomClipVisual@HWCompTreeNodeWinRT@@IEBAPEAUIVisual@Composition@UI@Windows@@H@Z
    ::Windows::UI::Composition::IVisual * GetChildForBottomClipVisual(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementForLTEProperties@HWCompTreeNodeWinRT@@IEBAPEAVCUIElement@@XZ
    CUIElement * GetElementForLTEProperties() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentForBottomClipVisual@HWCompTreeNodeWinRT@@IEBAPEAUIVisual@Composition@UI@Windows@@H@Z
    ::Windows::UI::Composition::IVisual * GetParentForBottomClipVisual(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryOpacityScenario@HWCompTreeNodeWinRT@@IEAA?AW4OpacityScenario@1@XZ
    int GetPrimaryOpacityScenario();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionTransformInfo@HWCompTreeNodeWinRT@@MEAA_NPEAURedirectionTransformInfo@@@Z
    virtual bool GetRedirectionTransformInfo(RedirectionTransformInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeShadowFromDropShadowCaster@HWCompTreeNodeWinRT@@IEBAPEAVCThemeShadow@@XZ
    CThemeShadow * GetThemeShadowFromDropShadowCaster() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualCollectionFromWUCSpineVisual@HWCompTreeNodeWinRT@@KAXPEAUIVisual@Composition@UI@Windows@@PEAPEAUIVisualCollection@345@@Z
    static void GetVisualCollectionFromWUCSpineVisual(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisualCollection * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWCompTreeNodeWinRT@@IEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@PEAVDCompTreeHost@@II@Z
    HWCompTreeNodeWinRT(CCoreServices *, CompositorTreeHost *, DCompTreeHost *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIndependentTransformManipulation@HWCompTreeNodeWinRT@@IEBA_NXZ
    bool HasIndependentTransformManipulation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransitionClipAnimation@HWCompTreeNodeWinRT@@IEBA_NXZ
    bool HasTransitionClipAnimation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtBeginningInternal@HWCompTreeNodeWinRT@@MEAAJPEAVDCompTreeHost@@PEAVHWCompNode@@@Z
    virtual long InsertChildAtBeginningInternal(DCompTreeHost *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildInternal@HWCompTreeNodeWinRT@@MEAAJPEAVDCompTreeHost@@PEAVHWCompNode@@1PEAVCUIElement@@@Z
    virtual long InsertChildInternal(DCompTreeHost *, HWCompNode *, HWCompNode *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildSynchronousInternal@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAVHWCompNode@@1PEAUIVisual@Composition@UI@Windows@@PEAVCUIElement@@@Z
    void InsertChildSynchronousInternal(DCompTreeHost *, HWCompNode *, HWCompNode *, ::Windows::UI::Composition::IVisual *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertWUCSpineVisual@HWCompTreeNodeWinRT@@IEAAXPEAUIVisual@Composition@UI@Windows@@0@Z
    void InsertWUCSpineVisual(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBottomMostClipVisual@HWCompTreeNodeWinRT@@IEBA_NH@Z
    bool IsBottomMostClipVisual(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingHandOffVisual@HWCompTreeNodeWinRT@@IEBA_NAEAVCUIElement@@@Z
    bool IsUsingHandOffVisual(CUIElement &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWUCClipTransformMatrixDifferentFromPrevious@HWCompTreeNodeWinRT@@IEAA_NAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z
    bool IsWUCClipTransformMatrixDifferentFromPrevious(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDropShadow@HWCompTreeNodeWinRT@@IEAA?AV?$ComPtr@UICompositionShadow@Composition@UI@Windows@@@WRL@Microsoft@@PEAVDCompTreeHost@@MUColor@UI@Windows@@M@Z
    WindissectOpaque MakeDropShadow(DCompTreeHost *, float, ::Windows::UI::Color, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLayerVisual@HWCompTreeNodeWinRT@@IEAA?AV?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@PEAVDCompTreeHost@@PEAUICompositionShadow@Composition@UI@Windows@@PEAUIVisual@789@Ufloat2@Numerics@Foundation@9@@Z
    WindissectOpaque MakeLayerVisual(DCompTreeHost *, ::Windows::UI::Composition::ICompositionShadow *, ::Windows::UI::Composition::IVisual *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeShapeVisual@HWCompTreeNodeWinRT@@IEAA?AV?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@PEAVDCompTreeHost@@PEAUICompositionShape@Composition@UI@Windows@@Ufloat2@Numerics@Foundation@9@Ufloat3@Numerics@Foundation@9@@Z
    WindissectOpaque MakeShapeVisual(DCompTreeHost *, ::Windows::UI::Composition::ICompositionShape *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsContentVisualForShadows@HWCompTreeNodeWinRT@@IEBA_NPEAVDCompTreeHost@@PEAVCUIElement@@@Z
    bool NeedsContentVisualForShadows(DCompTreeHost *, CUIElement *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushProperties@HWCompTreeNodeWinRT@@MEAAJPEAVDCompTreeHost@@_N1@Z
    virtual long PushProperties(DCompTreeHost *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildInternal@HWCompTreeNodeWinRT@@MEAAJPEAVHWCompNode@@@Z
    virtual long RemoveChildInternal(HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWUCSpineVisual@HWCompTreeNodeWinRT@@IEAAXPEAUIVisual@Composition@UI@Windows@@0@Z
    void RemoveWUCSpineVisual(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentVisualChildrenHelper@HWCompTreeNodeWinRT@@IEAAXPEAUIVisual@Composition@UI@Windows@@0@Z
    void ReparentVisualChildrenHelper(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectedAnimationRunning@HWCompTreeNodeWinRT@@MEAAJ_NPEAPEAUIDCompositionVisual2@@@Z
    virtual long SetConnectedAnimationRunning(bool, IDCompositionVisual2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDebugTag@HWCompTreeNodeWinRT@@IEAAXPEAUIVisual@Composition@UI@Windows@@PEBG@Z
    void SetDebugTag(::Windows::UI::Composition::IVisual *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameDebugTag@HWCompTreeNodeWinRT@@IEAAXXZ
    void SetNameDebugTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrependClipRect@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@AEBUXRECTF_WH@@@Z
    void SetPrependClipRect(DCompTreeHost *, XRECTF_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualHitTestVisibility@HWCompTreeNodeWinRT@@KAXPEAUIVisual@Composition@UI@Windows@@_N@Z
    static void SetVisualHitTestVisibility(::Windows::UI::Composition::IVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFacadeGlueExpression@HWCompTreeNodeWinRT@@IEAAXPEAUIVisual@Composition@UI@Windows@@PEBGPEAUIExpressionAnimation@345@@Z
    void StartFacadeGlueExpression(::Windows::UI::Composition::IVisual *, unsigned short const *, ::Windows::UI::Composition::IExpressionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterPointFacade@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAUIVisual@Composition@UI@Windows@@@Z
    void UpdateCenterPointFacade(DCompTreeHost *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCrossDeviceHandOffVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void UpdateCrossDeviceHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDManipHitTestVisual@HWCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdateDManipHitTestVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropShadowRecipeCornerRadius@HWCompTreeNodeWinRT@@IEAAXAEAUDropShadowRecipe@@@Z
    void UpdateDropShadowRecipeCornerRadius(DropShadowRecipe &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropShadowVisualBounds@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@AEBUDropShadowRecipe@@@Z
    void UpdateDropShadowVisualBounds(DCompTreeHost *, DropShadowRecipe const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropShadowVisualBrush@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@AEBUDropShadowRecipe@@@Z
    void UpdateDropShadowVisualBrush(DCompTreeHost *, DropShadowRecipe const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropShadowVisualForThemeTransitionClip@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdateDropShadowVisualForThemeTransitionClip(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropShadowVisualOpacity@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdateDropShadowVisualOpacity(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropShadowVisualTransform@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdateDropShadowVisualTransform(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHandInVisual@HWCompTreeNodeWinRT@@IEAAXXZ
    void UpdateHandInVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInsetClip@HWCompTreeNodeWinRT@@IEAA_NAEAUXRECTF_WH@@PEAUIInsetClip@Composition@UI@Windows@@W4PreviousClipComparison@1@@Z
    bool UpdateInsetClip(XRECTF_WH &, ::Windows::UI::Composition::IInsetClip *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependClip@HWCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdatePrependClip(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependClipTranslationExpression@HWCompTreeNodeWinRT@@IEAAXXZ
    void UpdatePrependClipTranslationExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependOpacity@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdatePrependOpacity(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependTransform@HWCompTreeNodeWinRT@@MEAAXXZ
    virtual void UpdatePrependTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependVisual@HWCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@_N@Z
    virtual void UpdatePrependVisual(DCompTreeHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@_N@Z
    void UpdatePrimaryVisual(DCompTreeHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualHitTestVisibility@HWCompTreeNodeWinRT@@IEAAXXZ
    void UpdatePrimaryVisualHitTestVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualOffset@HWCompTreeNodeWinRT@@IEAAXPEAUICompositor@Composition@UI@Windows@@@Z
    void UpdatePrimaryVisualOffset(::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualOpacity@HWCompTreeNodeWinRT@@IEAAXPEAUICompositor@Composition@UI@Windows@@@Z
    void UpdatePrimaryVisualOpacity(::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualTransformMatrix@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdatePrimaryVisualTransformMatrix(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualTransformParent@HWCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdatePrimaryVisualTransformParent(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRotationAxisFacade@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAUIVisual@Composition@UI@Windows@@@Z
    void UpdateRotationAxisFacade(DCompTreeHost *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRotationFacade@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAUIVisual@Composition@UI@Windows@@@Z
    void UpdateRotationFacade(DCompTreeHost *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoundedCornerClipVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdateRoundedCornerClipVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFacade@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAUIVisual@Composition@UI@Windows@@@Z
    void UpdateScaleFacade(DCompTreeHost *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformMatrixFacade@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAUIVisual@Composition@UI@Windows@@@Z
    void UpdateTransformMatrixFacade(DCompTreeHost *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransitionClipVisual@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@@Z
    void UpdateTransitionClipVisual(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTranslationExpressionParameters@HWCompTreeNodeWinRT@@IEAAXPEAVCUIElement@@@Z
    void UpdateTranslationExpressionParameters(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualClipAndTransform@HWCompTreeNodeWinRT@@IEAAXPEAVDCompTreeHost@@PEAUIVisual@Composition@UI@Windows@@@Z
    void UpdateVisualClipAndTransform(DCompTreeHost *, ::Windows::UI::Composition::IVisual *);
};
