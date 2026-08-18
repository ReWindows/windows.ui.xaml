#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDirectManipulationViewportEventHandler {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?OnContentUpdated@CDirectManipulationViewportEventHandler@@UEAAJPEAUIDirectManipulationViewport@@PEAUIDirectManipulationContent@@@Z
    virtual long OnContentUpdated(IDirectManipulationViewport *, IDirectManipulationContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragDropStatusChange@CDirectManipulationViewportEventHandler@@UEAAJPEAUIDirectManipulationViewport2@@W4DIRECTMANIPULATION_DRAG_DROP_STATUS@@1@Z
    virtual long OnDragDropStatusChange(IDirectManipulationViewport2*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInteraction@CDirectManipulationViewportEventHandler@@UEAAJPEAUIDirectManipulationViewport2@@W4DIRECTMANIPULATION_INTERACTION_TYPE@@@Z
    virtual long OnInteraction(IDirectManipulationViewport2*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportStatusChanged@CDirectManipulationViewportEventHandler@@UEAAJPEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@1@Z
    virtual long OnViewportStatusChanged(IDirectManipulationViewport *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewportUpdated@CDirectManipulationViewportEventHandler@@UEAAJPEAUIDirectManipulationViewport@@@Z
    virtual long OnViewportUpdated(IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalQueryInterface@CDirectManipulationViewportEventHandler@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long _InternalQueryInterface(_GUID const &, void * *);
};
