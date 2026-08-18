#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace ContentRootAdapters {
class ContentRootEventListener {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentRootEventListener@ContentRootAdapters@@QEAA@AEAVCContentRoot@@@Z
    ContentRootEventListener(CContentRoot &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentRootEventListener@ContentRootAdapters@@QEAA@XZ
    ~ContentRootEventListener();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuOpeningEventListener@ContentRootEventListener@ContentRootAdapters@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long ContextMenuOpeningEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManipulationInertiaProcessingEventListener@ContentRootEventListener@ContentRootAdapters@@CAXPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static void ManipulationInertiaProcessingEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextMenuOpeningEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long RegisterContextMenuOpeningEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterManipulationInertiaProcessingEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long RegisterManipulationInertiaProcessingEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRightTappedEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long RegisterRightTappedEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTabProcessEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long RegisterTabProcessEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RightTappedEventListener@ContentRootEventListener@ContentRootAdapters@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long RightTappedEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabProcessingEventListener@ContentRootEventListener@ContentRootAdapters@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long TabProcessingEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterContextMenuOpeningEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long UnregisterContextMenuOpeningEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterManipulationInertiaProcessingEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long UnregisterManipulationInertiaProcessingEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterRightTappedEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long UnregisterRightTappedEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTabProcessEventHandler@ContentRootEventListener@ContentRootAdapters@@AEAAJXZ
    long UnregisterTabProcessEventHandler();
};
} // namespace ContentRootAdapters
