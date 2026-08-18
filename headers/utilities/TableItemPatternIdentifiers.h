#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TableItemPatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnHeaderItemsProperty@TableItemPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ColumnHeaderItemsProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowHeaderItemsProperty@TableItemPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_RowHeaderItemsProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TableItemPatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TableItemPatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TableItemPatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TableItemPatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~TableItemPatternIdentifiers();
};
} // namespace DirectUI
