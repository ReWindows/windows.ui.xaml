#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CCompositeTransform3D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppliesFlattening@CCompositeTransform3D@@UEBA_NXZ
    virtual bool AppliesFlattening() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CCompositeTransform3D@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCompositeTransform3D@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDepth@CCompositeTransform3D@@UEAA_NXZ
    virtual bool HasDepth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenderedTransform2D@CCompositeTransform3D@@UEBA_NXZ
    virtual bool IsRenderedTransform2D() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CCompositeTransform3D@@UEAAXPEAVDCompTransformConversionContext@@MM@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CCompositeTransform3D@@UEAAXPEAVWinRTExpressionConversionContext@@MM@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CCompositeTransform3D@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformMatrix@CCompositeTransform3D@@UEAAXMM@Z
    virtual void UpdateTransformMatrix(float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositeTransform3D@@UEAA@XZ
    virtual ~CCompositeTransform3D();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositeTransform3D@@AEAA@PEAVCCoreServices@@@Z
    CCompositeTransform3D(CCoreServices *);
};
