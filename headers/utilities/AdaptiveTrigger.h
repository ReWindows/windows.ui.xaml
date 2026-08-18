#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class AdaptiveTrigger {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AdaptiveTrigger@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinWindowHeight@AdaptiveTrigger@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinWindowHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinWindowWidth@AdaptiveTrigger@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinWindowWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinWindowHeight@AdaptiveTrigger@DirectUI@@UEAAJN@Z
    virtual long put_MinWindowHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinWindowWidth@AdaptiveTrigger@DirectUI@@UEAAJN@Z
    virtual long put_MinWindowWidth(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AdaptiveTrigger@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AdaptiveTrigger@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AdaptiveTrigger@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AdaptiveTrigger@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
