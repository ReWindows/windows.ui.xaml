#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ManipulationPivotFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithCenterAndRadius@ManipulationPivotFactory@DirectUI@@UEAAJUPoint@Foundation@Windows@@NPEAPEAUIManipulationPivot@Input@Xaml@UI@5@@Z
    virtual long CreateInstanceWithCenterAndRadius(WindissectOpaque, double, ::Windows::UI::Xaml::Input::IManipulationPivot * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationPivotFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationPivotFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ManipulationPivotFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationPivotFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithCenterAndRadiusImpl@ManipulationPivotFactory@DirectUI@@AEAAJUPoint@Foundation@Windows@@NPEAPEAUIManipulationPivot@Input@Xaml@UI@5@@Z
    long CreateInstanceWithCenterAndRadiusImpl(WindissectOpaque, double, ::Windows::UI::Xaml::Input::IManipulationPivot * *);
};
} // namespace DirectUI
