#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CMatrixTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CMatrixTransform@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMatrixTransform@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CMatrixTransform@@UEAAXPEAVCMILMatrix@@@Z
    virtual void GetTransform(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMatrixTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CMatrixTransform@@UEAAXPEAVDCompTransformConversionContext@@@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CMatrixTransform@@UEAAXPEAVWinRTExpressionConversionContext@@PEAUICompositionPropertySet@Composition@UI@Windows@@@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, ::Windows::UI::Composition::ICompositionPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CMatrixTransform@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix@CMatrixTransform@@QEAAXAEBVCMILMatrix@@@Z
    void SetMatrix(CMILMatrix const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMatrixTransform@@UEAA@XZ
    virtual ~CMatrixTransform();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMatrixTransform@@IEAA@AEBV0@AEAJ@Z
    CMatrixTransform(CMatrixTransform const &, long &);
};
