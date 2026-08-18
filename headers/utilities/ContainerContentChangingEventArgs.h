#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class ContainerContentChangingEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLowestWantedPhase@ContainerContentChangingEventArgs@DirectUI@@QEAAIXZ
    unsigned int GetLowestWantedPhase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUpdateCallbackWithPhaseImpl@ContainerContentChangingEventArgs@DirectUI@@QEAAJIPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@@Z
    long RegisterUpdateCallbackWithPhaseImpl(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLifetimeImpl@ContainerContentChangingEventArgs@DirectUI@@QEAAJXZ
    long ResetLifetimeImpl();
};
} // namespace DirectUI
