#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class CandidateSelectedOperation {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@CandidateSelectedOperation@InkingExperiences@@UEBA?AW4InkToTextEngineOperationType@2@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@CandidateSelectedOperation@InkingExperiences@@UEAAJXZ
    virtual long OnStarting();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CandidateSelectedOperation@InkingExperiences@@UEAA@XZ
    virtual ~CandidateSelectedOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@CandidateSelectedOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
};
} // namespace InkingExperiences
