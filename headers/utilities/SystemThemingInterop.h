#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class SystemThemingInterop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemAccentColor@SystemThemingInterop@@UEAAIXZ
    virtual unsigned int GetSystemAccentColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColor@SystemThemingInterop@@UEAAIH@Z
    virtual unsigned int GetSystemColor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemHighContrastTheme@SystemThemingInterop@@UEAA?AW4Theme@Theming@@XZ
    virtual int GetSystemHighContrastTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTheme@SystemThemingInterop@@UEAA?AW4Theme@Theming@@XZ
    virtual int GetSystemTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemVariantAccentColor@SystemThemingInterop@@UEAAIW4VariantAccentColors@IThemingInterop@@@Z
    virtual unsigned int GetSystemVariantAccentColor(int);
};
