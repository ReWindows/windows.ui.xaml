#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class HWCompWinRTVisualRenderDataNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualContent@HWCompWinRTVisualRenderDataNode@@UEAAXXZ
    virtual void ClearVisualContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompWinRTVisualRenderDataNode@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@IPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, unsigned int, ::Windows::UI::Composition::IContainerVisual *, HWCompWinRTVisualRenderDataNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderDataParent@HWCompWinRTVisualRenderDataNode@@UEAAPEAUIUnknown@@PEAVDCompTreeHost@@@Z
    virtual IUnknown * EnsureRenderDataParent(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisual@HWCompWinRTVisualRenderDataNode@@UEAAJPEAVDCompTreeHost@@@Z
    virtual long EnsureVisual(DCompTreeHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderDataParent@HWCompWinRTVisualRenderDataNode@@UEBAPEAUIUnknown@@XZ
    virtual IUnknown * GetRenderDataParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisual@HWCompWinRTVisualRenderDataNode@@UEBAPEAUIDCompVisual@DCompHelpers@@XZ
    virtual WindissectOpaque * GetVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCVisual@HWCompWinRTVisualRenderDataNode@@UEBA?AV?$xref_ptr@UIVisual@Composition@UI@Windows@@@@XZ
    virtual WindissectOpaque GetWUCVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHitTestVisibleSpriteVisuals@HWCompWinRTVisualRenderDataNode@@SA_NPEAUIContainerVisual@Composition@UI@Windows@@@Z
    static bool HasHitTestVisibleSpriteVisuals(::Windows::UI::Composition::IContainerVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHitTestVisibleVisuals@HWCompWinRTVisualRenderDataNode@@UEBA_NXZ
    virtual bool HasHitTestVisibleVisuals() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeIntoEnd@HWCompWinRTVisualRenderDataNode@@UEAAJPEAVHWCompRenderDataNode@@@Z
    virtual long MergeIntoEnd(HWCompRenderDataNode *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeVirtual@HWCompWinRTVisualRenderDataNode@@MEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    virtual long UpdateTreeVirtual(DCompTreeHost *, unsigned int *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompWinRTVisualRenderDataNode@@MEAA@XZ
    virtual ~HWCompWinRTVisualRenderDataNode();
};
