#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 82 member(s).
namespace DirectUI {
class CalendarView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPanelShowFullScope@CalendarView@DirectUI@@SAJPEAVCalendarViewGeneratorHost@2@PEA_N@Z
    static long CanPanelShowFullScope(CalendarViewGeneratorHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceDate@CalendarView@DirectUI@@QEAAXAEAUDateTime@Foundation@Windows@@@Z
    void CoerceDate(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCalendarLanguagesStatic@CalendarView@DirectUI@@SAJ$$QEAVString@Internal@Windows@@PEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    static long CreateCalendarLanguagesStatic(::Windows::Internal::String &&, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerByDate@CalendarView@DirectUI@@QEAAJUDateTime@Foundation@Windows@@PEAPEAVCalendarViewDayItem@2@@Z
    long GetContainerByDate(WindissectOpaque, CalendarViewDayItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@CalendarView@DirectUI@@QEAAJUDateTime@Foundation@Windows@@PEA_N@Z
    long IsSelected(WindissectOpaque, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDayItemBlackoutChanged@CalendarView@DirectUI@@QEAAJPEAVCalendarViewDayItem@2@_N@Z
    long OnDayItemBlackoutChanged(CalendarViewDayItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemFocused@CalendarView@DirectUI@@QEAAJPEAVCalendarViewBaseItem@2@@Z
    long OnItemFocused(CalendarViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectDayItem@CalendarView@DirectUI@@QEAAJPEAVCalendarViewDayItem@2@@Z
    long OnSelectDayItem(CalendarViewDayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectMonthYearItem@CalendarView@DirectUI@@QEAAJPEAVCalendarViewItem@2@W4FocusState@Xaml@UI@Windows@@@Z
    long OnSelectMonthYearItem(CalendarViewItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedDatesChanging@CalendarView@DirectUI@@QEAAJW4TrackableDateCollection_CollectionChanging@2@UDateTime@Foundation@Windows@@@Z
    long OnSelectedDatesChanging(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionModeChanged@CalendarView@DirectUI@@QEAAJXZ
    long OnSelectionModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangedEventIfChanged@CalendarView@DirectUI@@QEAAJXZ
    long RaiseSelectionChangedEventIfChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDayItemStyle@CalendarView@DirectUI@@SAJPEAVCalendarViewBaseItem@2@PEAUIStyle@Xaml@UI@Windows@@@Z
    static long SetDayItemStyle(CalendarViewBaseItem *, ::Windows::UI::Xaml::IStyle *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyDownEventArgsFromCalendarItem@CalendarView@DirectUI@@QEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long SetKeyDownEventArgsFromCalendarItem(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetYearDecadeDisplayDimensionsImpl@CalendarView@DirectUI@@QEAAJHH@Z
    long SetYearDecadeDisplayDimensionsImpl(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftSelectedDates@CalendarView@DirectUI@@QEAAJ_J@Z
    long ShiftSelectedDates(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSelectingDateIsNotBlackout@CalendarView@DirectUI@@QEAAJUDateTime@Foundation@Windows@@@Z
    long ValidateSelectingDateIsNotBlackout(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CalendarView@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarView@DirectUI@@IEAA@XZ
    CalendarView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@CalendarView@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@CalendarView@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderForItemAutomationPeer@CalendarView@DirectUI@@IEAAJUDateTime@Foundation@Windows@@W4CalendarViewDisplayMode@Controls@Xaml@UI@5@PEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@895@@Z
    long GetRowHeaderForItemAutomationPeer(WindissectOpaque, int, unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CalendarView@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CalendarView@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CalendarView@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CalendarView@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CalendarView@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CalendarView@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@CalendarView@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopOverride@CalendarView@DirectUI@@MEAAJPEAVDependencyObject@2@00_NPEAPEAV32@PEAE@Z
    virtual long ProcessCandidateTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarView@DirectUI@@MEAA@XZ
    virtual ~CalendarView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachButtonClickedEvents@CalendarView@DirectUI@@AEAAJXZ
    long AttachButtonClickedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachScrollViewerKeyDownEvents@CalendarView@DirectUI@@AEAAJXZ
    long AttachScrollViewerKeyDownEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachSystemTimeChangedEvent@CalendarView@DirectUI@@CAJXZ
    static long AttachSystemTimeChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringDisplayDateIntoView@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@@Z
    long BringDisplayDateIntoView(CalendarViewGeneratorHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDate@CalendarView@DirectUI@@AEAAJW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@UDateTime@Foundation@7@AEAU897@@Z
    long CopyDate(int, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCalendarAndMonthYearFormatter@CalendarView@DirectUI@@AEAAJXZ
    long CreateCalendarAndMonthYearFormatter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCalendarLanguages@CalendarView@DirectUI@@AEAAJXZ
    long CreateCalendarLanguages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTimeFormatter@CalendarView@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long CreateDateTimeFormatter(HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachButtonClickedEvents@CalendarView@DirectUI@@AEAAJXZ
    long DetachButtonClickedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachScrollViewerKeyDownEvents@CalendarView@DirectUI@@AEAAJXZ
    long DetachScrollViewerKeyDownEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectItemHosts@CalendarView@DirectUI@@AEAAJXZ
    long DisconnectItemHosts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusItem@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@UDateTime@Foundation@Windows@@HW4FocusState@Xaml@UI@6@PEA_N@Z
    long FocusItem(CalendarViewGeneratorHost *, WindissectOpaque, int, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusItemByDate@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@UDateTime@Foundation@Windows@@W4FocusState@Xaml@UI@6@PEA_N@Z
    long FocusItemByDate(CalendarViewGeneratorHost *, WindissectOpaque, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusItemByIndex@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@HW4FocusState@Xaml@UI@Windows@@PEA_N@Z
    long FocusItemByIndex(CalendarViewGeneratorHost *, int, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatMonthYearName@CalendarView@DirectUI@@AEAAJUDateTime@Foundation@Windows@@PEAPEAUHSTRING__@@@Z
    long FormatMonthYearName(WindissectOpaque, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatWeekDayNames@CalendarView@DirectUI@@AEAAJXZ
    long FormatWeekDayNames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatYearName@CalendarView@DirectUI@@AEAAJUDateTime@Foundation@Windows@@PEAPEAUHSTRING__@@@Z
    long FormatYearName(WindissectOpaque, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveGeneratorHost@CalendarView@DirectUI@@AEAAJPEAPEAVCalendarViewGeneratorHost@2@@Z
    long GetActiveGeneratorHost(CalendarViewGeneratorHost * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneratorHost@CalendarView@DirectUI@@AEAAJW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@PEAPEAVCalendarViewGeneratorHost@2@@Z
    long GetGeneratorHost(int, CalendarViewGeneratorHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeIndexCorrectionTableIfNeeded@CalendarView@DirectUI@@AEAAJXZ
    long InitializeIndexCorrectionTableIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlignmentChanged@CalendarView@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnAlignmentChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeChanged@CalendarView@DirectUI@@AEAAJW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@0@Z
    long OnDisplayModeChanged(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsLabelVisibleChanged@CalendarView@DirectUI@@AEAAJXZ
    long OnIsLabelVisibleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsOutOfScopePropertyChanged@CalendarView@DirectUI@@AEAAJXZ
    long OnIsOutOfScopePropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardNavigation@CalendarView@DirectUI@@AEAAJW4VirtualKey@System@Windows@@0PEA_N@Z
    long OnKeyboardNavigation(int, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationButtonClicked@CalendarView@DirectUI@@AEAAJ_N@Z
    long OnNavigationButtonClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryPanelDesiredSizeChanged@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@@Z
    long OnPrimaryPanelDesiredSizeChanged(CalendarViewGeneratorHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerFocusEngaged@CalendarView@DirectUI@@AEAAJPEAUIFocusEngagedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewerFocusEngaged(::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemTimeChanged@CalendarView@DirectUI@@AEAAJXZ
    long OnSystemTimeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemTimeChangedStatic@CalendarView@DirectUI@@CAJVWeakRefPtr@ctl@@@Z
    static long OnSystemTimeChangedStatic(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemTimeChangedStatic@CalendarView@DirectUI@@CAJXZ
    static long OnSystemTimeChangedStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTodayTimerTick@CalendarView@DirectUI@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void OnTodayTimerTick(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleIndicesUpdated@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@@Z
    long OnVisibleIndicesUpdated(CalendarViewGeneratorHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationNotificationAfterNavigationButtonClicked@CalendarView@DirectUI@@AEAAJXZ
    long RaiseAutomationNotificationAfterNavigationButtonClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshItemHosts@CalendarView@DirectUI@@AEAAJXZ
    long RefreshItemHosts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCalendarView@CalendarView@DirectUI@@AEAAJXZ
    long RegisterCalendarView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterItemHosts@CalendarView@DirectUI@@AEAAJXZ
    long RegisterItemHosts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToDate@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@UDateTime@Foundation@Windows@@@Z
    long ScrollToDate(CalendarViewGeneratorHost *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToDateWithAnimation@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@UDateTime@Foundation@Windows@@@Z
    long ScrollToDateWithAnimation(CalendarViewGeneratorHost *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayDateInternal@CalendarView@DirectUI@@AEAAJUDateTime@Foundation@Windows@@@Z
    long SetDisplayDateInternal(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTodayTimer@CalendarView@DirectUI@@CAJXZ
    static long StartTodayTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateKeyToKeyNavigationAction@CalendarView@DirectUI@@AEAAJW4VirtualKey@System@Windows@@PEAW4KeyNavigationAction@Controls@Xaml@UI@5@PEA_N@Z
    long TranslateKeyToKeyNavigationAction(int, int *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCalendarView@CalendarView@DirectUI@@AEAAXXZ
    void UnregisterCalendarView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlowDirectionForView@CalendarView@DirectUI@@AEAAJXZ
    long UpdateFlowDirectionForView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderText@CalendarView@DirectUI@@AEAAJ_N@Z
    long UpdateHeaderText(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsScopeState@CalendarView@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@_N1@Z
    long UpdateItemsScopeState(CalendarViewGeneratorHost *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastDisplayedDate@CalendarView@DirectUI@@AEAAJW4CalendarViewDisplayMode@Controls@Xaml@UI@Windows@@@Z
    long UpdateLastDisplayedDate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationButtonStates@CalendarView@DirectUI@@AEAAJXZ
    long UpdateNavigationButtonStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTodayHighlight@CalendarView@DirectUI@@AEAAJUDateTime@Foundation@Windows@@_N@Z
    long UpdateTodayHighlight(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWeekDayNameAPName@CalendarView@DirectUI@@AEAAJPEAG_KAEBVString@Internal@Windows@@@Z
    long UpdateWeekDayNameAPName(unsigned short *, uint64_t, ::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWeekDayNames@CalendarView@DirectUI@@AEAAJXZ
    long UpdateWeekDayNames();
};
} // namespace DirectUI
