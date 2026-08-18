#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 40 member(s).
namespace DirectUI {
class TimePicker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TimePicker@DirectUI@@QEAA@XZ
    TimePicker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimePicker@DirectUI@@UEAA@XZ
    virtual ~TimePicker();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@TimePicker@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@TimePicker@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TimePicker@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TimePicker@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@TimePicker@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TimePicker@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@TimePicker@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@TimePicker@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndCoerceTime@TimePicker@DirectUI@@AEAAJUTimeSpan@Foundation@Windows@@PEAU345@@Z
    long CheckAndCoerceTime(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelectors@TimePicker@DirectUI@@AEAAJXZ
    long ClearSelectors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewCalendar@TimePicker@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUICalendar@Globalization@Windows@@@Z
    long CreateNewCalendar(HSTRING__*, ::Windows::Globalization::ICalendar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFormatterWithCalendar@TimePicker@DirectUI@@AEAAJPEAUHSTRING__@@0PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long CreateNewFormatterWithCalendar(HSTRING__*, HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFormatterWithClock@TimePicker@DirectUI@@AEAAJPEAUHSTRING__@@0PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long CreateNewFormatterWithClock(HSTRING__*, HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateHours@TimePicker@DirectUI@@AEAAJXZ
    long GenerateHours();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateMinutes@TimePicker@DirectUI@@AEAAJXZ
    long GenerateMinutes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePeriods@TimePicker@DirectUI@@AEAAJXZ
    long GeneratePeriods();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedMinuteIncrement@TimePicker@DirectUI@@AEAAJPEAH@Z
    long GetAdjustedMinuteIncrement(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTime@TimePicker@DirectUI@@AEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    long GetCurrentTime(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateTimeFromTimeSpan@TimePicker@DirectUI@@AEAAJUTimeSpan@Foundation@Windows@@PEAUDateTime@45@@Z
    long GetDateTimeFromTimeSpan(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrder@TimePicker@DirectUI@@AEAAJPEAH00PEAE@Z
    long GetOrder(int *, int *, int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedTimeAsString@TimePicker@DirectUI@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetSelectedTimeAsString(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedTimeOrCurrentTimeIfNull@TimePicker@DirectUI@@AEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    long GetSelectedTimeOrCurrentTimeIfNull(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeFormatter@TimePicker@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long GetTimeFormatter(HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeSpanFromDateTime@TimePicker@DirectUI@@AEAAJUDateTime@Foundation@Windows@@PEAUTimeSpan@45@@Z
    long GetTimeSpanFromDateTime(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutButtonClick@TimePicker@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnFlyoutButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetTimePickerSelectionAsyncCompleted@TimePicker@DirectUI@@AEAAJPEAU?$IAsyncOperation@PEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnGetTimePickerSelectionAsyncCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinuteIncrementChanged@TimePicker@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnMinuteIncrementChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectorSelectionChanged@TimePicker@DirectUI@@AEAAJPEAUIInspectable@@PEAUISelectionChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnSelectorSelectionChanged(IInspectable *, ::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimeChanged@TimePicker@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnTimeChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFlyoutButtonAutomationName@TimePicker@DirectUI@@AEAAJXZ
    long RefreshFlyoutButtonAutomationName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSetup@TimePicker@DirectUI@@AEAAJXZ
    long RefreshSetup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSentinelDate@TimePicker@DirectUI@@AEAAJPEAUICalendar@Globalization@Windows@@@Z
    long SetSentinelDate(::Windows::Globalization::ICalendar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPickerFlyout@TimePicker@DirectUI@@AEAAJXZ
    long ShowPickerFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplay@TimePicker@DirectUI@@AEAAJXZ
    long UpdateDisplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlyoutButtonContent@TimePicker@DirectUI@@AEAAJXZ
    long UpdateFlyoutButtonContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@TimePicker@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrderAndLayout@TimePicker@DirectUI@@AEAAJXZ
    long UpdateOrderAndLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTime@TimePicker@DirectUI@@AEAAJXZ
    long UpdateTime();
};
} // namespace DirectUI
