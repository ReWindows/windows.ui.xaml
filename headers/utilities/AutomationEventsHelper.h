#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class AutomationEventsHelper {
public:
    class PeggedAutomationPeer;
    class StructureChangedEventInformation;
    class StructureChangedRequest;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpStructureChangedRequests@AutomationEventsHelper@@QEAAXXZ
    void CleanUpStructureChangedRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStructureChangedEvents@AutomationEventsHelper@@QEAAXXZ
    void RaiseStructureChangedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForStructureChangedEvent@AutomationEventsHelper@@QEAAXPEAVCAutomationPeer@@0W4StructureChangedType@1@@Z
    void RegisterForStructureChangedEvent(CAutomationPeer *, CAutomationPeer *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutomationEventsHelper@@QEAA@XZ
    ~AutomationEventsHelper();
};
