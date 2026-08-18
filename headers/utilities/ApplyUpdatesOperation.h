#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class ApplyUpdatesOperation {
public:
    class ApplyContentUpdatesOperation;
    class ApplyUIUpdatesOperation;
    class UpdateDescriptor;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@ApplyUpdatesOperation@InkingExperiences@@UEAAJXZ
    virtual long OnStarting();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplyUpdatesOperation@InkingExperiences@@UEAA@XZ
    virtual ~ApplyUpdatesOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@ApplyUpdatesOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUpdateDescriptor@ApplyUpdatesOperation@InkingExperiences@@AEAAXXZ
    void CreateUpdateDescriptor();
};
} // namespace InkingExperiences
