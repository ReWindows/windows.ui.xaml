#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CandidateSelectedEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesSessionId@CandidateSelectedEventArgs@@UEAAJAEAI@Z
    virtual long GetCandidatesSessionId(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesSessionType@CandidateSelectedEventArgs@@UEAAJAEAW4CandidatesSessionType@InkingExperiences@@@Z
    virtual long GetCandidatesSessionType(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedIndex@CandidateSelectedEventArgs@@UEAAJAEAI@Z
    virtual long GetSelectedIndex(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedCandidateFromReco@CandidateSelectedEventArgs@@UEAAJAEA_N@Z
    virtual long IsSelectedCandidateFromReco(bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CandidateSelectedEventArgs@@UEAA@XZ
    virtual ~CandidateSelectedEventArgs();
};
