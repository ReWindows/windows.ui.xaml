#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class GeometryGroup {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GeometryGroup@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@GeometryGroup@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVGeometry@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillRule@GeometryGroup@DirectUI@@UEAAJPEAW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long get_FillRule(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Children@GeometryGroup@DirectUI@@UEAAJPEAU?$IVector@PEAVGeometry@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Children(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FillRule@GeometryGroup@DirectUI@@UEAAJW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long put_FillRule(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GeometryGroup@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GeometryGroup@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GeometryGroup@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GeometryGroup@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
