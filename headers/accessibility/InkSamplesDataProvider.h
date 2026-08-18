#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace InkingExperiences {
class InkSamplesDataProvider {
public:
    class TelemetryInkArgs;
    class TelemetryInkGestureArgs;
    class TelemetryInsertedInkArgs;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@InkSamplesDataProvider@InkingExperiences@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInkForUnexpectedValues_@InkSamplesDataProvider@InkingExperiences@@QEAAXAEBUTelemetryInkArgs@12@AEBUUnexpectedValueArgs@InkToTextDataLogger@2@@Z
    void LogInkForUnexpectedValues_(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInkGesture_@InkSamplesDataProvider@InkingExperiences@@QEAAXAEBUTelemetryInkGestureArgs@12@@Z
    void LogInkGesture_(WindissectOpaque const &);
};
} // namespace InkingExperiences
