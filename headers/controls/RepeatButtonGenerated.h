#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class RepeatButtonGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RepeatButtonGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delay@RepeatButtonGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_Delay(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Interval@RepeatButtonGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_Interval(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Delay@RepeatButtonGenerated@DirectUI@@UEAAJH@Z
    virtual long put_Delay(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Interval@RepeatButtonGenerated@DirectUI@@UEAAJH@Z
    virtual long put_Interval(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RepeatButtonGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RepeatButtonGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RepeatButtonGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RepeatButtonGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
