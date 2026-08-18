#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class AutomationComponentValueFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@AutomationComponentValueFactory@@SAJPEAVCUIAWindow@@PEAVCDependencyObject@@W4AutomationPropertiesEnum@DirectUI@@PEAUtagVARIANT@@@Z
    static long GetValue(CUIAWindow *, CDependencyObject *, int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@AutomationComponentValueFactory@@SAJPEAVCDependencyObject@@W4AutomationPropertiesEnum@DirectUI@@PEAVCAutomationComponentPropertyValue@@@Z
    static long SetValue(CDependencyObject *, int, CAutomationComponentPropertyValue *);
};
