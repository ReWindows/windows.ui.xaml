#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 115 member(s).
namespace DirectUI {
class CalendarViewGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalendarViewDayItemChangingEventSourceNoRef@CalendarViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewDayItemChangingEventArgs@2345@@Foundation@Windows@@UICalendarView@Controls@Xaml@UI@3@UICalendarViewDayItemChangingEventArgs@5673@@2@@Z
    long GetCalendarViewDayItemChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedDatesChangedEventSourceNoRef@CalendarViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewSelectedDatesChangedEventArgs@2345@@Foundation@Windows@@UICalendarView@Controls@Xaml@UI@3@UICalendarViewSelectedDatesChangedEventArgs@5673@@2@@Z
    long GetSelectedDatesChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarViewGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayDate@CalendarViewGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long SetDisplayDate(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYearDecadeDisplayDimensions@CalendarViewGenerated@DirectUI@@UEAAJHH@Z
    virtual long SetYearDecadeDisplayDimensions(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CalendarViewDayItemChanging@CalendarViewGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewDayItemChangingEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CalendarViewDayItemChanging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SelectedDatesChanged@CalendarViewGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCalendarView@Controls@Xaml@UI@Windows@@PEAVCalendarViewSelectedDatesChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SelectedDatesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlackoutForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_BlackoutForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarIdentifier@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CalendarIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarItemBackground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_CalendarItemBackground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarItemBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_CalendarItemBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarItemBorderThickness@CalendarViewGenerated@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_CalendarItemBorderThickness(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarItemForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_CalendarItemForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarViewDayItemStyle@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_CalendarViewDayItemStyle(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayItemFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_DayItemFontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayItemFontSize@CalendarViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_DayItemFontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayItemFontStyle@CalendarViewGenerated@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_DayItemFontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayItemFontWeight@CalendarViewGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_DayItemFontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayOfWeekFormat@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DayOfWeekFormat(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayMode@CalendarViewGenerated@DirectUI@@UEAAJPEAW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_DisplayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstDayOfWeek@CalendarViewGenerated@DirectUI@@UEAAJPEAW4DayOfWeek@Globalization@Windows@@@Z
    virtual long get_FirstDayOfWeek(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfMonthLabelFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_FirstOfMonthLabelFontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfMonthLabelFontSize@CalendarViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FirstOfMonthLabelFontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfMonthLabelFontStyle@CalendarViewGenerated@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_FirstOfMonthLabelFontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfMonthLabelFontWeight@CalendarViewGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_FirstOfMonthLabelFontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfYearDecadeLabelFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_FirstOfYearDecadeLabelFontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfYearDecadeLabelFontSize@CalendarViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FirstOfYearDecadeLabelFontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfYearDecadeLabelFontStyle@CalendarViewGenerated@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_FirstOfYearDecadeLabelFontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstOfYearDecadeLabelFontWeight@CalendarViewGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_FirstOfYearDecadeLabelFontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FocusBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_FocusBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalDayItemAlignment@CalendarViewGenerated@DirectUI@@UEAAJPEAW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalDayItemAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalFirstOfMonthLabelAlignment@CalendarViewGenerated@DirectUI@@UEAAJPEAW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalFirstOfMonthLabelAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoverBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_HoverBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGroupLabelVisible@CalendarViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsGroupLabelVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOutOfScopeEnabled@CalendarViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsOutOfScopeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTodayHighlighted@CalendarViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTodayHighlighted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxDate@CalendarViewGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_MaxDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinDate@CalendarViewGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_MinDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonthYearItemFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_MonthYearItemFontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonthYearItemFontSize@CalendarViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MonthYearItemFontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonthYearItemFontStyle@CalendarViewGenerated@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_MonthYearItemFontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonthYearItemFontWeight@CalendarViewGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_MonthYearItemFontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfWeeksInView@CalendarViewGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_NumberOfWeeksInView(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OutOfScopeBackground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_OutOfScopeBackground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OutOfScopeForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_OutOfScopeForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PressedBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_PressedBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PressedForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_PressedForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectedBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedDates@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@UDateTime@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SelectedDates(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectedForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedHoverBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectedHoverBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedPressedBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectedPressedBorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionMode@CalendarViewGenerated@DirectUI@@UEAAJPEAW4CalendarViewSelectionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SelectionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUICalendarViewTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TodayFontWeight@CalendarViewGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_TodayFontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TodayForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_TodayForeground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalDayItemAlignment@CalendarViewGenerated@DirectUI@@UEAAJPEAW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_VerticalDayItemAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalFirstOfMonthLabelAlignment@CalendarViewGenerated@DirectUI@@UEAAJPEAW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_VerticalFirstOfMonthLabelAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlackoutForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_BlackoutForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarIdentifier@CalendarViewGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CalendarIdentifier(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarItemBackground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_CalendarItemBackground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarItemBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_CalendarItemBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarItemBorderThickness@CalendarViewGenerated@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_CalendarItemBorderThickness(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarItemForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_CalendarItemForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarViewDayItemStyle@CalendarViewGenerated@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_CalendarViewDayItemStyle(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayItemFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_DayItemFontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayItemFontSize@CalendarViewGenerated@DirectUI@@UEAAJN@Z
    virtual long put_DayItemFontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayItemFontStyle@CalendarViewGenerated@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_DayItemFontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayItemFontWeight@CalendarViewGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_DayItemFontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayOfWeekFormat@CalendarViewGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DayOfWeekFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayMode@CalendarViewGenerated@DirectUI@@UEAAJW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_DisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstDayOfWeek@CalendarViewGenerated@DirectUI@@UEAAJW4DayOfWeek@Globalization@Windows@@@Z
    virtual long put_FirstDayOfWeek(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfMonthLabelFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_FirstOfMonthLabelFontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfMonthLabelFontSize@CalendarViewGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FirstOfMonthLabelFontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfMonthLabelFontStyle@CalendarViewGenerated@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_FirstOfMonthLabelFontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfMonthLabelFontWeight@CalendarViewGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_FirstOfMonthLabelFontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfYearDecadeLabelFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_FirstOfYearDecadeLabelFontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfYearDecadeLabelFontSize@CalendarViewGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FirstOfYearDecadeLabelFontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfYearDecadeLabelFontStyle@CalendarViewGenerated@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_FirstOfYearDecadeLabelFontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstOfYearDecadeLabelFontWeight@CalendarViewGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_FirstOfYearDecadeLabelFontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FocusBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_FocusBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalDayItemAlignment@CalendarViewGenerated@DirectUI@@UEAAJW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalDayItemAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalFirstOfMonthLabelAlignment@CalendarViewGenerated@DirectUI@@UEAAJW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalFirstOfMonthLabelAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoverBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_HoverBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGroupLabelVisible@CalendarViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsGroupLabelVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOutOfScopeEnabled@CalendarViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsOutOfScopeEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTodayHighlighted@CalendarViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTodayHighlighted(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxDate@CalendarViewGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_MaxDate(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinDate@CalendarViewGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_MinDate(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MonthYearItemFontFamily@CalendarViewGenerated@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_MonthYearItemFontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MonthYearItemFontSize@CalendarViewGenerated@DirectUI@@UEAAJN@Z
    virtual long put_MonthYearItemFontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MonthYearItemFontStyle@CalendarViewGenerated@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_MonthYearItemFontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MonthYearItemFontWeight@CalendarViewGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_MonthYearItemFontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NumberOfWeeksInView@CalendarViewGenerated@DirectUI@@UEAAJH@Z
    virtual long put_NumberOfWeeksInView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OutOfScopeBackground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_OutOfScopeBackground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OutOfScopeForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_OutOfScopeForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PressedBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_PressedBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PressedForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_PressedForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectedBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectedForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedHoverBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectedHoverBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedPressedBorderBrush@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectedPressedBorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionMode@CalendarViewGenerated@DirectUI@@UEAAJW4CalendarViewSelectionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SelectionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TodayFontWeight@CalendarViewGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_TodayFontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TodayForeground@CalendarViewGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_TodayForeground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalDayItemAlignment@CalendarViewGenerated@DirectUI@@UEAAJW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_VerticalDayItemAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalFirstOfMonthLabelAlignment@CalendarViewGenerated@DirectUI@@UEAAJW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_VerticalFirstOfMonthLabelAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CalendarViewDayItemChanging@CalendarViewGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CalendarViewDayItemChanging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SelectedDatesChanged@CalendarViewGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SelectedDatesChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@CalendarViewGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@CalendarViewGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarViewGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
