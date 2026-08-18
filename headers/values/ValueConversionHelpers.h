#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class ValueConversionHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanConvertValueToString@ValueConversionHelpers@DirectUI@@SAIW4PropertyType@Foundation@Windows@@@Z
    static unsigned int CanConvertValueToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertStringToValue@ValueConversionHelpers@DirectUI@@SAJPEAUHSTRING__@@W4PropertyType@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    static long ConvertStringToValue(HSTRING__*, int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertValueToString@ValueConversionHelpers@DirectUI@@SAJPEAUIPropertyValue@Foundation@Windows@@W4PropertyType@45@PEAPEAUHSTRING__@@@Z
    static long ConvertValueToString(WindissectOpaque *, int, HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertGuidToString@ValueConversionHelpers@DirectUI@@CAJU_GUID@@PEAPEAUHSTRING__@@@Z
    static long ConvertGuidToString(_GUID, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertStringToGuid@ValueConversionHelpers@DirectUI@@CAJPEAUHSTRING__@@PEAU_GUID@@@Z
    static long ConvertStringToGuid(HSTRING__*, _GUID *);
};
} // namespace DirectUI
