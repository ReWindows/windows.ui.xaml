#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class BezierSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BezierSegment@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point1@BezierSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point1(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point2@BezierSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point2(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point3@BezierSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point3(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point1@BezierSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point1(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point2@BezierSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point2(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point3@BezierSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point3(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BezierSegment@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BezierSegment@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BezierSegment@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BezierSegment@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
