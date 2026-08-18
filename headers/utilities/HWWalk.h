#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 42 member(s).
class HWWalk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMediaEngineAndDCompParameters@HWWalk@@SAJPEAVCFrameworkElement@@IIPEAUXSIZE@@PEAUXRECTF_RB@@PEAUXRECT_WH@@PEAVCMILMatrix@@PEAUXRECTF_WH@@@Z
    static long CalculateMediaEngineAndDCompParameters(CFrameworkElement *, unsigned int, unsigned int, XSIZE *, XRECTF_RB *, XRECT_WH *, CMILMatrix *, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWWalk@@SAJPEAVCWindowRenderTarget@@PEAVCCoreServices@@AEAVMaxTextureSizeProvider@@PEAPEAV1@@Z
    static long Create(CWindowRenderTarget *, CCoreServices *, MaxTextureSizeProvider &, HWWalk * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorTreeHost@HWWalk@@QEBAPEAVCompositorTreeHost@@PEAVCWindowRenderTarget@@@Z
    CompositorTreeHost * GetCompositorTreeHost(CWindowRenderTarget *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastVisual@HWWalk@@QEBAPEAUIVisual@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::IVisual * GetLastVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNinegridForBorderElement@HWWalk@@SA_NPEAVCUIElement@@_NPEAUXRECTF_RB@@@Z
    static bool GetNinegridForBorderElement(CUIElement *, bool, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPrimitiveIntoCurrentPrimitiveGroup@HWWalk@@QEAAJPEAUIDCompositionPrimitivePartner@@@Z
    long InsertPrimitiveIntoCurrentPrimitiveGroup(IDCompositionPrimitivePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBorderLikeElementThatRequiresSoftwareRendering@HWWalk@@SA_NPEAVCUIElement@@@Z
    static bool IsBorderLikeElementThatRequiresSoftwareRendering(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInBitmapCacheSubtree@HWWalk@@SA_NPEAVCUIElement@@@Z
    static bool IsInBitmapCacheSubtree(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShapeThatRequiresSoftwareRendering@HWWalk@@SA_NPEAVCUIElement@@@Z
    static bool IsShapeThatRequiresSoftwareRendering(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderForRenderTargetElement@HWWalk@@QEAAJPEAVCRenderTargetElementData@@PEAVCWindowRenderTarget@@@Z
    long RenderForRenderTargetElement(CRenderTargetElementData *, CWindowRenderTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDoSynchronousCompTreeUpdates@HWWalk@@QEBA_NXZ
    bool ShouldDoSynchronousCompTreeUpdates() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldImageUseNineGrid@HWWalk@@SA_NPEAVCImage@@@Z
    static bool ShouldImageUseNineGrid(CImage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseSpriteVisuals@HWWalk@@QEBA_NXZ
    bool ShouldUseSpriteVisuals() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastPrimitiveAndCompNodeFromSubgraph@HWWalk@@QEAAXPEAVCUIElement@@AEBUHWRenderParams@@@Z
    void UpdateLastPrimitiveAndCompNodeFromSubgraph(CUIElement *, HWRenderParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalendarViewBaseItemRenderChildren@HWWalk@@CAJPEAVCCalendarViewBaseItemChrome@@AEBUHWRenderParams@@@Z
    static long CalendarViewBaseItemRenderChildren(CCalendarViewBaseItemChrome *, HWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionPeer@HWWalk@@CAJPEAVCUIElement@@AEBUHWRenderParams@@1PEAVHWCompTreeNode@@PEBVCMILMatrix@@PEAPEAV4@PEAPEAVHWCompLeafNode@@PEAPEAUIUnknown@@PEAI@Z
    static long EnsureCompositionPeer(CUIElement *, HWRenderParams const &, HWRenderParams const &, HWCompTreeNode *, CMILMatrix const *, HWCompTreeNode * *, HWCompLeafNode * *, IUnknown * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureElementAndContentNodes@HWWalk@@CAJPEAVCUIElement@@PEAVHWCompTreeNode@@IAEBUHWRenderParams@@21PEBVCMILMatrix@@PEAPEAV3@PEAPEAVHWCompLeafNode@@PEAPEAUIUnknown@@@Z
    static long EnsureElementAndContentNodes(CUIElement *, HWCompTreeNode *, unsigned int, HWRenderParams const &, HWRenderParams const &, HWCompTreeNode *, CMILMatrix const *, HWCompTreeNode * *, HWCompLeafNode * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePostSubgraphNode@HWWalk@@CAJPEAVCUIElement@@AEAUHWRenderParams@@PEAVHWCompTreeNode@@2PEAPEAVHWCompRenderDataNode@@@Z
    static long EnsurePostSubgraphNode(CUIElement *, HWRenderParams &, HWCompTreeNode *, HWCompTreeNode *, HWCompRenderDataNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionTarget@HWWalk@@CAPEAVCUIElement@@PEAV2@@Z
    static CUIElement * GetRedirectionTarget(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateVideoStreamRelatedParameters@HWWalk@@CAXPEAVCFrameworkElement@@PEBUXRECTF_WH@@1IIPEAVCMILMatrix@@PEAUXRECTF_RB@@PEAUXRECT_WH@@PEAU3@@Z
    static void GetUpdateVideoStreamRelatedParameters(CFrameworkElement *, XRECTF_WH const *, XRECTF_WH const *, unsigned int, unsigned int, CMILMatrix *, XRECTF_RB *, XRECT_WH *, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HWWalk@@AEAAJPEAVCCoreServices@@@Z
    long Initialize(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAbsolutelyPositioned@HWWalk@@CAIPEAVCUIElement@@@Z
    static unsigned int IsAbsolutelyPositioned(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShapeMaskRequiredForBorder@HWWalk@@CA_NPEAVCFrameworkElement@@@Z
    static bool IsShapeMaskRequiredForBorder(CFrameworkElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShapeMaskRequiredForRectangle@HWWalk@@CAIPEAVCRectangle@@@Z
    static unsigned int IsShapeMaskRequiredForRectangle(CRectangle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutTransitionElementRenderTarget@HWWalk@@CAJPEAVCLayoutTransitionElement@@AEBUHWRenderParams@@@Z
    static long LayoutTransitionElementRenderTarget(CLayoutTransitionElement *, HWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupRenderChild@HWWalk@@CAJPEAVCPopup@@AEBUHWRenderParams@@@Z
    static long PopupRenderChild(CPopup *, HWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupRootRenderChildren@HWWalk@@CAJPEAVCPopupRoot@@AEBUHWRenderParams@@@Z
    static long PopupRootRenderChildren(CPopupRoot *, HWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@HWWalk@@CAJPEAVCUIElement@@AEBUHWRenderParams@@I@Z
    static long Render(CUIElement *, HWRenderParams const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderConnectedAnimationUnloadingElements@HWWalk@@CAJPEAVCConnectedAnimationRoot@@AEBUHWRenderParams@@@Z
    static long RenderConnectedAnimationUnloadingElements(CConnectedAnimationRoot *, HWRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContentAndChildren@HWWalk@@CAJPEAVCUIElement@@AEAUHWRenderParams@@II@Z
    static long RenderContentAndChildren(CUIElement *, HWRenderParams &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderProperties@HWWalk@@CAJPEAVCUIElement@@AEBUHWRenderParams@@IPEAI2222@Z
    static long RenderProperties(CUIElement *, HWRenderParams const &, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderRootImpl@HWWalk@@AEAAJPEAVCUIElement@@PEAVCWindowRenderTarget@@IIMPEAVTransformAndClipStack@@_N3@Z
    long RenderRootImpl(CUIElement *, CWindowRenderTarget *, unsigned int, unsigned int, float, TransformAndClipStack *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestImageDecode@HWWalk@@CAJPEBUXRECTF_WH@@AEBUHWRenderParamsBase@@PEAVCImageBrush@@PEAVCUIElement@@PEBUXRECTF_RB@@@Z
    static long RequestImageDecode(XRECTF_WH const *, HWRenderParamsBase const &, CImageBrush *, CUIElement *, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundSourceRect@HWWalk@@CAXPEBUXRECTF_WH@@PEAU2@PEAI@Z
    static void RoundSourceRect(XRECTF_WH const *, XRECTF_WH *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitCurrentRenderDataParent@HWWalk@@CAJPEAVDCompTreeHost@@PEAV1@PEAVCWindowRenderTarget@@PEAPEAUIUnknown@@@Z
    static long SplitCurrentRenderDataParent(DCompTreeHost *, HWWalk *, CWindowRenderTarget *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitCurrentRenderDataParentPrimitiveGroup@HWWalk@@CAJPEAVDCompTreeHost@@PEAV1@PEAVCWindowRenderTarget@@PEAPEAUIDCompositionPrimitiveGroupPartner@@@Z
    static long SplitCurrentRenderDataParentPrimitiveGroup(DCompTreeHost *, HWWalk *, CWindowRenderTarget *, IDCompositionPrimitiveGroupPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitCurrentRenderDataParentWinRTVisual@HWWalk@@CAJPEAVDCompTreeHost@@PEAV1@PEAVCWindowRenderTarget@@PEAPEAUIContainerVisual@Composition@UI@Windows@@@Z
    static long SplitCurrentRenderDataParentWinRTVisual(DCompTreeHost *, HWWalk *, CWindowRenderTarget *, ::Windows::UI::Composition::IContainerVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseWUCShapes@HWWalk@@AEAA_NXZ
    bool UseWUCShapes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewUpdateTransform@HWWalk@@CAJPEAVCWebView@@AEBUHWRenderParams@@@Z
    static long WebViewUpdateTransform(CWebView *, HWRenderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWWalk@@EEAA@XZ
    virtual ~HWWalk();
};
