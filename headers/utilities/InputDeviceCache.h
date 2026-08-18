#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace ContentRootInput {
class InputDeviceCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInputDeviceType@InputDeviceCache@ContentRootInput@@QEBA?AW4InputDeviceType@DirectUI@@XZ
    int GetLastInputDeviceType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@InputDeviceCache@ContentRootInput@@QEAAXXZ
    void Init();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastInputDeviceType@InputDeviceCache@ContentRootInput@@QEAAXW4InputDeviceType@DirectUI@@@Z
    void SetLastInputDeviceType(int);
};
} // namespace ContentRootInput
