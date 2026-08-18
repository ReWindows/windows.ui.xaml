#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class SwapChainBackgroundPanelGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreIndependentInputSource@SwapChainBackgroundPanelGenerated@DirectUI@@UEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@PEAPEAUICoreInputSourceBase@456@@Z
    virtual long CreateCoreIndependentInputSource(int, ::Windows::UI::Core::ICoreInputSourceBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SwapChainBackgroundPanelGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SwapChainBackgroundPanelGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SwapChainBackgroundPanelGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SwapChainBackgroundPanelGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
