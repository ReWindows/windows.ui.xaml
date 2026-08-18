#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class PathFigure {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PathFigure@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsClosed@PathFigure@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsClosed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFilled@PathFigure@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsFilled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Segments@PathFigure@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVPathSegment@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Segments(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPoint@PathFigure@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_StartPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsClosed@PathFigure@DirectUI@@UEAAJE@Z
    virtual long put_IsClosed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFilled@PathFigure@DirectUI@@UEAAJE@Z
    virtual long put_IsFilled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Segments@PathFigure@DirectUI@@UEAAJPEAU?$IVector@PEAVPathSegment@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Segments(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartPoint@PathFigure@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_StartPoint(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PathFigure@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PathFigure@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PathFigure@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PathFigure@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
