#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CDynamicTimeline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingCollectInfoNoRef@CDynamicTimeline@@UEAAXPEAPEAVCDependencyObject@@0@Z
    virtual void AnimationTrackingCollectInfoNoRef(CDependencyObject * *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDynamicTimeline@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeIteration@CDynamicTimeline@@UEAAJXZ
    virtual long FinalizeIteration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildren@CDynamicTimeline@@QEAAJXZ
    long GenerateChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDynamicTimeline@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBegin@CDynamicTimeline@@UEAAJXZ
    virtual long OnBegin();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandChildren@CDynamicTimeline@@AEAAJXZ
    long ExpandChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildrenInternal@CDynamicTimeline@@AEAAJW4DynamicTimelineGenerationMode@@_NPEAPEAVCTimelineCollection@@@Z
    long GenerateChildrenInternal(int, bool, CTimelineCollection * *);
};
