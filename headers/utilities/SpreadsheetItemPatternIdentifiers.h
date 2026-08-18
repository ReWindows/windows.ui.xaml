#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SpreadsheetItemPatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FormulaProperty@SpreadsheetItemPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_FormulaProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SpreadsheetItemPatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SpreadsheetItemPatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SpreadsheetItemPatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpreadsheetItemPatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~SpreadsheetItemPatternIdentifiers();
};
} // namespace DirectUI
