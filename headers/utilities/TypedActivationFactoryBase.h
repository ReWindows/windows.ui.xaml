#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace ctl {
class TypedActivationFactoryBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TypedActivationFactoryBase@ctl@@QEAA@XZ
    TypedActivationFactoryBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TypedActivationFactoryBase@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TypedActivationFactoryBase@ctl@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TypedActivationFactoryBase@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace ctl
