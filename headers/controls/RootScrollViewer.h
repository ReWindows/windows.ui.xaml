#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class RootScrollViewer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInputPaneStateChange@RootScrollViewer@DirectUI@@QEAAJW4InputPaneState@2@UXRECTF_WH@@@Z
    long NotifyInputPaneStateChange(int, XRECTF_WH);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootScrollContentPresenter@RootScrollViewer@DirectUI@@QEAAXQEAVScrollContentPresenter@2@@Z
    void SetRootScrollContentPresenter(::DirectUI::ScrollContentPresenter * const);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputPaneShow@RootScrollViewer@DirectUI@@MEAAEXZ
    virtual unsigned char IsInputPaneShow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootScrollViewer@RootScrollViewer@DirectUI@@MEAAEXZ
    virtual unsigned char IsRootScrollViewer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootScrollViewerAllowImplicitStyle@RootScrollViewer@DirectUI@@MEAAEXZ
    virtual unsigned char IsRootScrollViewerAllowImplicitStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RootScrollViewer@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputPaneOffsetX@RootScrollViewer@DirectUI@@MEAAJXZ
    virtual long UpdateInputPaneOffsetX();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputPaneOffsetY@RootScrollViewer@DirectUI@@MEAAJXZ
    virtual long UpdateInputPaneOffsetY();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputPaneTransition@RootScrollViewer@DirectUI@@MEAAXXZ
    virtual void UpdateInputPaneTransition();
};
} // namespace DirectUI
