#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class Run {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Run@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FlowDirection@Run@DirectUI@@UEAAJPEAW4FlowDirection@Xaml@UI@Windows@@@Z
    virtual long get_FlowDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@Run@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FlowDirection@Run@DirectUI@@UEAAJW4FlowDirection@Xaml@UI@Windows@@@Z
    virtual long put_FlowDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Text@Run@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Text(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Run@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Run@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Run@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Run@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
