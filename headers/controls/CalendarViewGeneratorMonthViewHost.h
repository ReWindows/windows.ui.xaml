#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 41 member(s).
namespace DirectUI {
class CalendarViewGeneratorMonthViewHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScopes@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJH@Z
    virtual long AddScopes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnits@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJH@Z
    virtual long AddUnits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTree@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAE@Z
    virtual long BuildTree(unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarViewGeneratorMonthViewHost@DirectUI@@QEAA@XZ
    CalendarViewGeneratorMonthViewHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItem@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItem(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareDate@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJUDateTime@Foundation@Windows@@0PEAH@Z
    virtual long CompareDate(WindissectOpaque, WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageTicksPerUnit@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAA_JXZ
    virtual int64_t GetAverageTicksPerUnit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAVCalendarViewBaseItem@2@@Z
    virtual long GetContainer(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::DirectUI::CalendarViewBaseItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstUnitInThisScope@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetFirstUnitInThisScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsFirstItemInScope@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJHPEA_N@Z
    virtual long GetIsFirstItemInScope(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUnitInThisScope@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetLastUnitInThisScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTimeBias@CalendarViewGeneratorMonthViewHost@DirectUI@@QEAAJ_N@Z
    long GetLocalTimeBias(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumScopeSize@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAHXZ
    virtual int GetMaximumScopeSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnit@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAH@Z
    virtual long GetUnit(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBuildTreeSuspended@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAE@Z
    virtual long IsBuildTreeSuspended(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingSamoaTimeZone@CalendarViewGeneratorMonthViewHost@DirectUI@@QEAA_N_N@Z
    bool IsUsingSamoaTimeZone(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScopeChanged@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJXZ
    virtual long OnScopeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContainerContentChangingOnRecycle@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long RaiseContainerContentChangingOnRecycle(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkForContainer@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkForContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkFromArgs@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkFromArgs(::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnit@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJH@Z
    virtual long SetUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupContainerContentChangingAfterPrepare@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@HUSize@Foundation@6@@Z
    virtual long SetupContainerContentChangingAfterPrepare(::Windows::UI::Xaml::IDependencyObject *, IInspectable *, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownDeferredWork@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJXZ
    virtual long ShutDownDeferredWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLabel@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAVCalendarViewBaseItem@2@_N@Z
    virtual long UpdateLabel(::DirectUI::CalendarViewBaseItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForCallbacks@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForCallbacks(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRegisteredForCallbacks@CalendarViewGeneratorMonthViewHost@DirectUI@@UEAAJE@Z
    virtual long put_IsRegisteredForCallbacks(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarViewGeneratorMonthViewHost@DirectUI@@UEAA@XZ
    virtual ~CalendarViewGeneratorMonthViewHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewGeneratorMonthViewHost@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewGeneratorMonthViewHost@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewGeneratorMonthViewHost@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainers@CalendarViewGeneratorMonthViewHost@DirectUI@@AEAAJAEBV?$ComPtr@VBudgetManager@DirectUI@@@ctl@@@Z
    long ClearContainers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureToBeClearedContainers@CalendarViewGeneratorMonthViewHost@DirectUI@@AEAAJXZ
    long EnsureToBeClearedContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessIncrementalVisualization@CalendarViewGeneratorMonthViewHost@DirectUI@@AEAAJAEBV?$ComPtr@VBudgetManager@DirectUI@@@ctl@@PEAVCalendarPanel@2@@Z
    long ProcessIncrementalVisualization(WindissectOpaque const &, ::DirectUI::CalendarPanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkFromCICArgs@CalendarViewGeneratorMonthViewHost@DirectUI@@EEAAJPEAUICalendarViewDayItemChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkFromCICArgs(::Windows::UI::Xaml::Controls::ICalendarViewDayItemChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToBeClearedContainer@CalendarViewGeneratorMonthViewHost@DirectUI@@AEAAJPEAVCalendarViewDayItem@2@@Z
    long RemoveToBeClearedContainer(::DirectUI::CalendarViewDayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimeZoneInfo@CalendarViewGeneratorMonthViewHost@DirectUI@@AEAAXXZ
    void UpdateTimeZoneInfo();
};
} // namespace DirectUI
