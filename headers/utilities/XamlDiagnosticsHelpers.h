#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 33 member(s).
class XamlDiagnosticsHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertValueToStringOverride@XamlDiagnosticsHelpers@@SAJPEAUIPropertyValue@Foundation@Windows@@W4PropertyType@34@PEAPEAUHSTRING__@@@Z
    static long ConvertValueToStringOverride(WindissectOpaque *, int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertWICBitmapSource@XamlDiagnosticsHelpers@@SAJU_GUID@@AEBV?$ComPtr@UIWICImagingFactory2@@@WRL@Microsoft@@AEAV?$ComPtr@UIWICBitmapSource@@@45@@Z
    static long ConvertWICBitmapSource(_GUID, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindKnownFontWeightName@XamlDiagnosticsHelpers@@SAPEBGAEBUFontWeight@Text@UI@Windows@@@Z
    static unsigned short const * FindKnownFontWeightName(::Windows::UI::Text::FontWeight const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkToFit@XamlDiagnosticsHelpers@@SAJIIAEBV?$ComPtr@UIWICImagingFactory2@@@WRL@Microsoft@@AEAV?$ComPtr@UIWICBitmapSource@@@34@@Z
    static long ShrinkToFit(unsigned int, unsigned int, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueToString@XamlDiagnosticsHelpers@@SAJAEBV?$ComPtr@UIInspectable@@@ctl@@PEAVxstring_ptr@@@Z
    static long ValueToString(WindissectOpaque const &, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WicPixelFormatFromDxgiFormat@XamlDiagnosticsHelpers@@SAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAU_GUID@@@Z
    static long WicPixelFormatFromDxgiFormat(int, int, _GUID *);
};
