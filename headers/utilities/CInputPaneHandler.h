#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CInputPaneHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFocusedElementBringIntoView@CInputPaneHandler@@QEAAJ_N000@Z
    long EnsureFocusedElementBringIntoView(bool, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneExposureRect@CInputPaneHandler@@UEAA?AUXRECTF_WH@@XZ
    virtual XRECTF_WH GetInputPaneExposureRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hiding@CInputPaneHandler@@UEAAJH_N@Z
    virtual long Hiding(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEditControlInputPaneHiding@CInputPaneHandler@@UEAAJXZ
    virtual long NotifyEditControlInputPaneHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEditFocusRemoval@CInputPaneHandler@@UEAAJXZ
    virtual long NotifyEditFocusRemoval();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Showing@CInputPaneHandler@@UEAAJPEAUXRECTF_WH@@H_N1@Z
    virtual long Showing(XRECTF_WH *, int, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringTextControlIntoView@CInputPaneHandler@@AEAAJH@Z
    long BringTextControlIntoView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveExtentMarginTimerTick@CInputPaneHandler@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnRemoveExtentMarginTimerTick(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResizeRootScrollViewerTimerTick@CInputPaneHandler@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnResizeRootScrollViewerTimerTick(CDependencyObject *, CEventArgs *);
};
