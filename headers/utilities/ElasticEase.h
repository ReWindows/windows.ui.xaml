#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ElasticEase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ElasticEase@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Oscillations@ElasticEase@DirectUI@@UEAAJPEAH@Z
    virtual long get_Oscillations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Springiness@ElasticEase@DirectUI@@UEAAJPEAN@Z
    virtual long get_Springiness(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Oscillations@ElasticEase@DirectUI@@UEAAJH@Z
    virtual long put_Oscillations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Springiness@ElasticEase@DirectUI@@UEAAJN@Z
    virtual long put_Springiness(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ElasticEase@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ElasticEase@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ElasticEase@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ElasticEase@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
