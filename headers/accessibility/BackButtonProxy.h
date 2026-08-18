#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class BackButtonProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@BackButtonProxy@DirectUI@@QEAAJXZ
    long Connect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@BackButtonProxy@DirectUI@@QEAAJXZ
    long Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterListener@BackButtonProxy@DirectUI@@QEAAJPEAUIBackButtonPressedListener@2@@Z
    long RegisterListener(::DirectUI::IBackButtonPressedListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterListener@BackButtonProxy@DirectUI@@QEAAXPEAUIBackButtonPressedListener@2@@Z
    void UnregisterListener(::DirectUI::IBackButtonPressedListener *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackButtonProxy@DirectUI@@QEAA@XZ
    ~BackButtonProxy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemNavigationClient@BackButtonProxy@DirectUI@@AEAAJPEAPEAUISystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    long GetSystemNavigationClient(::Windows::Internal::ApplicationModel::WindowManagement::ISystemNavigationClientAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBackKeyPress@BackButtonProxy@DirectUI@@AEAAJPEAE@Z
    long HandleBackKeyPress(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackKeyPressed@BackButtonProxy@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnBackKeyPressed(IInspectable *, IInspectable *);
};
} // namespace DirectUI
