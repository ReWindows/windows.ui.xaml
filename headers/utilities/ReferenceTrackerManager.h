#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class ReferenceTrackerManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMemoryPressure@ReferenceTrackerManager@DirectUI@@SAJ_K@Z
    static long AddMemoryPressure(uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ReferenceTrackerManager@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableCore@ReferenceTrackerManager@DirectUI@@SAJPEAUIDXamlCore@2@@Z
    static long DisableCore(::DirectUI::IDXamlCore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@ReferenceTrackerManager@DirectUI@@SAJXZ
    static long EnsureInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTrackerTargetsCompleted@ReferenceTrackerManager@DirectUI@@UEAAJE@Z
    virtual long FindTrackerTargetsCompleted(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNoRef@ReferenceTrackerManager@DirectUI@@SAPEAUIReferenceTrackerManager@@XZ
    static IReferenceTrackerManager * GetNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrackerTarget@ReferenceTrackerManager@DirectUI@@SAPEAUIInspectable@@QEAUIUnknown@@@Z
    static IInspectable * GetTrackerTarget(IUnknown * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoreRegistered@ReferenceTrackerManager@DirectUI@@SAIPEAUIDXamlCore@2@@Z
    static unsigned int IsCoreRegistered(::DirectUI::IDXamlCore *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ReferenceTrackerManager@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackingCompleted@ReferenceTrackerManager@DirectUI@@UEAAJXZ
    virtual long ReferenceTrackingCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackingStarted@ReferenceTrackerManager@DirectUI@@UEAAJXZ
    virtual long ReferenceTrackingStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCore@ReferenceTrackerManager@DirectUI@@SAJPEAUIDXamlCore@2@@Z
    static long RegisterCore(::DirectUI::IDXamlCore *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ReferenceTrackerManager@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMemoryPressure@ReferenceTrackerManager@DirectUI@@SAJ_K@Z
    static long RemoveMemoryPressure(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchCoresForObject@ReferenceTrackerManager@DirectUI@@SAPEAUIDXamlCore@2@PEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@@Z
    static ::DirectUI::IDXamlCore * SearchCoresForObject(::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceTrackerHost@ReferenceTrackerManager@DirectUI@@UEAAJPEAUIReferenceTrackerHost@@@Z
    virtual long SetReferenceTrackerHost(IReferenceTrackerHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCore@ReferenceTrackerManager@DirectUI@@SAJPEAUIDXamlCore@2@@Z
    static long UnregisterCore(::DirectUI::IDXamlCore *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ReferenceTrackerManager@DirectUI@@AEAA@XZ
    ReferenceTrackerManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLastFindWalkIdForAllPeers@ReferenceTrackerManager@DirectUI@@AEAAXXZ
    void ResetLastFindWalkIdForAllPeers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReferenceTrackerManager@DirectUI@@AEAA@XZ
    ~ReferenceTrackerManager();
};
} // namespace DirectUI
