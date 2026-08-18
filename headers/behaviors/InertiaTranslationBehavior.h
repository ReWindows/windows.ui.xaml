#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class InertiaTranslationBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@InertiaTranslationBehavior@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredDeceleration@InertiaTranslationBehavior@DirectUI@@UEAAJPEAN@Z
    virtual long get_DesiredDeceleration(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredDisplacement@InertiaTranslationBehavior@DirectUI@@UEAAJPEAN@Z
    virtual long get_DesiredDisplacement(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredDeceleration@InertiaTranslationBehavior@DirectUI@@UEAAJN@Z
    virtual long put_DesiredDeceleration(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredDisplacement@InertiaTranslationBehavior@DirectUI@@UEAAJN@Z
    virtual long put_DesiredDisplacement(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InertiaTranslationBehavior@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InertiaTranslationBehavior@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@InertiaTranslationBehavior@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InertiaTranslationBehavior@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
