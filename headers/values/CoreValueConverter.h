#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class CoreValueConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CoreValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@CoreValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertStringToCoreValue@CoreValueConverter@DirectUI@@SAJPEBVCClassInfo@@PEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    static long ConvertStringToCoreValue(CClassInfo const *, HSTRING__*, IInspectable * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreValueConverter@DirectUI@@AEAA@PEBVCClassInfo@@@Z
    CoreValueConverter(CClassInfo const *);
};
} // namespace DirectUI
