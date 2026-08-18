#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class DCompAnimationConversionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDurationClipFromRepeatSegment@DCompAnimationConversionContext@@QEAAXAEBVRepeatBehaviorVO@@@Z
    void AddDurationClipFromRepeatSegment(RepeatBehaviorVO const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompletedEventTime@DCompAnimationConversionContext@@QEAANXZ
    double GetCompletedEventTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShortenBeginTimeBy1Frame@DCompAnimationConversionContext@@QEAAXXZ
    void ShortenBeginTimeBy1Frame();
};
