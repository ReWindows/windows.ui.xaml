#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 218 member(s).
namespace ctl {
class WeakReferenceSourceNoThreadId {
public:
    class ReferenceTrackerGCLock;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThread@WeakReferenceSourceNoThreadId@ctl@@UEBAJXZ
    virtual long CheckThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@WeakReferenceSourceNoThreadId@ctl@@UEAAXXZ
    virtual void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTrackerHandle@WeakReferenceSourceNoThreadId@ctl@@QEAAJPEAUTrackerHandle__@@@Z
    long DeleteTrackerHandle(TrackerHandle__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndShutdown@WeakReferenceSourceNoThreadId@ctl@@UEAAJXZ
    virtual long EndShutdown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreForObject@WeakReferenceSourceNoThreadId@ctl@@UEAAPEAUIDXamlCore@DirectUI@@XZ
    virtual ::DirectUI::IDXamlCore * GetCoreForObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRefCount@WeakReferenceSourceNoThreadId@ctl@@QEAAKW4RefCountType@Hosting@Xaml@UI@Windows@@@Z
    unsigned long GetRefCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakReference@WeakReferenceSourceNoThreadId@ctl@@QEAAJPEAPEAUIWeakReference@@@Z
    long GetWeakReference(IWeakReference * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImplicitPegAllowed@WeakReferenceSourceNoThreadId@ctl@@UEAA_NXZ
    virtual bool ImplicitPegAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNativeAndComposed@WeakReferenceSourceNoThreadId@ctl@@QEAA_NXZ
    bool IsNativeAndComposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackingProcessed@WeakReferenceSourceNoThreadId@ctl@@UEAAXPEAUIDXamlCore@DirectUI@@@Z
    virtual void OnReferenceTrackingProcessed(::DirectUI::IDXamlCore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PegNoRef@WeakReferenceSourceNoThreadId@ctl@@QEAAXXZ
    void PegNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@WeakReferenceSourceNoThreadId@ctl@@UEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N@Z
    virtual bool ReferenceTrackerWalk(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpegNoRef@WeakReferenceSourceNoThreadId@ctl@@QEAAX_N@Z
    void UnpegNoRef(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePeg@WeakReferenceSourceNoThreadId@ctl@@QEAAX_N@Z
    void UpdatePeg(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WeakReferenceSourceNoThreadId@ctl@@UEAA@XZ
    virtual ~WeakReferenceSourceNoThreadId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToReferenceTrackingList@WeakReferenceSourceNoThreadId@ctl@@IEAAXXZ
    void AddToReferenceTrackingList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WeakReferenceSourceNoThreadId@ctl@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WeakReferenceSourceNoThreadId@ctl@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@WeakReferenceSourceNoThreadId@ctl@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WeakReferenceSourceNoThreadId@ctl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WeakReferenceSourceNoThreadId@ctl@@IEAA@XZ
    WeakReferenceSourceNoThreadId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionWrapper@WeakReferenceSourceNoThreadId@ctl@@AEAAJXZ
    long EnsureCompositionWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPtr@WeakReferenceSourceNoThreadId@ctl@@AEAAXQEAVTrackerTargetReference@DirectUI@@@Z
    void RegisterPtr(::DirectUI::TrackerTargetReference * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPtr@WeakReferenceSourceNoThreadId@ctl@@AEAAXPEAVTrackerTargetReference@DirectUI@@@Z
    void UnregisterPtr(::DirectUI::TrackerTargetReference *);
};
} // namespace ctl
