#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class BounceEase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BounceEase@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounces@BounceEase@DirectUI@@UEAAJPEAH@Z
    virtual long get_Bounces(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounciness@BounceEase@DirectUI@@UEAAJPEAN@Z
    virtual long get_Bounciness(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bounces@BounceEase@DirectUI@@UEAAJH@Z
    virtual long put_Bounces(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bounciness@BounceEase@DirectUI@@UEAAJN@Z
    virtual long put_Bounciness(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BounceEase@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BounceEase@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BounceEase@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BounceEase@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
