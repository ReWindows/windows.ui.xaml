#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class RangeValuePatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnlyProperty@RangeValuePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_IsReadOnlyProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChangeProperty@RangeValuePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_LargeChangeProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaximumProperty@RangeValuePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_MaximumProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinimumProperty@RangeValuePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_MinimumProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChangeProperty@RangeValuePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_SmallChangeProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueProperty@RangeValuePatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ValueProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RangeValuePatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RangeValuePatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RangeValuePatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RangeValuePatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~RangeValuePatternIdentifiers();
};
} // namespace DirectUI
