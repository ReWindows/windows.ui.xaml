#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DockPatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DockPositionProperty@DockPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_DockPositionProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DockPatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DockPatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DockPatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DockPatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~DockPatternIdentifiers();
};
} // namespace DirectUI
