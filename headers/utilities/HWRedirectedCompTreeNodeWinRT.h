#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class HWRedirectedCompTreeNodeWinRT {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWRedirectedCompTreeNodeWinRT@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWRedirectedCompTreeNodeWinRT@@QEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@PEAVDCompTreeHost@@@Z
    HWRedirectedCompTreeNodeWinRT(CCoreServices *, CompositorTreeHost *, DCompTreeHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedirectionTarget@HWRedirectedCompTreeNodeWinRT@@QEAAXPEAVHWCompTreeNode@@PEBVCMILMatrix@@@Z
    void SetRedirectionTarget(HWCompTreeNode *, CMILMatrix const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWRedirectedCompTreeNodeWinRT@@UEAA@XZ
    virtual ~HWRedirectedCompTreeNodeWinRT();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionTransformInfo@HWRedirectedCompTreeNodeWinRT@@MEAA_NPEAURedirectionTransformInfo@@@Z
    virtual bool GetRedirectionTransformInfo(RedirectionTransformInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependClip@HWRedirectedCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdatePrependClip(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependTransform@HWRedirectedCompTreeNodeWinRT@@MEAAXXZ
    virtual void UpdatePrependTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrependVisual@HWRedirectedCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@_N@Z
    virtual void UpdatePrependVisual(DCompTreeHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryVisualTransformParent@HWRedirectedCompTreeNodeWinRT@@MEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdatePrimaryVisualTransformParent(DCompTreeHost *);
};
