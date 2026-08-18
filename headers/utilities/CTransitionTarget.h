#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class CTransitionTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyClip@CTransitionTarget@@QEAAXUXRECTF_WH@@PEAU2@@Z
    void ApplyClip(XRECTF_WH, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CTransitionTarget@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipToTransitionTarget@CTransitionTarget@@QEAAJAEAUXRECTF_WH@@AEAVHitTestPolygon@@PEAI@Z
    long ClipToTransitionTarget(XRECTF_WH &, HitTestPolygon &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransitionTarget@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CTransitionTarget@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCOpacityExpression@CTransitionTarget@@QEAAXPEAVWinRTExpressionConversionContext@@@Z
    void EnsureWUCOpacityExpression(WinRTExpressionConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipTransform@CTransitionTarget@@QEAAXAEBUXRECTF_WH@@PEAVCMILMatrix@@@Z
    void GetClipTransform(XRECTF_WH const &, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransitionTarget@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCOpacityExpression@CTransitionTarget@@QEBA?AV?$xref_ptr@UIExpressionAnimation@Composition@UI@Windows@@@@XZ
    WindissectOpaque GetWUCOpacityExpression() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CTransitionTarget@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetClipDirty@CTransitionTarget@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetClipDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetOpacityDirty@CTransitionTarget@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetOpacityDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetProjectionDirty@CTransitionTarget@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetProjectionDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetTransformDirty@CTransitionTarget@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetTransformDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsWUCOpacityExpression@CTransitionTarget@@QEAA_NXZ
    bool NeedsWUCOpacityExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CTransitionTarget@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransitionTarget@@UEAA@XZ
    virtual ~CTransitionTarget();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransitionTarget@@IEAA@PEAVCCoreServices@@@Z
    CTransitionTarget(CCoreServices *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyClipTransformOrigin@CTransitionTarget@@AEAAXAEBUXRECTF_WH@@PEAVCMILMatrix@@@Z
    void ApplyClipTransformOrigin(XRECTF_WH const &, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@CTransitionTarget@@AEAAXAEAUXRECTF_WH@@@Z
    void TransformBounds(XRECTF_WH &);
};
