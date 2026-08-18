#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CTimelineGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CTimelineGroup@@UEAAJPEAVCTimeline@@@Z
    virtual long AddChild(CTimeline *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStateImpl@CTimelineGroup@@UEAAJAEBUComputeStateParams@@AEAU2@PEAI_N2@Z
    virtual long ComputeStateImpl(ComputeStateParams const &, ComputeStateParams &, unsigned int *, bool, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinite@CTimelineGroup@@UEAAIXZ
    virtual unsigned int IsFinite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToTimeManager@CTimelineGroup@@UEAAJXZ
    virtual long OnAddToTimeManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromTimeManager@CTimelineGroup@@UEAAJXZ
    virtual long OnRemoveFromTimeManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTimelineGroup@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachChildren@CTimelineGroup@@IEAAXXZ
    void DetachChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeIteration@CTimelineGroup@@MEAAJXZ
    virtual long FinalizeIteration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeIteration@CTimelineGroup@@MEAAXXZ
    virtual void InitializeIteration();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimelineGroup@@MEAA@XZ
    virtual ~CTimelineGroup();
};
