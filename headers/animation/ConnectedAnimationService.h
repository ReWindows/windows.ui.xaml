#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class ConnectedAnimationService {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationImpl@ConnectedAnimationService@DirectUI@@QEAAJPEAUHSTRING__@@PEAPEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@@Z
    long GetAnimationImpl(HSTRING__*, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToAnimateImpl@ConnectedAnimationService@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIConnectedAnimation@Animation@Media@567@@Z
    long PrepareToAnimateImpl(HSTRING__*, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation * *);
};
} // namespace DirectUI
