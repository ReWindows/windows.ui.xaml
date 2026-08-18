#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class XamlIsland {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChangedStatic@XamlIsland@DirectUI@@SAXPEAVCXamlIslandRoot@@@Z
    static void OnSizeChangedStatic(CXamlIslandRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@XamlIsland@DirectUI@@QEAAXPEAUIInspectable@@@Z
    void SetOwner(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlIsland@DirectUI@@QEAA@XZ
    XamlIsland();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppContentImpl@XamlIsland@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_AppContentImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentImpl@XamlIsland@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_ContentImpl(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentImpl@XamlIsland@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_ContentImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlIsland@DirectUI@@UEAA@XZ
    virtual ~XamlIsland();
};
} // namespace DirectUI
