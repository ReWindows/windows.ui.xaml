#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class LineGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@LineGeometry@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EndPoint@LineGeometry@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_EndPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPoint@LineGeometry@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_StartPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EndPoint@LineGeometry@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_EndPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartPoint@LineGeometry@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_StartPoint(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LineGeometry@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LineGeometry@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@LineGeometry@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LineGeometry@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
