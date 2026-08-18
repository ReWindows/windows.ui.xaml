#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class WinRTExpressionConversionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExpressionToTransformGroupPropertySet@WinRTExpressionConversionContext@@QEAAXPEAUIExpressionAnimation@Composition@UI@Windows@@PEAUICompositionPropertySet@345@@Z
    void AddExpressionToTransformGroupPropertySet(::Windows::UI::Composition::IExpressionAnimation *, ::Windows::UI::Composition::ICompositionPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectSubExpression@WinRTExpressionConversionContext@@QEAAX_NPEAUIExpressionAnimation@Composition@UI@Windows@@1PEBG@Z
    void ConnectSubExpression(bool, ::Windows::UI::Composition::IExpressionAnimation *, ::Windows::UI::Composition::IExpressionAnimation *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpression@WinRTExpressionConversionContext@@QEAAXPEBGPEAPEAUIExpressionAnimation@Composition@UI@Windows@@PEAPEAUICompositionPropertySet@345@@Z
    void CreateExpression(unsigned short const *, ::Windows::UI::Composition::IExpressionAnimation * *, ::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform@WinRTExpressionConversionContext@@QEAAX_NPEBVCMILMatrix@@PEAPEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void CreateMatrixTransform(bool, CMILMatrix const *, ::Windows::UI::Composition::IExpressionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform3D@WinRTExpressionConversionContext@@QEAAXPEBVCMILMatrix4x4@@PEAPEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void CreateMatrixTransform3D(CMILMatrix4x4const *, ::Windows::UI::Composition::IExpressionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeExpression@WinRTExpressionConversionContext@@SAXPEAUICompositionPropertySet@Composition@UI@Windows@@PEBGM@Z
    static void InitializeExpression(::Windows::UI::Composition::ICompositionPropertySet *, unsigned short const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpression@WinRTExpressionConversionContext@@QEAAXPEAUIExpressionAnimation@Composition@UI@Windows@@PEBGM_NPEAUICompositionAnimation@345@PEAVCDependencyObject@@W4KnownPropertyIndex@@PEAVCTimeManager@@@Z
    void UpdateExpression(::Windows::UI::Composition::IExpressionAnimation *, unsigned short const *, float, bool, ::Windows::UI::Composition::ICompositionAnimation *, CDependencyObject *, int, CTimeManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformGroupExpression@WinRTExpressionConversionContext@@QEAAXHPEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void UpdateTransformGroupExpression(int, ::Windows::UI::Composition::IExpressionAnimation *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTExpressionConversionContext@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z
    WinRTExpressionConversionContext(::Windows::UI::Composition::ICompositor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTExpressionConversionContext@@QEAA@XZ
    ~WinRTExpressionConversionContext();
};
