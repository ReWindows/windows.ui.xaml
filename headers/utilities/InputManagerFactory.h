#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class InputManagerFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInputDeviceType@InputManagerFactory@DirectUI@@UEAAJPEAW4LastInputDeviceType@Input@Xaml@UI@Windows@@@Z
    virtual long GetLastInputDeviceType(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InputManagerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InputManagerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InputManagerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
