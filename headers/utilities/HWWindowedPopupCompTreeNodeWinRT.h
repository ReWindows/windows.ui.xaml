#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class HWWindowedPopupCompTreeNodeWinRT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePlaceholderVisual@HWWindowedPopupCompTreeNodeWinRT@@QEAAXPEAVDCompTreeHost@@PEAPEAUIVisual@Composition@UI@Windows@@@Z
    void EnsurePlaceholderVisual(DCompTreeHost *, ::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionTransformInfo@HWWindowedPopupCompTreeNodeWinRT@@UEAA_NPEAURedirectionTransformInfo@@@Z
    virtual bool GetRedirectionTransformInfo(RedirectionTransformInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceVisualForIncrementalRendering@HWWindowedPopupCompTreeNodeWinRT@@UEBAPEAUIVisual@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IVisual * GetReferenceVisualForIncrementalRendering() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWWindowedPopupCompTreeNodeWinRT@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCVisualInMainTree@HWWindowedPopupCompTreeNodeWinRT@@UEBA?AV?$xref_ptr@UIVisual@Composition@UI@Windows@@@@XZ
    virtual WindissectOpaque GetWUCVisualInMainTree() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWWindowedPopupCompTreeNodeWinRT@@QEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@PEAVDCompTreeHost@@@Z
    HWWindowedPopupCompTreeNodeWinRT(CCoreServices *, CompositorTreeHost *, DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualTransformParent@HWWindowedPopupCompTreeNodeWinRT@@UEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdatePrimaryVisualTransformParent(DCompTreeHost *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWWindowedPopupCompTreeNodeWinRT@@UEAA@XZ
    virtual ~HWWindowedPopupCompTreeNodeWinRT();
};
