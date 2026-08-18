#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class ArcSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ArcSegment@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLargeArc@ArcSegment@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsLargeArc(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point@ArcSegment@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@ArcSegment@DirectUI@@UEAAJPEAN@Z
    virtual long get_RotationAngle(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ArcSegment@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SweepDirection@ArcSegment@DirectUI@@UEAAJPEAW4SweepDirection@Media@Xaml@UI@Windows@@@Z
    virtual long get_SweepDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsLargeArc@ArcSegment@DirectUI@@UEAAJE@Z
    virtual long put_IsLargeArc(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Point@ArcSegment@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Point(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@ArcSegment@DirectUI@@UEAAJN@Z
    virtual long put_RotationAngle(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@ArcSegment@DirectUI@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_Size(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SweepDirection@ArcSegment@DirectUI@@UEAAJW4SweepDirection@Media@Xaml@UI@Windows@@@Z
    virtual long put_SweepDirection(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ArcSegment@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ArcSegment@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ArcSegment@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ArcSegment@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
