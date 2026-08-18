#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class TimelineLookupList {
public:
    class Node;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenStoryboard@TimelineLookupList@@QEAAJPEAVCParallelTimeline@@PEAVCDynamicTimeline@@@Z
    long FlattenStoryboard(CParallelTimeline *, CDynamicTimeline *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMatchingNodes@TimelineLookupList@@QEAAXAEBVNode@1@@Z
    void RemoveMatchingNodes(WindissectOpaque const &);
};
