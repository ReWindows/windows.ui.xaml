#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace ctl {
class BaseActivationFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseActivationFactory@ctl@@QEAA@XZ
    BaseActivationFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@BaseActivationFactory@ctl@@UEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowedStatic@BaseActivationFactory@ctl@@SAJ_N@Z
    static long CheckActivationAllowedStatic(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BaseActivationFactory@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BaseActivationFactory@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace ctl
