#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CValueUtil {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEphemeralString@CValueUtil@@YAXAEBVCValue@@AEAVxephemeral_string_ptr@@@Z
    void GetEphemeralString(CValue const &, xephemeral_string_ptr &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeString@CValueUtil@@YAJAEBVCValue@@AEAVxruntime_string_ptr@@@Z
    long GetRuntimeString(CValue const &, xruntime_string_ptr &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeSpanAsSeconds@CValueUtil@@YANAEBVCValue@@@Z
    double GetTimeSpanAsSeconds(CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CValueUtil@@YA?AW4KnownTypeIndex@@AEBVCValue@@@Z
    int GetTypeIndex(CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueOrAddressAsUINT64@CValueUtil@@YA_KAEBVCValue@@@Z
    uint64_t GetValueOrAddressAsUINT64(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRefAndDropObjectOwnership@CValueUtil@@YAXAEAVCValue@@@Z
    void ReleaseRefAndDropObjectOwnership(CValue &);
};
