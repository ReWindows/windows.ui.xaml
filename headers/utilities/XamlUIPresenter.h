#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class XamlUIPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlUIPresenter@DirectUI@@SAJPEAUIViewObjectPresentNotifySite@@PEAPEAUIXamlUIPresenter@Hosting@Xaml@UI@Windows@@@Z
    static long Create(IViewObjectPresentNotifySite *, ::Windows::UI::Xaml::Hosting::IXamlUIPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RootElementImpl@XamlUIPresenter@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_RootElementImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ThemeKeyImpl@XamlUIPresenter@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long put_ThemeKeyImpl(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ThemeResourcesXamlImpl@XamlUIPresenter@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long put_ThemeResourcesXamlImpl(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlUIPresenter@DirectUI@@UEAA@XZ
    virtual ~XamlUIPresenter();
};
} // namespace DirectUI
