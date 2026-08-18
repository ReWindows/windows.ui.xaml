#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace ctl {
class WeakReferenceSource {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThread@WeakReferenceSource@ctl@@MEBAJXZ
    virtual long CheckThread() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreForObject@WeakReferenceSource@ctl@@MEAAPEAUIDXamlCore@DirectUI@@XZ
    virtual ::DirectUI::IDXamlCore * GetCoreForObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WeakReferenceSource@ctl@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@WeakReferenceSource@ctl@@MEAAXXZ
    virtual void OnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WeakReferenceSource@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WeakReferenceSource@ctl@@IEAA@XZ
    WeakReferenceSource();
};
} // namespace ctl
