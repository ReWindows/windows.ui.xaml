#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class PopupThemeTransitionGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PopupThemeTransitionGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromHorizontalOffset@PopupThemeTransitionGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FromHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromVerticalOffset@PopupThemeTransitionGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FromVerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FromHorizontalOffset@PopupThemeTransitionGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FromHorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FromVerticalOffset@PopupThemeTransitionGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FromVerticalOffset(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PopupThemeTransitionGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PopupThemeTransitionGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PopupThemeTransitionGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PopupThemeTransitionGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
