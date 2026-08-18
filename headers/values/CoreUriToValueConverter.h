#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class CoreUriToValueConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CoreUriToValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@CoreUriToValueConverter@DirectUI@@UEAAJPEAUIInspectable@@PEBVCClassInfo@@PEAUIUnknown@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, CClassInfo const *, IUnknown *, IInspectable * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreUriToValueConverter@DirectUI@@AEAA@PEBVCClassInfo@@@Z
    CoreUriToValueConverter(CClassInfo const *);
};
} // namespace DirectUI
