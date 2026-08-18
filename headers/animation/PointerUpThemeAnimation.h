#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class PointerUpThemeAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimelines@PointerUpThemeAnimation@DirectUI@@UEAAJEPEAU?$IVector@PEAVTimeline@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long CreateTimelines(unsigned char, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PointerUpThemeAnimation@DirectUI@@UEAA@XZ
    virtual ~PointerUpThemeAnimation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimelineCompleted@PointerUpThemeAnimation@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnTimelineCompleted(IInspectable *, IInspectable *);
};
} // namespace DirectUI
