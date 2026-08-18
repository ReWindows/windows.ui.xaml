#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace ctl {
class SupportErrorInfo {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SupportErrorInfo@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SupportErrorInfo@ctl@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SupportErrorInfo@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SupportErrorInfo@ctl@@IEAA@XZ
    SupportErrorInfo();
};
} // namespace ctl
