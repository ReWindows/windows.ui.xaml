#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class XboxUtility {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationDirection@XboxUtility@@YA?AW4FocusNavigationDirection@Input@Xaml@UI@Windows@@W4VirtualKey@System@6@@Z
    int GetNavigationDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageNavigationDirection@XboxUtility@@YA?AW4FocusNavigationDirection@Input@Xaml@UI@Windows@@W4VirtualKey@System@6@@Z
    int GetPageNavigationDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGamepadNavigationDirection@XboxUtility@@YA_NW4VirtualKey@System@Windows@@@Z
    bool IsGamepadNavigationDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGamepadNavigationLeft@XboxUtility@@YA_NW4VirtualKey@System@Windows@@@Z
    bool IsGamepadNavigationLeft(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGamepadNavigationRight@XboxUtility@@YA_NW4VirtualKey@System@Windows@@@Z
    bool IsGamepadNavigationRight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnXbox@XboxUtility@@YA_NXZ
    bool IsOnXbox();
};
