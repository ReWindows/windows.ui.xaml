#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CInputManagerDMViewportEventHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputManagerDMViewportEventHandler@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportDraggingStatusChange@CInputManagerDMViewportEventHandler@@UEAAJPEAUIObject@@W4DIRECTMANIPULATION_DRAG_DROP_STATUS@@1@Z
    virtual long ProcessDirectManipulationViewportDraggingStatusChange(IObject *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportInteractionTypeUpdate@CInputManagerDMViewportEventHandler@@UEAAJPEAUIObject@@W4XDMViewportInteractionType@@@Z
    virtual long ProcessDirectManipulationViewportInteractionTypeUpdate(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportStatusUpdate@CInputManagerDMViewportEventHandler@@UEAAJPEAUIObject@@W4XDMViewportStatus@@1@Z
    virtual long ProcessDirectManipulationViewportStatusUpdate(IObject *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputManagerDMViewportEventHandler@@UEAAIXZ
    virtual unsigned int Release();
};
