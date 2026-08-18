#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class ScrollViewerAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationGetScrollPercent@ScrollViewerAutomationPeer@DirectUI@@QEAANNNNN@Z
    double AutomationGetScrollPercent(double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationGetViewSize@ScrollViewerAutomationPeer@DirectUI@@QEAANNNN@Z
    double AutomationGetViewSize(double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildIsAcceptable@ScrollViewerAutomationPeer@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long ChildIsAcceptable(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ScrollViewerAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ScrollViewerAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ScrollViewerAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlElementCore@ScrollViewerAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsControlElementCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationEvents@ScrollViewerAutomationPeer@DirectUI@@QEAAJNNNNNNNN@Z
    long RaiseAutomationEvents(double, double, double, double, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJW4ScrollAmount@Automation@Xaml@UI@Windows@@0@Z
    long ScrollImpl(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercentImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJNN@Z
    long SetScrollPercentImpl(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercentImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_HorizontalScrollPercentImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSizeImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_HorizontalViewSizeImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollableImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_HorizontallyScrollableImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercentImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_VerticalScrollPercentImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSizeImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_VerticalViewSizeImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollableImpl@ScrollViewerAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_VerticallyScrollableImpl(unsigned char *);
};
} // namespace DirectUI
