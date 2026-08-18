#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class XamlRenderingBackgroundTaskGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlRenderingBackgroundTaskGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRun@XamlRenderingBackgroundTaskGenerated@DirectUI@@UEAAJPEAUIBackgroundTaskInstance@Background@ApplicationModel@Windows@@@Z
    virtual long OnRun(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRunProtected@XamlRenderingBackgroundTaskGenerated@DirectUI@@QEAAJPEAUIBackgroundTaskInstance@Background@ApplicationModel@Windows@@@Z
    long OnRunProtected(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlRenderingBackgroundTaskGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlRenderingBackgroundTaskGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlRenderingBackgroundTaskGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
