#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class SwipeBackThemeAnimationGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SwipeBackThemeAnimationGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromHorizontalOffset@SwipeBackThemeAnimationGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FromHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FromVerticalOffset@SwipeBackThemeAnimationGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FromVerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetName@SwipeBackThemeAnimationGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FromHorizontalOffset@SwipeBackThemeAnimationGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FromHorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FromVerticalOffset@SwipeBackThemeAnimationGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FromVerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetName@SwipeBackThemeAnimationGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetName(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SwipeBackThemeAnimationGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SwipeBackThemeAnimationGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SwipeBackThemeAnimationGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SwipeBackThemeAnimationGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
