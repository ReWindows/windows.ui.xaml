#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ThemeGenerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTimelinesForThemeAnimation@ThemeGenerator@DirectUI@@SAJHHEUPoint@Foundation@Windows@@0_JPEAU?$IVector@PEAVTimeline@Animation@Media@Xaml@UI@Windows@@@Collections@45@@Z
    static long AddTimelinesForThemeAnimation(int, int, unsigned char, WindissectOpaque, WindissectOpaque, int64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTimelinesForThemeAnimation@ThemeGenerator@DirectUI@@SAJHHPEAVThemeGeneratorHelper@2@@Z
    static long AddTimelinesForThemeAnimation(int, int, ThemeGeneratorHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTimelinesForThemeAnimation@ThemeGenerator@DirectUI@@SAJHHPEAUHSTRING__@@PEAUIDependencyObject@Xaml@UI@Windows@@EUPoint@Foundation@7@2PEAU?$IVector@PEAVTimeline@Animation@Media@Xaml@UI@Windows@@@Collections@97@@Z
    static long AddTimelinesForThemeAnimation(int, int, HSTRING__*, ::Windows::UI::Xaml::IDependencyObject *, unsigned char, WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaggerFunction@ThemeGenerator@DirectUI@@SAJHHPEAPEAVStaggerFunctionBase@2@@Z
    static long GetStaggerFunction(int, int, ::DirectUI::StaggerFunctionBase * *);
};
} // namespace DirectUI
