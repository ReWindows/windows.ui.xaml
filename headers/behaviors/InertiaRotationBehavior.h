#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class InertiaRotationBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@InertiaRotationBehavior@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredDeceleration@InertiaRotationBehavior@DirectUI@@UEAAJPEAN@Z
    virtual long get_DesiredDeceleration(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredRotation@InertiaRotationBehavior@DirectUI@@UEAAJPEAN@Z
    virtual long get_DesiredRotation(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredDeceleration@InertiaRotationBehavior@DirectUI@@UEAAJN@Z
    virtual long put_DesiredDeceleration(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredRotation@InertiaRotationBehavior@DirectUI@@UEAAJN@Z
    virtual long put_DesiredRotation(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InertiaRotationBehavior@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InertiaRotationBehavior@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@InertiaRotationBehavior@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InertiaRotationBehavior@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
