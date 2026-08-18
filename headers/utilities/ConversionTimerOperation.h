#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class ConversionTimerOperation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@ConversionTimerOperation@InkingExperiences@@UEBA?AW4InkToTextEngineOperationType@2@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@ConversionTimerOperation@InkingExperiences@@UEAAJXZ
    virtual long OnStarting();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConversionTimerOperation@InkingExperiences@@UEAA@XZ
    virtual ~ConversionTimerOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@ConversionTimerOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
};
} // namespace InkingExperiences
