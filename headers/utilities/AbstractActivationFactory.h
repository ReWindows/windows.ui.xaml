#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace ctl {
class AbstractActivationFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AbstractActivationFactory@ctl@@QEAA@XZ
    AbstractActivationFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AbstractActivationFactory@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AbstractActivationFactory@ctl@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AbstractActivationFactory@ctl@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AbstractActivationFactory@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace ctl
