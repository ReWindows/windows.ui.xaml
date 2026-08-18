#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CPerspectiveTransform3D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppliesFlattening@CPerspectiveTransform3D@@UEBA_NXZ
    virtual bool AppliesFlattening() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPerspectiveTransform3D@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPerspectiveTransform3D@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDepth@CPerspectiveTransform3D@@UEAA_NXZ
    virtual bool HasDepth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenderedTransform2D@CPerspectiveTransform3D@@UEBA_NXZ
    virtual bool IsRenderedTransform2D() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CPerspectiveTransform3D@@UEAAXPEAVDCompTransformConversionContext@@MM@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CPerspectiveTransform3D@@UEAAXPEAVWinRTExpressionConversionContext@@MM@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CPerspectiveTransform3D@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformMatrix@CPerspectiveTransform3D@@UEAAXMM@Z
    virtual void UpdateTransformMatrix(float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerspectiveTransform3D@@UEAA@XZ
    virtual ~CPerspectiveTransform3D();
};
