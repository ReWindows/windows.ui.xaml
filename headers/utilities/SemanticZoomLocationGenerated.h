#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class SemanticZoomLocationGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@SemanticZoomLocationGenerated@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@SemanticZoomLocationGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Item(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Remainder@SemanticZoomLocationGenerated@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long get_Remainder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomPoint@SemanticZoomLocationGenerated@DirectUI@@QEAAJPEAUPoint@Foundation@Windows@@@Z
    long get_ZoomPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bounds@SemanticZoomLocationGenerated@DirectUI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_Bounds(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Item@SemanticZoomLocationGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Item(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Remainder@SemanticZoomLocationGenerated@DirectUI@@QEAAJURect@Foundation@Windows@@@Z
    long put_Remainder(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomPoint@SemanticZoomLocationGenerated@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long put_ZoomPoint(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SemanticZoomLocationGenerated@DirectUI@@UEAA@XZ
    virtual ~SemanticZoomLocationGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SemanticZoomLocationGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SemanticZoomLocationGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SemanticZoomLocationGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SemanticZoomLocationGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
