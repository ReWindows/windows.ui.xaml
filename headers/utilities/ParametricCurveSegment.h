#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ParametricCurveSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ParametricCurveSegment@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BeginOffset@ParametricCurveSegment@DirectUI@@QEAAJN@Z
    long put_BeginOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ConstantCoefficient@ParametricCurveSegment@DirectUI@@QEAAJN@Z
    long put_ConstantCoefficient(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CubicCoefficient@ParametricCurveSegment@DirectUI@@QEAAJN@Z
    long put_CubicCoefficient(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LinearCoefficient@ParametricCurveSegment@DirectUI@@QEAAJN@Z
    long put_LinearCoefficient(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuadraticCoefficient@ParametricCurveSegment@DirectUI@@QEAAJN@Z
    long put_QuadraticCoefficient(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ParametricCurveSegment@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
