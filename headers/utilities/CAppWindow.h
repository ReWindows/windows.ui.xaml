#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CAppWindow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppWindow@@QEAA@AEBV?$ComPtr@UIAppWindow@WindowManagement@UI@Windows@@@WRL@Microsoft@@@Z
    CAppWindow(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppWindow@@QEAA@XZ
    ~CAppWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAppWindow@CAppWindow@@AEAAXQEAUIAppWindow@WindowManagement@UI@Windows@@@Z
    void RemoveAppWindow(::Windows::UI::WindowManagement::IAppWindow * const);
};
