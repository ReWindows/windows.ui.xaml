#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CSkewTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CSkewTransform@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSkewTransform@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSkewTransform@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CSkewTransform@@UEAAXPEAVCMILMatrix@@@Z
    virtual void GetTransform(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSkewTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CSkewTransform@@UEAAXPEAVDCompTransformConversionContext@@@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CSkewTransform@@UEAAXPEAVWinRTExpressionConversionContext@@PEAUICompositionPropertySet@Composition@UI@Windows@@@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, ::Windows::UI::Composition::ICompositionPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CSkewTransform@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSkewTransform@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
};
