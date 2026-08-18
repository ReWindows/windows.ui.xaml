#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CTransformGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CTransformGroup@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CTransformGroup@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransformGroup@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CTransformGroup@@UEAAXPEAVCMILMatrix@@@Z
    virtual void GetTransform(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformValue@CTransformGroup@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetTransformValue(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransformGroup@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CTransformGroup@@UEAAXPEAVDCompTransformConversionContext@@@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CTransformGroup@@UEAAXPEAVWinRTExpressionConversionContext@@PEAUICompositionPropertySet@Composition@UI@Windows@@@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, ::Windows::UI::Composition::ICompositionPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CTransformGroup@@UEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetTransformsDirty@CTransformGroup@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetTransformsDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CTransformGroup@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransformGroup@@UEAA@XZ
    virtual ~CTransformGroup();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransformGroup@@IEAA@AEBV0@AEAJ@Z
    CTransformGroup(CTransformGroup const &, long &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@CTransformGroup@@AEAAJPEAVCREATEPARAMETERS@@@Z
    long FromString(CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCachedTransform@CTransformGroup@@AEAAXXZ
    void UpdateCachedTransform();
};
