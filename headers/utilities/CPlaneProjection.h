#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CPlaneProjection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CPlaneProjection@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPlaneProjection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CPlaneProjection@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionMatrix@CPlaneProjection@@UEBA?AVCMILMatrix4x4@@XZ
    virtual CMILMatrix4x4 GetProjectionMatrix() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionMatrix@CPlaneProjection@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetProjectionMatrix(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPlaneProjection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAligned@CPlaneProjection@@UEAAIXZ
    virtual unsigned int Is2DAligned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CPlaneProjection@@UEAAXPEAVDCompTransformConversionContext@@MM@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CPlaneProjection@@UEAAXPEAVWinRTExpressionConversionContext@@MM@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CPlaneProjection@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPlaneProjection@@UEAA@XZ
    virtual ~CPlaneProjection();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrustumClipMask@CPlaneProjection@@MEAAIXZ
    virtual unsigned int GetFrustumClipMask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update3DTransform@CPlaneProjection@@MEAAXMM@Z
    virtual void Update3DTransform(float, float);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPlaneProjection@@AEAA@PEAVCCoreServices@@@Z
    CPlaneProjection(CCoreServices *);
};
