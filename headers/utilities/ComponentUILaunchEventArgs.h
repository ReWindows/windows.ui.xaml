#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
class ComponentUILaunchEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentUILaunchEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentUILaunchEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentUILaunchEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentUILaunchEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentUILaunchEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentUILaunchEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationArgs@ComponentUILaunchEventArgs@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_ActivationArgs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@ComponentUILaunchEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@ComponentUILaunchEventArgs@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModelAcid@ComponentUILaunchEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ObjectModelAcid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousExecutionState@ComponentUILaunchEventArgs@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z
    virtual long get_PreviousExecutionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreen@ComponentUILaunchEventArgs@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z
    virtual long get_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@ComponentUILaunchEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentUILaunchEventArgs@@UEAA@XZ
    virtual ~ComponentUILaunchEventArgs();
};
