#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CD3D11Device {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDXGIDeviceManager@CD3D11Device@@QEAAJXZ
    long CleanupDXGIDeviceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD3D11Device@@SAJPEAPEAV1@_N@Z
    static long Create(CD3D11Device * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEventAndEnqueueWait@CD3D11Device@@QEAAJPEAPEAUIPALWaitable@@@Z
    long CreateEventAndEnqueueWait(IPALWaitable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSetEvent@CD3D11Device@@QEAAJPEAUIPALEvent@@PEAI@Z
    long EnqueueSetEvent(IPALEvent *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DResources@CD3D11Device@@QEAAJXZ
    long EnsureD2DResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DDevice@CD3D11Device@@QEBAPEAUID2D1Device@@PEBVCD3D11SharedDeviceGuard@@@Z
    ID2D1Device * GetD2DDevice(CD3D11SharedDeviceGuard const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DDeviceContext@CD3D11Device@@QEBAPEAUID2D1DeviceContext@@PEBVCD3D11SharedDeviceGuard@@@Z
    ID2D1DeviceContext * GetD2DDeviceContext(CD3D11SharedDeviceGuard const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DSolidColorBrush@CD3D11Device@@QEBAPEAUID2D1SolidColorBrush@@PEBVCD3D11SharedDeviceGuard@@@Z
    ID2D1SolidColorBrush * GetD2DSolidColorBrush(CD3D11SharedDeviceGuard const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIDeviceManager@CD3D11Device@@QEAAJPEAPEAUIMFDXGIDeviceManager@@@Z
    long GetDXGIDeviceManager(IMFDXGIDeviceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CD3D11Device@@QEBAPEAUID3D11Device@@PEBVCD3D11SharedDeviceGuard@@@Z
    ID3D11Device * GetDevice(CD3D11SharedDeviceGuard const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockedDeviceContext@CD3D11Device@@QEAA?AU?$CLockedGraphicsPointer@UID3D11DeviceContext@@@@PEBVCD3D11SharedDeviceGuard@@@Z
    WindissectOpaque GetLockedDeviceContext(CD3D11SharedDeviceGuard const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeviceRemovedEvent@CD3D11Device@@QEAAJPEAXPEAK@Z
    long RegisterDeviceRemovedEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseScratchResources@CD3D11Device@@QEAAJXZ
    long ReleaseScratchResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToSysMemBitsPool@CD3D11Device@@QEAAXPEAVSystemMemoryBits@@@Z
    void ReturnToSysMemBitsPool(SystemMemoryBits *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeLockAndCheckDeviceLost@CD3D11Device@@QEAAJPEAVCD3D11SharedDeviceGuard@@@Z
    long TakeLockAndCheckDeviceLost(CD3D11SharedDeviceGuard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimMemory@CD3D11Device@@QEAAXXZ
    void TrimMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDeviceRemoved@CD3D11Device@@QEAAXK@Z
    void UnregisterDeviceRemoved(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D11Device@@EEAA@XZ
    virtual ~CD3D11Device();
};
