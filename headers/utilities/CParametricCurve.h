#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CParametricCurve {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CParametricCurve@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateCurve@CParametricCurve@@QEAAJMPEAM@Z
    long EvaluateCurve(float, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParametricCurveDefinition@CParametricCurve@@QEAAJPEAVCUIElement@@PEAUCParametricCurveDefinition@@@Z
    long GetParametricCurveDefinition(CUIElement *, CParametricCurveDefinition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CParametricCurve@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveProperties@CParametricCurve@@QEAAJPEAVCDependencyObject@@0@Z
    long ResolveProperties(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentProperty@CParametricCurve@@QEAAJAEBVxstring_ptr_view@@@Z
    long SetPrimaryContentProperty(xstring_ptr_view const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryContentProperty@CParametricCurve@@QEAAJW4DirectManipulationProperty@DirectUI@@AEBVxstring_ptr_view@@@Z
    long SetSecondaryContentProperty(int, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDependencyProperty@CParametricCurve@@QEAAJPEAVCDependencyObject@@0@Z
    long UpdateDependencyProperty(CDependencyObject *, CDependencyObject *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CParametricCurve@@EEAA@XZ
    virtual ~CParametricCurve();
};
