#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TogglePatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateProperty@TogglePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ToggleStateProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TogglePatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TogglePatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TogglePatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TogglePatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~TogglePatternIdentifiers();
};
} // namespace DirectUI
