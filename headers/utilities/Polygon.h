#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class Polygon {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Polygon@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillRule@Polygon@DirectUI@@UEAAJPEAW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long get_FillRule(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Points@Polygon@DirectUI@@UEAAJPEAPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Points(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FillRule@Polygon@DirectUI@@UEAAJW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long put_FillRule(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Points@Polygon@DirectUI@@UEAAJPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Points(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Polygon@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Polygon@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Polygon@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Polygon@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
