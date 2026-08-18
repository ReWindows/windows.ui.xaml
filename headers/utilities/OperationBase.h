#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace InkingExperiences {
class OperationBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHr@OperationBase@InkingExperiences@@UEBAJXZ
    virtual long GetHr() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@OperationBase@InkingExperiences@@UEBA?AW4Status@IOperation@2@XZ
    virtual int GetStatus() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInTerminalState@OperationBase@InkingExperiences@@QEBA_NXZ
    bool IsInTerminalState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPendingCancel@OperationBase@InkingExperiences@@QEBA_NXZ
    bool IsPendingCancel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@OperationBase@InkingExperiences@@QEBA_NXZ
    bool IsRunning() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OperationBase@InkingExperiences@@UEAA@XZ
    virtual ~OperationBase();
};
} // namespace InkingExperiences
