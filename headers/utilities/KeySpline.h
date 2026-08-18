#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class KeySpline {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@KeySpline@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlPoint1@KeySpline@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_ControlPoint1(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlPoint2@KeySpline@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_ControlPoint2(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ControlPoint1@KeySpline@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_ControlPoint1(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ControlPoint2@KeySpline@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_ControlPoint2(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@KeySpline@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@KeySpline@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@KeySpline@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@KeySpline@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
