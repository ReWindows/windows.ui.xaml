#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ManipulationPivotGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ManipulationPivotGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Center@ManipulationPivotGenerated@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Center(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Radius@ManipulationPivotGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Radius(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Center@ManipulationPivotGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Center(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Radius@ManipulationPivotGenerated@DirectUI@@UEAAJN@Z
    virtual long put_Radius(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationPivotGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationPivotGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ManipulationPivotGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationPivotGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
