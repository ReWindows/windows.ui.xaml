#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class Polyline {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Polyline@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillRule@Polyline@DirectUI@@UEAAJPEAW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long get_FillRule(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Points@Polyline@DirectUI@@UEAAJPEAPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Points(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FillRule@Polyline@DirectUI@@UEAAJW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long put_FillRule(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Points@Polyline@DirectUI@@UEAAJPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Points(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Polyline@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Polyline@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Polyline@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Polyline@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
