#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 32 member(s).
class CLinearGradientBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanProduceLinearGradientBrushSpan@CLinearGradientBrush@@QEAAIXZ
    unsigned int CanProduceLinearGradientBrushSpan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CLinearGradientBrush@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CLinearGradientBrush@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackingCompositionObjectForFacade@CLinearGradientBrush@@QEAAXPEAUICompositor@Composition@UI@Windows@@PEAPEAUICompositionObject@345@PEAPEAUIFacadePropertyListener@@@Z
    void CreateBackingCompositionObjectForFacade(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionObject * *, IFacadePropertyListener * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CLinearGradientBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CLinearGradientBrush@@QEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@IPEAPEAUIBrushSpan@@@Z
    long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, unsigned int, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureDeviceIndependentResources@CLinearGradientBrush@@UEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@PEBUXRECTF_RB@@PEAUAcceleratedBrushParams@@@Z
    virtual long D2DEnsureDeviceIndependentResources(D2DPrecomputeParams const &, CMILMatrix const *, XRECTF_RB const *, AcceleratedBrushParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCenterPoint@CLinearGradientBrush@@QEBA?AUVector2@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetCenterPoint(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CLinearGradientBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScale@CLinearGradientBrush@@QEBA?AUVector2@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetScale(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformMatrix@CLinearGradientBrush@@QEBA?AUMatrix3x2@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetTransformMatrix(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTranslation@CLinearGradientBrush@@QEBA?AUVector2@Numerics@Foundation@Windows@@_N@Z
    WindissectOpaque GetTranslation(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLinearGradientBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCBrush@CLinearGradientBrush@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@AEBUXRECTF_WH@@PEBVCMILMatrix@@PEAUICompositor4@Composition@UI@Windows@@@Z
    WindissectOpaque GetWUCBrush(XRECTF_WH const &, CMILMatrix const *, ::Windows::UI::Composition::ICompositor4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CLinearGradientBrush@@UEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateBackingCompositionObjectWithFacade@CLinearGradientBrush@@QEAAXPEAUICompositionObject@Composition@UI@Windows@@W4KnownPropertyIndex@@@Z
    void PopulateBackingCompositionObjectWithFacade(::Windows::UI::Composition::ICompositionObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullFacadePropertyValueFromCompositionObject@CLinearGradientBrush@@QEAAJPEAUICompositionObject@Composition@UI@Windows@@W4KnownPropertyIndex@@@Z
    long PullFacadePropertyValueFromCompositionObject(::Windows::UI::Composition::ICompositionObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CLinearGradientBrush@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompResourceDirty@CLinearGradientBrush@@UEAAXXZ
    virtual void SetDCompResourceDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CLinearGradientBrush@@UEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    virtual long StartAnimation(::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CLinearGradientBrush@@UEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    virtual long StopAnimation(::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcceleratedBrush@CLinearGradientBrush@@UEAAJAEBUD2DRenderParams@@@Z
    virtual long UpdateAcceleratedBrush(D2DRenderParams const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLinearGradientBrush@@IEAA@AEBV0@AEAJ@Z
    CLinearGradientBrush(CLinearGradientBrush const &, long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CLinearGradientBrush@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyWUCBrushProperties@CLinearGradientBrush@@AEAAXPEAUICompositor4@Composition@UI@Windows@@PEAUICompositionBrush@345@AEBUXRECTF_WH@@PEBVCMILMatrix@@@Z
    void ApplyWUCBrushProperties(::Windows::UI::Composition::ICompositor4*, ::Windows::UI::Composition::ICompositionBrush *, XRECTF_WH const &, CMILMatrix const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLinearGradientBrush@@AEAA@PEAVCCoreServices@@@Z
    CLinearGradientBrush(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseSingleWUCBrush@CLinearGradientBrush@@AEBA_NXZ
    bool CanUseSingleWUCBrush() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcceleratedBrush@CLinearGradientBrush@@AEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    long CreateAcceleratedBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePrimaryWUCBrush@CLinearGradientBrush@@AEAAJPEAUICompositor4@Composition@UI@Windows@@@Z
    long EnsurePrimaryWUCBrush(::Windows::UI::Composition::ICompositor4*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLinearGradientBrush@@EEAA@XZ
    virtual ~CLinearGradientBrush();
};
