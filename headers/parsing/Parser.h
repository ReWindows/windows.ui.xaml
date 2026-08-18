#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class Parser {
public:
    class XamlPredicateAndArgs;
    class XamlPredicateService;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStableXbfPropertyIndex@Parser@@YA?AW4StableXbfPropertyIndex@1@W4KnownPropertyIndex@@AEBUTargetOSVersion@@@Z
    int GetStableXbfPropertyIndex(int, TargetOSVersion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStableXbfTypeIndex@Parser@@YA?AW4StableXbfTypeIndex@1@W4KnownTypeIndex@@@Z
    int GetStableXbfTypeIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStableXbfProperty@Parser@@YA_NAEBUXamlPropertyToken@@@Z
    bool IsStableXbfProperty(XamlPropertyToken const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStableXbfProperty@Parser@@YA_NAEBUXamlPropertyToken@@AEBUTargetOSVersion@@@Z
    bool IsStableXbfProperty(XamlPropertyToken const &, TargetOSVersion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStableXbfType@Parser@@YA_NAEBUXamlTypeToken@@AEBUTargetOSVersion@@@Z
    bool IsStableXbfType(XamlTypeToken const &, TargetOSVersion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStableXbfType@Parser@@YA_NAEBUXamlTypeToken@@@Z
    bool IsStableXbfType(XamlTypeToken const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlNativeRuntime_SetValueSimpleProperty@Parser@@YAJPEBVCPropertyBase@@PEAVCDependencyObject@@AEBVCValue@@@Z
    long XamlNativeRuntime_SetValueSimpleProperty(CPropertyBase const *, CDependencyObject *, CValue const &);
};
