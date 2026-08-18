#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 55 member(s).
namespace DirectUI {
class CalendarDatePickerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalendarViewDayItemChangingEventSourceNoRef@CalendarDatePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UICalendarViewDayItemChangingEventHandler@Controls@Xaml@UI@Windows@@UICalendarView@2345@UICalendarViewDayItemChangingEventArgs@2345@@2@@Z
    long GetCalendarViewDayItemChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosedEventSourceNoRef@CalendarDatePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetClosedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateChangedEventSourceNoRef@CalendarDatePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVCalendarDatePicker@Controls@Xaml@UI@Windows@@PEAVCalendarDatePickerDateChangedEventArgs@2345@@Foundation@Windows@@UICalendarDatePicker@Controls@Xaml@UI@3@UICalendarDatePickerDateChangedEventArgs@5673@@2@@Z
    long GetDateChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenedEventSourceNoRef@CalendarDatePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarDatePickerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayDate@CalendarDatePickerGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long SetDisplayDate(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYearDecadeDisplayDimensions@CalendarDatePickerGenerated@DirectUI@@UEAAJHH@Z
    virtual long SetYearDecadeDisplayDimensions(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CalendarViewDayItemChanging@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUICalendarViewDayItemChangingEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CalendarViewDayItemChanging(::Windows::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DateChanged@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCalendarDatePicker@Controls@Xaml@UI@Windows@@PEAVCalendarDatePickerDateChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Opened@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Opened(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarIdentifier@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CalendarIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarViewStyle@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_CalendarViewStyle(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Date@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_Date(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DateFormat@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DateFormat(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayOfWeekFormat@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DayOfWeekFormat(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayMode@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_DisplayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayOfWeek@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAW4DayOfWeek@Globalization@Windows@@@Z
    virtual long get_FirstDayOfWeek(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCalendarOpen@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCalendarOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGroupLabelVisible@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsGroupLabelVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOutOfScopeEnabled@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsOutOfScopeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTodayHighlighted@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTodayHighlighted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightDismissOverlayMode@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LightDismissOverlayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxDate@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_MaxDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinDate@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_MinDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderText@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PlaceholderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarIdentifier@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CalendarIdentifier(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarViewStyle@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_CalendarViewStyle(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Date@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_Date(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DateFormat@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DateFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayOfWeekFormat@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DayOfWeekFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayMode@CalendarDatePickerGenerated@DirectUI@@UEAAJW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_DisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstDayOfWeek@CalendarDatePickerGenerated@DirectUI@@UEAAJW4DayOfWeek@Globalization@Windows@@@Z
    virtual long put_FirstDayOfWeek(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCalendarOpen@CalendarDatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsCalendarOpen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGroupLabelVisible@CalendarDatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsGroupLabelVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOutOfScopeEnabled@CalendarDatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsOutOfScopeEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTodayHighlighted@CalendarDatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTodayHighlighted(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightDismissOverlayMode@CalendarDatePickerGenerated@DirectUI@@UEAAJW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_LightDismissOverlayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxDate@CalendarDatePickerGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_MaxDate(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinDate@CalendarDatePickerGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_MinDate(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaceholderText@CalendarDatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PlaceholderText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CalendarViewDayItemChanging@CalendarDatePickerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CalendarViewDayItemChanging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@CalendarDatePickerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DateChanged@CalendarDatePickerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Opened@CalendarDatePickerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Opened(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarDatePickerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@CalendarDatePickerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@CalendarDatePickerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarDatePickerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarDatePickerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarDatePickerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
