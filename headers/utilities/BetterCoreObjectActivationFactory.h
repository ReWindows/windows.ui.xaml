#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace ctl {
class BetterCoreObjectActivationFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BetterCoreObjectActivationFactory@ctl@@QEAA@XZ
    BetterCoreObjectActivationFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BetterCoreObjectActivationFactory@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BetterCoreObjectActivationFactory@ctl@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BetterCoreObjectActivationFactory@ctl@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BetterCoreObjectActivationFactory@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace ctl
