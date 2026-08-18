#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace ContentRootInput {
class MouseModeProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableMouseModeController@MouseModeProcessor@ContentRootInput@@QEAAJXZ
    long DisableMouseModeController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClampedControllerNavigationBounds@MouseModeProcessor@ContentRootInput@@QEAAJPEAUtagRECT@@@Z
    long GetClampedControllerNavigationBounds(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenPositionOfControl@MouseModeProcessor@ContentRootInput@@QEAAJPEAVCControl@@PEAUtagRECT@@@Z
    long GetScreenPositionOfControl(CControl *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMouseMode@MouseModeProcessor@ContentRootInput@@QEAAJPEAUControllerNavigationFunctions@@@Z
    long InitializeMouseMode(ControllerNavigationFunctions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseModeBoundsCallback@MouseModeProcessor@ContentRootInput@@QEAAJUtagPOINT@@@Z
    long MouseModeBoundsCallback(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseModeBoundsCallbackStatic@MouseModeProcessor@ContentRootInput@@SAXUtagPOINT@@PEAX@Z
    static void MouseModeBoundsCallbackStatic(tagPOINT, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MouseModeProcessor@ContentRootInput@@QEAA@AEAVCInputManager@@@Z
    MouseModeProcessor(CInputManager &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MouseModeProcessor@ContentRootInput@@QEAA@AEBV01@@Z
    MouseModeProcessor(::ContentRootInput::MouseModeProcessor const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreMouseMode@MouseModeProcessor@ContentRootInput@@QEAAJXZ
    long RestoreMouseMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendMouseMode@MouseModeProcessor@ContentRootInput@@QEAAJXZ
    long SuspendMouseMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseMode@MouseModeProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@_N@Z
    long UpdateMouseMode(CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseModeArea@MouseModeProcessor@ContentRootInput@@QEAAJXZ
    long UpdateMouseModeArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseModeController@MouseModeProcessor@ContentRootInput@@QEAAJ_N@Z
    long UpdateMouseModeController(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseModeControllerCallback@MouseModeProcessor@ContentRootInput@@QEAAJ_N@Z
    long UpdateMouseModeControllerCallback(bool);
};
} // namespace ContentRootInput
