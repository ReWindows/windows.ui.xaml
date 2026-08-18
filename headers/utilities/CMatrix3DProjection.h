#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CMatrix3DProjection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMatrix3DProjection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMatrix3DProjection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAligned@CMatrix3DProjection@@UEAAIXZ
    virtual unsigned int Is2DAligned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CMatrix3DProjection@@UEAAXPEAVDCompTransformConversionContext@@MM@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CMatrix3DProjection@@UEAAXPEAVWinRTExpressionConversionContext@@MM@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, float, float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update3DTransform@CMatrix3DProjection@@MEAAXMM@Z
    virtual void Update3DTransform(float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMatrix3DProjection@@MEAA@XZ
    virtual ~CMatrix3DProjection();
};
