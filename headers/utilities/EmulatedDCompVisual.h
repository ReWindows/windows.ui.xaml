#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 36 member(s).
class EmulatedDCompVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompVisual@EmulatedDCompVisual@@UEBAPEAUIDCompositionVisual2@@XZ
    virtual IDCompositionVisual2* GetDCompVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionOnMainDevice@EmulatedDCompVisual@@UEBAPEAUIDCompositionTransform3D@@XZ
    virtual IDCompositionTransform3D * GetProjectionOnMainDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedDCompVisualHandle@EmulatedDCompVisual@@UEAAJPEA_J@Z
    virtual long GetSharedDCompVisualHandle(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformOnMainDevice@EmulatedDCompVisual@@UEBAPEAUIDCompositionTransform@@XZ
    virtual IDCompositionTransform * GetTransformOnMainDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCrossDeviceSharedVisual@EmulatedDCompVisual@@UEAA_NXZ
    virtual bool HasCrossDeviceSharedVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@EmulatedDCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@0@Z
    virtual long InsertChild(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtBeginning@EmulatedDCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@@Z
    virtual long InsertChildAtBeginning(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCrossDeviceSharedVisual@EmulatedDCompVisual@@UEAAJPEAUIDCompositionVisual2@@@Z
    virtual long InsertCrossDeviceSharedVisual(IDCompositionVisual2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertWinRTChildAtTop@EmulatedDCompVisual@@UEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long InsertWinRTChildAtTop(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsEmulated@EmulatedDCompVisual@@UEAAIXZ
    virtual unsigned int IsEmulated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllWinRTChildren@EmulatedDCompVisual@@UEAAJXZ
    virtual long RemoveAllWinRTChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@EmulatedDCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@@Z
    virtual long RemoveChild(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWinRTChild@EmulatedDCompVisual@@UEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long RemoveWinRTChild(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@EmulatedDCompVisual@@UEAAJPEBUXRECTF_WH@@@Z
    virtual long SetClip(XRECTF_WH const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositeMode@EmulatedDCompVisual@@UEAAJW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    virtual long SetCompositeMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompOpacity@EmulatedDCompVisual@@UEAAXPEAUIDCompositionAnimation@@@Z
    virtual void SetDCompOpacity(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompProjection@EmulatedDCompVisual@@UEAAXPEAUIDCompositionTransform3D@@@Z
    virtual void SetDCompProjection(IDCompositionTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompTransform@EmulatedDCompVisual@@UEAAJPEAUIDCompositionTransform@@@Z
    virtual long SetDCompTransform(IDCompositionTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompTransforms@EmulatedDCompVisual@@UEAAXPEBV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@PEAUIDCompositionTransform@@@Z
    virtual void SetDCompTransforms(WindissectOpaque const *, IDCompositionTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHitTestVisible@EmulatedDCompVisual@@UEAAX_N@Z
    virtual void SetIsHitTestVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPixelSnappingEnabled@EmulatedDCompVisual@@UEAAX_N@Z
    virtual void SetIsPixelSnappingEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMedia@EmulatedDCompVisual@@UEAAJPEAX@Z
    virtual long SetMedia(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@EmulatedDCompVisual@@UEAAJM@Z
    virtual long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimitiveGroup@EmulatedDCompVisual@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@@Z
    virtual long SetPrimitiveGroup(IDCompositionPrimitiveGroupPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjection@EmulatedDCompVisual@@UEAAJPEBVCMILMatrix4x4@@@Z
    virtual long SetProjection(CMILMatrix4x4const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedirectionProjection@EmulatedDCompVisual@@UEAAJPEAUIDCompositionTransform3D@@@Z
    virtual long SetRedirectionProjection(IDCompositionTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@EmulatedDCompVisual@@UEAAJPEAVCSwapChainElement@@PEAUIUnknown@@MMI1@Z
    virtual long SetSwapChain(CSwapChainElement *, IUnknown *, float, float, unsigned int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChainSurface@EmulatedDCompVisual@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSwapChainSurface(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@EmulatedDCompVisual@@UEAAJPEBVCMILMatrix@@@Z
    virtual long SetTransform(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParent@EmulatedDCompVisual@@UEAAJPEAUIDCompVisual@DCompHelpers@@@Z
    virtual long SetTransformParent(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransforms@EmulatedDCompVisual@@UEAAJPEBV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@PEBVCMILMatrix@@I@Z
    virtual long SetTransforms(WindissectOpaque const *, CMILMatrix const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@EmulatedDCompVisual@@UEAAJI@Z
    virtual long SetVisible(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EmulatedDCompVisual@@AEAA@XZ
    EmulatedDCompVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EmulatedDCompVisual@@EEAA@XZ
    virtual ~EmulatedDCompVisual();
};
