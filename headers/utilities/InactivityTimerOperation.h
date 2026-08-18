#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class InactivityTimerOperation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@InactivityTimerOperation@InkingExperiences@@UEBA?AW4InkToTextEngineOperationType@2@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@InactivityTimerOperation@InkingExperiences@@UEAAJXZ
    virtual long OnStarting();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InactivityTimerOperation@InkingExperiences@@UEAA@XZ
    virtual ~InactivityTimerOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@InactivityTimerOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
};
} // namespace InkingExperiences
