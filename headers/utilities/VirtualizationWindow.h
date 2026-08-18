#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
namespace DirectUI::Components::TileGridPanel {
class VirtualizationWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueBuildingCache@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEBA_NXZ
    bool ContinueBuildingCache() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoercedViewportShift@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAANN@Z
    double GetCoercedViewportShift(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewer@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJPEAPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    long GetScrollViewer(::Windows::UI::Xaml::Controls::IScrollViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowCacheBuffer@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long GrowCacheBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long OnOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushWindowChangeHandler@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJPEAUIVirtualizationWindowChangeHandler@234@@Z
    long PushWindowChangeHandler(::DirectUI::Components::TileGridPanel::IVirtualizationWindowChangeHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCacheBuffer@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJXZ
    long ResetCacheBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToRect@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJURect@Foundation@Windows@@W4ScrollIntoViewAlignment@Controls@Xaml@UI@7@_N@Z
    long ScrollToRect(WindissectOpaque, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCacheLength@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJN@Z
    long SetCacheLength(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPanelExtent@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJUSize@Foundation@Windows@@@Z
    long SetPanelExtent(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollViewer@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    long SetScrollViewer(::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftViewport@VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAAJN@Z
    long ShiftViewport(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAA@PEAUIOrientationBasedMeasures@123@@Z
    VirtualizationWindow(::DirectUI::Components::TileGridPanel::IOrientationBasedMeasures *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualizationWindow@TileGridPanel@Components@DirectUI@@QEAA@XZ
    ~VirtualizationWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRealizationWindowChanged@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJXZ
    long OnRealizationWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerSizeChanged@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnScrollViewerSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewerViewChanged(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanging@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewerViewChanging(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToOffset@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJPEAUIScrollViewer@Controls@Xaml@UI@Windows@@N_N@Z
    long ScrollToOffset(::Windows::UI::Xaml::Controls::IScrollViewer *, double, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealizationWindowFromVisibleWindow@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJXZ
    long SetRealizationWindowFromVisibleWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToScrollViewer@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJXZ
    long SubscribeToScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromScrollViewer@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJXZ
    long UnsubscribeFromScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVirtualizationWindows@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJXZ
    long UpdateVirtualizationWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVirtualizationWindows@VirtualizationWindow@TileGridPanel@Components@DirectUI@@AEAAJPEAUIScrollViewerView@Controls@Xaml@UI@Windows@@@Z
    long UpdateVirtualizationWindows(::Windows::UI::Xaml::Controls::IScrollViewerView *);
};
} // namespace DirectUI::Components::TileGridPanel
