#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CFrameworkInputPaneOneCore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHandler@CFrameworkInputPaneOneCore@@QEAAJ_N@Z
    long RegisterHandler(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterHandler@CFrameworkInputPaneOneCore@@QEAAJXZ
    long UnregisterHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameworkInputPaneVisibilityChanged@CFrameworkInputPaneOneCore@@AEAAJPEAUIInputPane@ViewManagement@UI@Windows@@PEAUIFrameworkInputPaneVisibilityEventArgs@345@@Z
    long OnFrameworkInputPaneVisibilityChanged(::Windows::UI::ViewManagement::IInputPane *, ::Windows::UI::ViewManagement::IFrameworkInputPaneVisibilityEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameworkInputPaneOneCore@@EEAA@XZ
    virtual ~CFrameworkInputPaneOneCore();
};
