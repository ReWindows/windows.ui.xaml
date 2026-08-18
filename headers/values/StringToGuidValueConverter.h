#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class StringToGuidValueConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@StringToGuidValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@StringToGuidValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StringToGuidValueConverter@DirectUI@@IEAA@XZ
    StringToGuidValueConverter();
};
} // namespace DirectUI
