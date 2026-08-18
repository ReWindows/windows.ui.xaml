#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ContentThemeTransitionGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ContentThemeTransitionGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@ContentThemeTransitionGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@ContentThemeTransitionGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@ContentThemeTransitionGenerated@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@ContentThemeTransitionGenerated@DirectUI@@UEAAJN@Z
    virtual long put_VerticalOffset(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContentThemeTransitionGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContentThemeTransitionGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContentThemeTransitionGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContentThemeTransitionGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
