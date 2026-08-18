#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class TablePatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnHeadersProperty@TablePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ColumnHeadersProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowHeadersProperty@TablePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_RowHeadersProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowOrColumnMajorProperty@TablePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_RowOrColumnMajorProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TablePatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TablePatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TablePatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TablePatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~TablePatternIdentifiers();
};
} // namespace DirectUI
