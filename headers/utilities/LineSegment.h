#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class LineSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@LineSegment@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point@LineSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point@LineSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LineSegment@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LineSegment@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@LineSegment@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LineSegment@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
