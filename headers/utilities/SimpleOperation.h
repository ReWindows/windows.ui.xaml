#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace InkingExperiences {
class SimpleOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@SimpleOperation@InkingExperiences@@UEAAJXZ
    virtual long Cancel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SimpleOperation@InkingExperiences@@QEAA@XZ
    SimpleOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@SimpleOperation@InkingExperiences@@UEAAJXZ
    virtual long Start();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SimpleOperation@InkingExperiences@@UEAA@XZ
    virtual ~SimpleOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@SimpleOperation@InkingExperiences@@IEAAJJ_N@Z
    long Complete(long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelRequested@SimpleOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCancelRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarted@SimpleOperation@InkingExperiences@@MEAAJXZ
    virtual long OnStarted();
};
} // namespace InkingExperiences
