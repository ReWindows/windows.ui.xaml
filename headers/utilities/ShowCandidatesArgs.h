#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace InkingExperiences::ApplyUpdatesOperation::ApplyUIUpdatesOperation {
class ShowCandidatesArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesSessionId@ShowCandidatesArgs@ApplyUIUpdatesOperation@ApplyUpdatesOperation@InkingExperiences@@UEAAJAEAI@Z
    virtual long GetCandidatesSessionId(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesSessionType@ShowCandidatesArgs@ApplyUIUpdatesOperation@ApplyUpdatesOperation@InkingExperiences@@UEAAJAEAW4CandidatesSessionType@4@@Z
    virtual long GetCandidatesSessionType(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestSource@ShowCandidatesArgs@ApplyUIUpdatesOperation@ApplyUpdatesOperation@InkingExperiences@@UEAAJAEAW4HitTestSource@4@@Z
    virtual long GetHitTestSource(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectForHitTest@ShowCandidatesArgs@ApplyUIUpdatesOperation@ApplyUpdatesOperation@InkingExperiences@@UEAAJAEAURect@Foundation@Windows@@@Z
    virtual long GetRectForHitTest(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowCandidatesArgs@ApplyUIUpdatesOperation@ApplyUpdatesOperation@InkingExperiences@@UEAA@XZ
    virtual ~ShowCandidatesArgs();
};
} // namespace InkingExperiences::ApplyUpdatesOperation::ApplyUIUpdatesOperation
