#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class WindowsXamlManager {
public:
    class XamlCore;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@WindowsXamlManager@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WindowsXamlManager@DirectUI@@UEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsXamlManager@DirectUI@@UEAA@XZ
    virtual ~WindowsXamlManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckWindowingModelPolicy@WindowsXamlManager@DirectUI@@AEAAJXZ
    long CheckWindowingModelPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueClose@WindowsXamlManager@DirectUI@@AEAAJXZ
    long EnqueueClose();
};
} // namespace DirectUI
