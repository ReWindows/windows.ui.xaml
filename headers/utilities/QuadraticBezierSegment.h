#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class QuadraticBezierSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@QuadraticBezierSegment@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point1@QuadraticBezierSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point1(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point2@QuadraticBezierSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point2(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point1@QuadraticBezierSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point1(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point2@QuadraticBezierSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point2(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@QuadraticBezierSegment@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@QuadraticBezierSegment@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@QuadraticBezierSegment@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@QuadraticBezierSegment@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
