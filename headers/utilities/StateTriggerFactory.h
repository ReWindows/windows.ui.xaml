#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class StateTriggerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActiveProperty@StateTriggerFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsActiveProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@StateTriggerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@StateTriggerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@StateTriggerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StateTriggerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
