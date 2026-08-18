#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class DoubleUtil {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreClose@DoubleUtil@DirectUI@@SA_NNN@Z
    static bool AreClose(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreWithinTolerance@DoubleUtil@DirectUI@@SANNNN@Z
    static double AreWithinTolerance(double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fractional@DoubleUtil@DirectUI@@SANN@Z
    static double Fractional(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GreaterThan@DoubleUtil@DirectUI@@SA_NNN@Z
    static bool GreaterThan(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GreaterThanOrClose@DoubleUtil@DirectUI@@SA_NNN@Z
    static bool GreaterThanOrClose(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInfinity@DoubleUtil@DirectUI@@SA_NN@Z
    static bool IsInfinity(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNaN@DoubleUtil@DirectUI@@SA_NN@Z
    static bool IsNaN(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPositiveInfinity@DoubleUtil@DirectUI@@SA_NN@Z
    static bool IsPositiveInfinity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LessThan@DoubleUtil@DirectUI@@SA_NNN@Z
    static bool LessThan(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LessThanOrClose@DoubleUtil@DirectUI@@SA_NNN@Z
    static bool LessThanOrClose(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Round@DoubleUtil@DirectUI@@SANNI@Z
    static double Round(double, unsigned int);
};
} // namespace DirectUI
