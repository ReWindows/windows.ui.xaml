#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class NormalLaunchActivatedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@NormalLaunchActivatedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@NormalLaunchActivatedEventArgs@DirectUI@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousExecutionState@NormalLaunchActivatedEventArgs@DirectUI@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z
    virtual long get_PreviousExecutionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreen@NormalLaunchActivatedEventArgs@DirectUI@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z
    virtual long get_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@NormalLaunchActivatedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NormalLaunchActivatedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NormalLaunchActivatedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NormalLaunchActivatedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NormalLaunchActivatedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
