#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class CalendarViewGeneratorDecadeViewHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScopes@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJH@Z
    virtual long AddScopes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnits@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJH@Z
    virtual long AddUnits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareDate@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJUDateTime@Foundation@Windows@@0PEAH@Z
    virtual long CompareDate(WindissectOpaque, WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageTicksPerUnit@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAA_JXZ
    virtual int64_t GetAverageTicksPerUnit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstUnitInThisScope@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetFirstUnitInThisScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsFirstItemInScope@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJHPEA_N@Z
    virtual long GetIsFirstItemInScope(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUnitInThisScope@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetLastUnitInThisScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumScopeSize@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAHXZ
    virtual int GetMaximumScopeSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnit@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetUnit(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScopeChanged@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJXZ
    virtual long OnScopeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnit@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJH@Z
    virtual long SetUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLabel@CalendarViewGeneratorDecadeViewHost@DirectUI@@UEAAJPEAVCalendarViewBaseItem@2@_N@Z
    virtual long UpdateLabel(::DirectUI::CalendarViewBaseItem *, bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@CalendarViewGeneratorDecadeViewHost@DirectUI@@EEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAVCalendarViewBaseItem@2@@Z
    virtual long GetContainer(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::DirectUI::CalendarViewBaseItem * *);
};
} // namespace DirectUI
