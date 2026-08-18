#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class KeyboardAcceleratorUtility {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyValidForAccelerators@KeyboardAcceleratorUtility@@YA_NW4VirtualKey@System@Windows@@I@Z
    bool IsKeyValidForAccelerators(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessLocalAccelerators@KeyboardAcceleratorUtility@@YA_NW4VirtualKey@System@Windows@@W4VirtualKeyModifiers@34@QEAVCDependencyObject@@QEBV6@_N@Z
    bool ProcessLocalAccelerators(int, int, CDependencyObject * const, CDependencyObject const * const, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseAcceleratorEvent@KeyboardAcceleratorUtility@@YA_NW4VirtualKey@System@Windows@@W4VirtualKeyModifiers@34@QEBVCKeyboardAccelerator@@QEAVCDependencyObject@@@Z
    bool ShouldRaiseAcceleratorEvent(int, int, CKeyboardAccelerator const * const, CDependencyObject * const);
};
