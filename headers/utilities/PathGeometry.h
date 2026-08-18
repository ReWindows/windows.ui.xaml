#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class PathGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PathGeometry@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Figures@PathGeometry@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVPathFigure@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Figures(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillRule@PathGeometry@DirectUI@@UEAAJPEAW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long get_FillRule(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Figures@PathGeometry@DirectUI@@UEAAJPEAU?$IVector@PEAVPathFigure@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Figures(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FillRule@PathGeometry@DirectUI@@UEAAJW4FillRule@Media@Xaml@UI@Windows@@@Z
    virtual long put_FillRule(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PathGeometry@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PathGeometry@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PathGeometry@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PathGeometry@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
