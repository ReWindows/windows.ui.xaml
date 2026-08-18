#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class CD3D11DeviceInstance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateFromSysMemBitsPool@CD3D11DeviceInstance@@QEAAJIIW4DXGI_FORMAT@@IPEAPEAVSystemMemoryBits@@@Z
    long AllocateFromSysMemBitsPool(unsigned int, unsigned int, int, unsigned int, SystemMemoryBits * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3D11DeviceInstance@@QEAA@I@Z
    CD3D11DeviceInstance(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DFactory@CD3D11DeviceInstance@@QEAAJXZ
    long EnsureD2DFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DResources@CD3D11DeviceInstance@@QEAAJXZ
    long EnsureD2DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceSpecificD2DResources@CD3D11DeviceInstance@@QEAAJPEBVCD3D11Device@@@Z
    long EnsureDeviceSpecificD2DResources(CD3D11Device const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@CD3D11DeviceInstance@@QEAAJXZ
    long EnsureResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockedDeviceContext@CD3D11DeviceInstance@@QEBA?AU?$CLockedGraphicsPointer@UID3D11DeviceContext@@@@PEBVCD3D11SharedDeviceGuard@@@Z
    WindissectOpaque GetLockedDeviceContext(CD3D11SharedDeviceGuard const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRefreshRateInfo@CD3D11DeviceInstance@@QEAAJPEAPEAUIPALRefreshRateInfo@@@Z
    long GetRefreshRateInfo(IPALRefreshRateInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVideoDevice@CD3D11DeviceInstance@@QEAAJXZ
    long InitializeVideoDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceLost@CD3D11DeviceInstance@@QEBA_NXZ
    bool IsDeviceLost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHdrOutput@CD3D11DeviceInstance@@QEAAJPEAUHMONITOR__@@PEA_N@Z
    long IsHdrOutput(HMONITOR__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordDeviceAsLost@CD3D11DeviceInstance@@QEAAXXZ
    void RecordDeviceAsLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD3D11DeviceInstance@@SAHPEAE@Z
    static int ReleaseD2DResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResourcesOnDeviceLost@CD3D11DeviceInstance@@QEAAXXZ
    void ReleaseResourcesOnDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseScratchResources@CD3D11DeviceInstance@@QEAAJXZ
    long ReleaseScratchResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeLockAndCheckDeviceLost@CD3D11DeviceInstance@@QEAAJPEAVCD3D11SharedDeviceGuard@@@Z
    long TakeLockAndCheckDeviceLost(CD3D11SharedDeviceGuard *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D11DeviceInstance@@QEAA@XZ
    ~CD3D11DeviceInstance();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForStaleD3DDevice@CD3D11DeviceInstance@@AEAAJXZ
    long CheckForStaleD3DDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGraphicsDeviceFromAdapter@CD3D11DeviceInstance@@AEAAJPEAUIDXGIAdapter1@@_N11@Z
    long CreateGraphicsDeviceFromAdapter(IDXGIAdapter1*, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDXGIAdapters@CD3D11DeviceInstance@@AEAAJXZ
    long EnsureDXGIAdapters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLockTaken@CD3D11DeviceInstance@@AEBAXPEBVCD3D11SharedDeviceGuard@@@Z
    void EnsureLockTaken(CD3D11SharedDeviceGuard const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeState@CD3D11DeviceInstance@@AEAAJXZ
    long InitializeState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD3D11DeviceInstance@@AEAAXJ@Z
    void ReleaseD2DResources(long);
};
