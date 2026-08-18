#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class CompositorTreeHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CompositorTreeHost@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CompositorTreeHost@@SAJPEAPEAV1@@Z
    static long Create(CompositorTreeHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertNode@CompositorTreeHost@@QEAAJPEAVHWCompNode@@PEAVHWCompTreeNode@@0PEAVCUIElement@@@Z
    long InsertNode(HWCompNode *, HWCompTreeNode *, HWCompNode *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTemporaryNode@CompositorTreeHost@@QEAAJPEAVHWCompNode@@PEAVHWCompTreeNode@@0@Z
    long InsertTemporaryNode(HWCompNode *, HWCompTreeNode *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTemporaryNodeAtBeginning@CompositorTreeHost@@QEAAJPEAVHWCompNode@@PEAVHWCompTreeNode@@@Z
    long InsertTemporaryNodeAtBeginning(HWCompNode *, HWCompTreeNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepObjectAlive@CompositorTreeHost@@QEAAXQEAVCDependencyObject@@@Z
    void KeepObjectAlive(CDependencyObject * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepObjectAlive@CompositorTreeHost@@QEAAXQEAUIUnknown@@@Z
    void KeepObjectAlive(IUnknown * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFrame@CompositorTreeHost@@QEAAJPEAVDCompTreeHost@@_N@Z
    long ProcessFrame(DCompTreeHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveCommands@CompositorTreeHost@@QEAAJXZ
    long ProcessRemoveCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNode@CompositorTreeHost@@QEAAJPEAVHWCompNode@@I@Z
    long RemoveNode(HWCompNode *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNodeForReparenting@CompositorTreeHost@@QEAAJPEAVHWCompTreeNode@@@Z
    long RemoveNodeForReparenting(HWCompTreeNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemporaryNodes@CompositorTreeHost@@QEAAJXZ
    long RemoveTemporaryNodes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetManipulationDataForRemovedCompNode@CompositorTreeHost@@QEAAXPEAVCUIElement@@@Z
    void ResetManipulationDataForRemovedCompNode(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementData@CompositorTreeHost@@QEAAJPEAVHWCompTreeNode@@PEAVCWindowRenderTarget@@PEAVCUIElement@@_N@Z
    long SetElementData(HWCompTreeNode *, CWindowRenderTarget *, CUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInkCanvasVisual@CompositorTreeHost@@QEAAJPEAVHWCompInkCanvasNode@@PEAVCInkCanvas@@MM@Z
    long SetInkCanvasVisual(HWCompInkCanvasNode *, CInkCanvas *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMedia@CompositorTreeHost@@QEAAJPEAVHWCompMediaNode@@AEBUXRECT_WH@@AEBUXMATRIX@@AEBUXRECTF_WH@@IPEAX@Z
    long SetMedia(HWCompMediaNode *, XRECT_WH const &, XMATRIX const &, XRECTF_WH const &, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrependProperties@CompositorTreeHost@@QEAAJPEAVHWCompTreeNode@@AEBUXMATRIX@@AEBUXRECTF_WH@@M@Z
    long SetPrependProperties(HWCompTreeNode *, XMATRIX const &, XRECTF_WH const &, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedirectionTarget@CompositorTreeHost@@QEAAJPEAVHWCompTreeNode@@0AEBUXMATRIX@@@Z
    long SetRedirectionTarget(HWCompTreeNode *, HWCompTreeNode *, XMATRIX const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@CompositorTreeHost@@QEAAJPEAVHWCompSwapChainNode@@PEAVCSwapChainElement@@PEAUIUnknown@@2MMI2@Z
    long SetSwapChain(HWCompSwapChainNode *, CSwapChainElement *, IUnknown *, IUnknown *, float, float, unsigned int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWebViewVisual@CompositorTreeHost@@QEAAJPEAVHWCompWebViewNode@@PEAVCWebView@@@Z
    long SetWebViewVisual(HWCompWebViewNode *, CWebView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitContainerVisual@CompositorTreeHost@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@0PEAUIVisual@345@@Z
    long SplitContainerVisual(::Windows::UI::Composition::IContainerVisual *, ::Windows::UI::Composition::IContainerVisual *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitPrimitiveGroup@CompositorTreeHost@@QEAAJPEAUIDCompositionPrimitiveGroupPartner@@0PEAUIDCompositionPrimitivePartner@@@Z
    long SplitPrimitiveGroup(IDCompositionPrimitiveGroupPartner *, IDCompositionPrimitiveGroupPartner *, IDCompositionPrimitivePartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackTemporaryNode@CompositorTreeHost@@QEAAXAEAVHWCompNode@@@Z
    void TrackTemporaryNode(HWCompNode &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitContainerVisualImpl@CompositorTreeHost@@CAJPEAUIContainerVisual@Composition@UI@Windows@@0PEAUIVisual@345@@Z
    static long SplitContainerVisualImpl(::Windows::UI::Composition::IContainerVisual *, ::Windows::UI::Composition::IContainerVisual *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitPrimitiveGroupImpl@CompositorTreeHost@@CAJPEAUIDCompositionPrimitiveGroupPartner@@0PEAUIDCompositionPrimitivePartner@@@Z
    static long SplitPrimitiveGroupImpl(IDCompositionPrimitiveGroupPartner *, IDCompositionPrimitiveGroupPartner *, IDCompositionPrimitivePartner *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositorTreeHost@@EEAA@XZ
    virtual ~CompositorTreeHost();
};
