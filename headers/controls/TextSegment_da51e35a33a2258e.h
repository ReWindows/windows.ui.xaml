#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace LayoutView {
class TextSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookie@TextSegment@LayoutView@@UEAAJAEAI@Z
    virtual long GetCookie(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@TextSegment@LayoutView@@UEAAJAEAW4SegmentType@InkingExperiences@@@Z
    virtual long GetType(int &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextSegment@LayoutView@@UEAA@XZ
    virtual ~TextSegment();
};
} // namespace LayoutView
