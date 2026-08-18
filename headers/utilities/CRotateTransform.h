#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CRotateTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CRotateTransform@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CRotateTransform@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRotateTransform@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CRotateTransform@@UEAAXPEAVCMILMatrix@@@Z
    virtual void GetTransform(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRotateTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CRotateTransform@@UEAAXPEAVDCompTransformConversionContext@@@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CRotateTransform@@UEAAXPEAVWinRTExpressionConversionContext@@PEAUICompositionPropertySet@Composition@UI@Windows@@@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, ::Windows::UI::Composition::ICompositionPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CRotateTransform@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CRotateTransform@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
};
