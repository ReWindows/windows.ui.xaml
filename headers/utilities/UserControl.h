#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class UserControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNameInPage@UserControl@DirectUI@@UEAAJPEAUHSTRING__@@IPEAPEAUIInspectable@@@Z
    virtual long FindNameInPage(HSTRING__*, unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalculatedDefaultStyleKey@UserControl@DirectUI@@UEAAJPEAPEBVCClassInfo@@PEAPEAUIInspectable@@@Z
    virtual long GetCalculatedDefaultStyleKey(CClassInfo const * *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAppBarsCallback@UserControl@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long RegisterAppBarsCallback(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppBarsCallback@UserControl@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long UnregisterAppBarsCallback(CDependencyObject *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAppBars@UserControl@DirectUI@@MEAAJXZ
    virtual long RegisterAppBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppBars@UserControl@DirectUI@@MEAAJXZ
    virtual long UnregisterAppBars();
};
} // namespace DirectUI
