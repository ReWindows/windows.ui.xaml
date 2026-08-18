#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class Focusable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsFrameworkElement@Focusable@@QEBAPEAVCFrameworkElement@@XZ
    CFrameworkElement * AsFrameworkElement() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@Focusable@@QEAAXPEAVCDependencyObject@@@Z
    void Attach(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementResponsibleForDrawingThisElement@Focusable@@QEBAPEAVCUIElement@@XZ
    CUIElement * GetElementResponsibleForDrawingThisElement() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GuaranteedFocusable@Focusable@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * GuaranteedFocusable() const;
};
