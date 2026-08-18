#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class EntranceThemeTransitionGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@EntranceThemeTransitionGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromHorizontalOffset@EntranceThemeTransitionGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FromHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromVerticalOffset@EntranceThemeTransitionGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FromVerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStaggeringEnabled@EntranceThemeTransitionGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsStaggeringEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FromHorizontalOffset@EntranceThemeTransitionGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FromHorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FromVerticalOffset@EntranceThemeTransitionGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FromVerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsStaggeringEnabled@EntranceThemeTransitionGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsStaggeringEnabled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EntranceThemeTransitionGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@EntranceThemeTransitionGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@EntranceThemeTransitionGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EntranceThemeTransitionGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
