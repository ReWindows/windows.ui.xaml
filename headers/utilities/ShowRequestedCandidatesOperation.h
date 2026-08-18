#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class ShowRequestedCandidatesOperation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@ShowRequestedCandidatesOperation@InkingExperiences@@UEBA?AW4InkToTextEngineOperationType@2@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@ShowRequestedCandidatesOperation@InkingExperiences@@UEAAJXZ
    virtual long OnStarting();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowRequestedCandidatesOperation@InkingExperiences@@UEAA@XZ
    virtual ~ShowRequestedCandidatesOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@ShowRequestedCandidatesOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
};
} // namespace InkingExperiences
