#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace Ptls6 {
class CLsSublineFragment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CLsSublineFragment@Ptls6@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FCutFromLeft@CLsSublineFragment@Ptls6@@UEBAHXZ
    virtual int FCutFromLeft() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FCutFromRight@CLsSublineFragment@Ptls6@@UEBAHXZ
    virtual int FCutFromRight() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FPenPositionUsed@CLsSublineFragment@Ptls6@@UEBAHXZ
    virtual int FPenPositionUsed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpLim@CLsSublineFragment@Ptls6@@QEBAJXZ
    long GetCpLim() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetails@CLsSublineFragment@Ptls6@@UEBAXAEAH0AEAUlsdnodedetails@2@0PEAPEBVILsSublineFragment@2@00102@Z
    virtual void GetDetails(int &, int &, WindissectOpaque &, int &, WindissectOpaque const * *, int &, int &, WindissectOpaque &, int &, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDur@CLsSublineFragment@Ptls6@@UEBAJXZ
    virtual long GetDur() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPPosinlineStart@CLsSublineFragment@Ptls6@@QEBAPEBVCLsPosInLineStart@2@XZ
    WindissectOpaque const * GetPPosinlineStart() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialEffects@CLsSublineFragment@Ptls6@@UEBAIXZ
    virtual unsigned int GetSpecialEffects() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBased@CLsSublineFragment@Ptls6@@UEBAHPEAVILsBreakOppSubline@2@@Z
    virtual int IsBased(WindissectOpaque *) const;
};
} // namespace Ptls6
