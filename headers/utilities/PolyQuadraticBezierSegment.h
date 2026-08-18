#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PolyQuadraticBezierSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PolyQuadraticBezierSegment@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Points@PolyQuadraticBezierSegment@DirectUI@@UEAAJPEAPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Points(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Points@PolyQuadraticBezierSegment@DirectUI@@UEAAJPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Points(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PolyQuadraticBezierSegment@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PolyQuadraticBezierSegment@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PolyQuadraticBezierSegment@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PolyQuadraticBezierSegment@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
