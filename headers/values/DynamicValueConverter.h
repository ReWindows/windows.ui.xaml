#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DynamicValueConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConverter@DynamicValueConverter@DirectUI@@SAJIPEAPEAUIValueConverterInternal@2@@Z
    static long CreateConverter(unsigned int, ::DirectUI::IValueConverterInternal * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@DynamicValueConverter@DirectUI@@EEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@DynamicValueConverter@DirectUI@@EEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicValueConverter@DirectUI@@AEAA@I@Z
    DynamicValueConverter(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConverter@DynamicValueConverter@DirectUI@@AEAAJPEBVCClassInfo@@0@Z
    long EnsureConverter(CClassInfo const *, CClassInfo const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicValueConverter@DirectUI@@EEAA@XZ
    virtual ~DynamicValueConverter();
};
} // namespace DirectUI
