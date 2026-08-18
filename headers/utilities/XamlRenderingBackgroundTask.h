#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class XamlRenderingBackgroundTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@XamlRenderingBackgroundTask@DirectUI@@UEAAJPEAUIBackgroundTaskInstance@Background@ApplicationModel@Windows@@@Z
    virtual long Run(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlRenderingBackgroundTask@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlRenderingBackgroundTask@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlRenderingBackgroundTask@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
