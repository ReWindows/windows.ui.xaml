#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 264 member(s).
namespace DirectUI {
class PropertyValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEqual@PropertyValue@DirectUI@@SAJPEAUIInspectable@@0PEA_N@Z
    static long AreEqual(IInspectable *, IInspectable *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromBoolean@PropertyValue@DirectUI@@SAJEPEAPEAUIInspectable@@@Z
    static long CreateFromBoolean(unsigned char, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromChar16@PropertyValue@DirectUI@@SAJGPEAPEAUIInspectable@@@Z
    static long CreateFromChar16(unsigned short, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromDateTime@PropertyValue@DirectUI@@SAJUDateTime@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromDateTime(WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromDouble@PropertyValue@DirectUI@@SAJNPEAPEAUIInspectable@@@Z
    static long CreateFromDouble(double, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromGuid@PropertyValue@DirectUI@@SAJU_GUID@@PEAPEAUIInspectable@@@Z
    static long CreateFromGuid(_GUID, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromInt16@PropertyValue@DirectUI@@SAJFPEAPEAUIInspectable@@@Z
    static long CreateFromInt16(short, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromInt32@PropertyValue@DirectUI@@SAJHPEAPEAUIInspectable@@@Z
    static long CreateFromInt32(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromInt64@PropertyValue@DirectUI@@SAJ_JPEAPEAUIInspectable@@@Z
    static long CreateFromInt64(int64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromPoint@PropertyValue@DirectUI@@SAJUPoint@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromPoint(WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromRect@PropertyValue@DirectUI@@SAJURect@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromRect(WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSingle@PropertyValue@DirectUI@@SAJMPEAPEAUIInspectable@@@Z
    static long CreateFromSingle(float, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSize@PropertyValue@DirectUI@@SAJUSize@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromSize(WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromString@PropertyValue@DirectUI@@SAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    static long CreateFromString(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromTextRange@PropertyValue@DirectUI@@SAJUTextRange@Documents@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromTextRange(::Windows::UI::Xaml::Documents::TextRange, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromTimeSpan@PropertyValue@DirectUI@@SAJUTimeSpan@Foundation@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromTimeSpan(WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUInt16@PropertyValue@DirectUI@@SAJGPEAPEAUIInspectable@@@Z
    static long CreateFromUInt16(unsigned short, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUInt32@PropertyValue@DirectUI@@SAJIPEAPEAUIInspectable@@@Z
    static long CreateFromUInt32(unsigned int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUInt64@PropertyValue@DirectUI@@SAJ_KPEAPEAUIInspectable@@@Z
    static long CreateFromUInt64(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUInt8@PropertyValue@DirectUI@@SAJEPEAPEAUIInspectable@@@Z
    static long CreateFromUInt8(unsigned char, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromVisibility@PropertyValue@DirectUI@@SAJW4Visibility@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    static long CreateFromVisibility(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNullOrEmpty@PropertyValue@DirectUI@@SAIPEAUIInspectable@@@Z
    static unsigned int IsNullOrEmpty(IInspectable *);
};
} // namespace DirectUI
