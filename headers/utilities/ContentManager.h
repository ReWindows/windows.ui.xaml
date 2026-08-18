#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ContentManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRootScrollViewer@ContentManager@DirectUI@@QEAAJXZ
    long ClearRootScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@ContentManager@DirectUI@@QEAAJXZ
    long OnWindowSizeChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@ContentManager@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long SetContent(::Windows::UI::Xaml::IUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentManager@DirectUI@@QEAA@XZ
    ~ContentManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootScrollViewer@ContentManager@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long CreateRootScrollViewer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootScrollViewerSizeChanged@ContentManager@DirectUI@@CAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    static long OnRootScrollViewerSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
};
} // namespace DirectUI
