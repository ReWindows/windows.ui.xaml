#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class DesignerAppManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DesignerAppManagerFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIDesignerAppManager@Hosting@Xaml@UI@Windows@@@Z
    virtual long Create(HSTRING__*, ::Windows::UI::Xaml::Hosting::IDesignerAppManager * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DesignerAppManagerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DesignerAppManagerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DesignerAppManagerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
