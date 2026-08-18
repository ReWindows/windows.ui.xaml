#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class CBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CBrush@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDeviceToSource@CBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAV2@@Z
    virtual long ComputeDeviceToSource(CMILMatrix const *, XRECTF_WH const *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBrush@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureDeviceIndependentResources@CBrush@@UEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@PEBUXRECTF_RB@@PEAUAcceleratedBrushParams@@@Z
    virtual long D2DEnsureDeviceIndependentResources(D2DPrecomputeParams const &, CMILMatrix const *, XRECTF_RB const *, AcceleratedBrushParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualBounds@CBrush@@UEAAXPEAUXRECTF_WH@@@Z
    virtual void GetActualBounds(XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompColor@CBrush@@UEAAPEAUIDCompositionColorPartner2@@PEAUIDCompositionDesktopDeviceRestricted@@@Z
    virtual IDCompositionColorPartner2* GetDCompColor(IDCompositionDesktopDeviceRestricted *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CBrush@@UEAAXPEAUXRECTF_WH@@@Z
    virtual void GetNaturalBounds(XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeTransform@CBrush@@QEBA?AV?$xref_ptr@VCTransform@@@@XZ
    WindissectOpaque GetRelativeTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CBrush@@QEBA?AV?$xref_ptr@VCTransform@@@@XZ
    WindissectOpaque GetTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CBrush@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasClipRect@CBrush@@UEAA_NXZ
    virtual bool HasClipRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestBrushClipInLocalSpace@CBrush@@UEAAJPEBUXRECTF_WH@@AEBUXPOINTF@@PEAI@Z
    virtual long HitTestBrushClipInLocalSpace(XRECTF_WH const *, XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestBrushClipInLocalSpace@CBrush@@UEAAJPEBUXRECTF_WH@@AEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestBrushClipInLocalSpace(XRECTF_WH const *, HitTestPolygon const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLightTarget@CBrush@@QEAA_NXZ
    bool IsLightTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTargetedByLight@CBrush@@QEAA_NPEAVCXamlLight@@@Z
    bool IsTargetedByLight(CXamlLight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CBrush@@UEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    virtual long StartAnimation(::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CBrush@@UEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    virtual long StopAnimation(::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcceleratedBrush@CBrush@@UEAAJAEBUD2DRenderParams@@@Z
    virtual long UpdateAcceleratedBrush(D2DRenderParams const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrush@@IEAA@AEBV0@AEAJ@Z
    CBrush(CBrush const &, long &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrush@@MEAA@XZ
    virtual ~CBrush();
};
