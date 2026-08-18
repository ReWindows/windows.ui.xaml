#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class InertiaExpansionBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@InertiaExpansionBehavior@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredDeceleration@InertiaExpansionBehavior@DirectUI@@UEAAJPEAN@Z
    virtual long get_DesiredDeceleration(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredExpansion@InertiaExpansionBehavior@DirectUI@@UEAAJPEAN@Z
    virtual long get_DesiredExpansion(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredDeceleration@InertiaExpansionBehavior@DirectUI@@UEAAJN@Z
    virtual long put_DesiredDeceleration(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredExpansion@InertiaExpansionBehavior@DirectUI@@UEAAJN@Z
    virtual long put_DesiredExpansion(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InertiaExpansionBehavior@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InertiaExpansionBehavior@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@InertiaExpansionBehavior@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InertiaExpansionBehavior@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
