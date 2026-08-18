#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class CalendarViewDayItemChangingEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUpdateCallback@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewDayItemChangingEventArgs@2345@@Foundation@Windows@@@Z
    virtual long RegisterUpdateCallback(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUpdateCallbackWithPhase@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@UEAAJIPEAU?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewDayItemChangingEventArgs@2345@@Foundation@Windows@@@Z
    virtual long RegisterUpdateCallbackWithPhase(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLifetime@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJXZ
    long ResetLifetime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Callback@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJPEAPEAU?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewDayItemChangingEventArgs@2345@@Foundation@Windows@@@Z
    long get_Callback(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InRecycleQueue@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_InRecycleQueue(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUICalendarViewDayItem@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Item(::Windows::UI::Xaml::Controls::ICalendarViewDayItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Phase@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@UEAAJPEAI@Z
    virtual long get_Phase(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WantsCallBack@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJPEAE@Z
    long get_WantsCallBack(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Callback@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewDayItemChangingEventArgs@2345@@Foundation@Windows@@@Z
    long put_Callback(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InRecycleQueue@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJE@Z
    long put_InRecycleQueue(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Item@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJPEAUICalendarViewDayItem@Controls@Xaml@UI@Windows@@@Z
    long put_Item(::Windows::UI::Xaml::Controls::ICalendarViewDayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Phase@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJI@Z
    long put_Phase(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WantsCallBack@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@QEAAJE@Z
    long put_WantsCallBack(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~CalendarViewDayItemChangingEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewDayItemChangingEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
