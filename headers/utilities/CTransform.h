#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildRotateMatrix@CTransform@@SAXPEAVCMILMatrix@@MUXPOINTF@@@Z
    static void BuildRotateMatrix(CMILMatrix *, float, XPOINTF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildSkewMatrix@CTransform@@SAXPEAVCMILMatrix@@MMUXPOINTF@@@Z
    static void BuildSkewMatrix(CMILMatrix *, float, float, XPOINTF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampAngle360@CTransform@@SAMM@Z
    static float ClampAngle360(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CTransform@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CTransform@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Inverse@CTransform@@QEAAJPEAPEAVCGeneralTransform@@@Z
    long Inverse(CGeneralTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransformWithOrigin@CTransform@@QEAAXMMPEAVDCompTransformConversionContext@@PEAPEAUIDCompositionTransform@@@Z
    void MakeDCompTransformWithOrigin(float, float, DCompTransformConversionContext *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpressionWithOrigin@CTransform@@QEAAXMMPEAVWinRTExpressionConversionContext@@PEAPEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void MakeWinRTExpressionWithOrigin(float, float, WinRTExpressionConversionContext *, ::Windows::UI::Composition::IExpressionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetRenderDirty@CTransform@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetRenderDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CTransform@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompResourceDirty@CTransform@@UEAAXXZ
    virtual void SetDCompResourceDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPoints@CTransform@@UEAAJPEAUXPOINTF@@0I@Z
    virtual long TransformPoints(XPOINTF *, XPOINTF *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransform@@UEAA@XZ
    virtual ~CTransform();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransform@@IEAA@PEAVCCoreServices@@@Z
    CTransform(CCoreServices *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransform@@IEAA@AEBV0@AEAJ@Z
    CTransform(CTransform const &, long &);
};
