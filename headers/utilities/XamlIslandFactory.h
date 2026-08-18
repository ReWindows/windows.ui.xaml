#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class XamlIslandFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandFromElement@XamlIslandFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIXamlIsland@Hosting@456@@Z
    virtual long GetIslandFromElement(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Hosting::IXamlIsland * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@XamlIslandFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlIslandFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlIslandFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlIslandFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlIslandFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandFromElementImpl@XamlIslandFactory@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIXamlIsland@Hosting@456@@Z
    long GetIslandFromElementImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Hosting::IXamlIsland * *);
};
} // namespace DirectUI
