#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace AutomationEventsHelper {
class StructureChangedEventInformation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStructureChangedEvent@StructureChangedEventInformation@AutomationEventsHelper@@QEBAXXZ
    void RaiseStructureChangedEvent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterChild@StructureChangedEventInformation@AutomationEventsHelper@@QEAAXPEAVCAutomationPeer@@W4StructureChangedType@2@@Z
    void RegisterChild(CAutomationPeer *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StructureChangedEventInformation@AutomationEventsHelper@@QEAA@$$QEAV01@@Z
    StructureChangedEventInformation(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StructureChangedEventInformation@AutomationEventsHelper@@QEAA@XZ
    ~StructureChangedEventInformation();
};
} // namespace AutomationEventsHelper
