#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class RelativeSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RelativeSource@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@RelativeSource@DirectUI@@UEAAJPEAW4RelativeSourceMode@Data@Xaml@UI@Windows@@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mode@RelativeSource@DirectUI@@UEAAJW4RelativeSourceMode@Data@Xaml@UI@Windows@@@Z
    virtual long put_Mode(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RelativeSource@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RelativeSource@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RelativeSource@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RelativeSource@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
