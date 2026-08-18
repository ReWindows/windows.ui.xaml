#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class FrameworkTheming {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseTheme@FrameworkTheming@@QEBA?AW4Theme@Theming@@XZ
    int GetBaseTheme() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHighContrastTheme@FrameworkTheming@@QEBA?AW4Theme@Theming@@XZ
    int GetHighContrastTheme() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualBackground@FrameworkTheming@@QEBAIXZ
    unsigned int GetRootVisualBackground() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTheme@FrameworkTheming@@QEBA?AW4Theme@Theming@@XZ
    int GetTheme() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@FrameworkTheming@@QEAAJ_N@Z
    long OnThemeChanged(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHighContrastTheme@FrameworkTheming@@QEAAJW4Theme@Theming@@@Z
    long SetHighContrastTheme(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestedTheme@FrameworkTheming@@QEAAJW4ApplicationTheme@Xaml@UI@Windows@@_N@Z
    long SetRequestedTheme(int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkTheming@@QEAA@XZ
    ~FrameworkTheming();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildColorAndBrushResources@FrameworkTheming@@AEAAXXZ
    void RebuildColorAndBrushResources();
};
