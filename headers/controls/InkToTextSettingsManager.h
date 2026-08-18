#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace InkingExperiences {
class InkToTextSettingsManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSettings@InkToTextSettingsManager@InkingExperiences@@SA?AUInkToTextSettings@2@XZ
    static WindissectOpaque GetCurrentSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInkToTextEnabled@InkToTextSettingsManager@InkingExperiences@@SA_NXZ
    static bool IsInkToTextEnabled();
};
} // namespace InkingExperiences
