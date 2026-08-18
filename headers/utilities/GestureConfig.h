#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class GestureConfig {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureConfigurationBuilder@GestureConfig@@YAHW4GestureSettings@Input@UI@Windows@@_N111W4ManipulationModes@DirectUI@@PEAUINTERACTION_CONTEXT_CONFIGURATION@@@Z
    int GestureConfigurationBuilder(int, bool, bool, bool, bool, int, INTERACTION_CONTEXT_CONFIGURATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureConfigurationBuilder@GestureConfig@@YA?AW4GestureSettings@Input@UI@Windows@@_N000W4ManipulationModes@DirectUI@@@Z
    int GestureConfigurationBuilder(bool, bool, bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureSettingsToInteractionConfigManipulation@GestureConfig@@YA?AW4INTERACTION_CONFIGURATION_FLAGS@@W4GestureSettings@Input@UI@Windows@@@Z
    int GestureSettingsToInteractionConfigManipulation(int);
};
