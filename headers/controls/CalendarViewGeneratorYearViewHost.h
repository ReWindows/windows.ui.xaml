#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class CalendarViewGeneratorYearViewHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScopes@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJH@Z
    virtual long AddScopes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnits@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJH@Z
    virtual long AddUnits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareDate@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJUDateTime@Foundation@Windows@@0PEAH@Z
    virtual long CompareDate(WindissectOpaque, WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageTicksPerUnit@CalendarViewGeneratorYearViewHost@DirectUI@@UEAA_JXZ
    virtual int64_t GetAverageTicksPerUnit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstUnitInThisScope@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetFirstUnitInThisScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsFirstItemInScope@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJHPEA_N@Z
    virtual long GetIsFirstItemInScope(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUnitInThisScope@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetLastUnitInThisScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumScopeSize@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAHXZ
    virtual int GetMaximumScopeSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnit@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetUnit(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScopeChanged@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJXZ
    virtual long OnScopeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnit@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJH@Z
    virtual long SetUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLabel@CalendarViewGeneratorYearViewHost@DirectUI@@UEAAJPEAVCalendarViewBaseItem@2@_N@Z
    virtual long UpdateLabel(::DirectUI::CalendarViewBaseItem *, bool);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@CalendarViewGeneratorYearViewHost@DirectUI@@MEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAVCalendarViewBaseItem@2@@Z
    virtual long GetContainer(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::DirectUI::CalendarViewBaseItem * *);
};
} // namespace DirectUI
