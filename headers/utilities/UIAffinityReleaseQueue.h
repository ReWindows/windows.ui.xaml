#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class UIAffinityReleaseQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTree@UIAffinityReleaseQueue@DirectUI@@UEAAJPEAE@Z
    virtual long BuildTree(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@UIAffinityReleaseQueue@DirectUI@@QEAAJE@Z
    long Cleanup(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCleanup@UIAffinityReleaseQueue@DirectUI@@QEAAJEPEAE@Z
    long DoCleanup(unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueueObjects@UIAffinityReleaseQueue@DirectUI@@QEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long GetQueueObjects(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBuildTreeSuspended@UIAffinityReleaseQueue@DirectUI@@UEAAJPEAE@Z
    virtual long IsBuildTreeSuspended(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownDeferredWork@UIAffinityReleaseQueue@DirectUI@@UEAAJXZ
    virtual long ShutDownDeferredWork();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIAffinityReleaseQueue@DirectUI@@QEAA@XZ
    UIAffinityReleaseQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForCallbacks@UIAffinityReleaseQueue@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForCallbacks(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRegisteredForCallbacks@UIAffinityReleaseQueue@DirectUI@@UEAAJE@Z
    virtual long put_IsRegisteredForCallbacks(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIAffinityReleaseQueue@DirectUI@@UEAA@XZ
    virtual ~UIAffinityReleaseQueue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@UIAffinityReleaseQueue@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@UIAffinityReleaseQueue@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@UIAffinityReleaseQueue@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
