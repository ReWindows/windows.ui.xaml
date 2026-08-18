#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class BoolToVisibilityValueConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@BoolToVisibilityValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@BoolToVisibilityValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BoolToVisibilityValueConverter@DirectUI@@IEAA@XZ
    BoolToVisibilityValueConverter();
};
} // namespace DirectUI
