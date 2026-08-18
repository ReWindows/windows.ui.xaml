#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CCompositeTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CCompositeTransform@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CCompositeTransform@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositeTransform@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CCompositeTransform@@UEAAXPEAVCMILMatrix@@@Z
    virtual void GetTransform(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCompositeTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CCompositeTransform@@UEAAXPEAVDCompTransformConversionContext@@@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CCompositeTransform@@UEAAXPEAVWinRTExpressionConversionContext@@PEAUICompositionPropertySet@Composition@UI@Windows@@@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, ::Windows::UI::Composition::ICompositionPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetDirty@CCompositeTransform@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CCompositeTransform@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CCompositeTransform@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositeTransform@@UEAA@XZ
    virtual ~CCompositeTransform();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositeTransform@@IEAA@AEBV0@AEAJ@Z
    CCompositeTransform(CCompositeTransform const &, long &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositeTransform@@AEAA@PEAVCCoreServices@@@Z
    CCompositeTransform(CCoreServices *);
};
