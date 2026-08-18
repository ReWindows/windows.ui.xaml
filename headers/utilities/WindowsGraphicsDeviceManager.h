#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class WindowsGraphicsDeviceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanContinueOnInternalDriverError@WindowsGraphicsDeviceManager@@QEAA_NXZ
    bool CanContinueOnInternalDriverError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupCachedDeviceResources@WindowsGraphicsDeviceManager@@QEAAX_N0@Z
    void CleanupCachedDeviceResources(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WindowsGraphicsDeviceManager@@SAJPEAPEAV1@@Z
    static long Create(WindowsGraphicsDeviceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDCompDevice@WindowsGraphicsDeviceManager@@QEAAJXZ
    long EnsureDCompDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGraphicsDeviceForVideo@WindowsGraphicsDeviceManager@@QEAAJPEAPEAVCD3D11Device@@@Z
    long GetGraphicsDeviceForVideo(CD3D11Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartResourceCreation@WindowsGraphicsDeviceManager@@QEAAJPEA_N@Z
    long StartResourceCreation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForD3DDependentResourceCreation@WindowsGraphicsDeviceManager@@QEAAJXZ
    long WaitForD3DDependentResourceCreation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDummyText@WindowsGraphicsDeviceManager@@AEAAJXZ
    long DrawDummyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WindowsGraphicsDeviceManager@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCallback@WindowsGraphicsDeviceManager@@CAKPEAX@Z
    static unsigned long InitializeCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeExpensiveResources@WindowsGraphicsDeviceManager@@AEAAJXZ
    long InitializeExpensiveResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInitializationThreadCompletion@WindowsGraphicsDeviceManager@@AEAAJXZ
    long WaitForInitializationThreadCompletion();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsGraphicsDeviceManager@@AEAA@XZ
    WindowsGraphicsDeviceManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsGraphicsDeviceManager@@EEAA@XZ
    virtual ~WindowsGraphicsDeviceManager();
};
