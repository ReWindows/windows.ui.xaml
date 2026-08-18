#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 41 member(s).
namespace DirectUI {
class DatePicker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DatePicker@DirectUI@@QEAA@XZ
    DatePicker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DatePicker@DirectUI@@UEAA@XZ
    virtual ~DatePicker();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@DatePicker@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@DatePicker@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@DatePicker@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@DatePicker@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@DatePicker@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@DatePicker@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@DatePicker@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@DatePicker@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampDate@DatePicker@DirectUI@@AEAA?AUDateTime@Foundation@Windows@@U345@00@Z
    WindissectOpaque ClampDate(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelectors@DatePicker@DirectUI@@AEAAJEEE@Z
    long ClearSelectors(unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewCalendar@DatePicker@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUICalendar@Globalization@Windows@@@Z
    long CreateNewCalendar(HSTRING__*, ::Windows::Globalization::ICalendar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewFormatter@DatePicker@DirectUI@@AEAAJPEAUHSTRING__@@0PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long CreateNewFormatter(HSTRING__*, HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDays@DatePicker@DirectUI@@AEAAJHH@Z
    long GenerateDays(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateMonths@DatePicker@DirectUI@@AEAAJH@Z
    long GenerateMonths(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateYears@DatePicker@DirectUI@@AEAAJXZ
    long GenerateYears();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateFormatter@DatePicker@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long GetDateFormatter(HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateFromIndices@DatePicker@DirectUI@@AEAAJHHHPEAUDateTime@Foundation@Windows@@@Z
    long GetDateFromIndices(int, int, int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDayFormatter@DatePicker@DirectUI@@AEAAJPEAUHSTRING__@@0PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long GetDayFormatter(HSTRING__*, HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndices@DatePicker@DirectUI@@AEAAJAEAH00@Z
    long GetIndices(int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonthFormatter@DatePicker@DirectUI@@AEAAJPEAUHSTRING__@@0PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long GetMonthFormatter(HSTRING__*, HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrder@DatePicker@DirectUI@@AEAAJPEAH00PEAE@Z
    long GetOrder(int *, int *, int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedDateAsString@DatePicker@DirectUI@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetSelectedDateAsString(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedDateOrTodaysDateIfNull@DatePicker@DirectUI@@AEAAJPEAUDateTime@Foundation@Windows@@@Z
    long GetSelectedDateOrTodaysDateIfNull(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTodaysDate@DatePicker@DirectUI@@AEAAJPEAUDateTime@Foundation@Windows@@@Z
    long GetTodaysDate(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYearDifference@DatePicker@DirectUI@@AEAAJPEAUICalendar@Globalization@Windows@@0AEAH@Z
    long GetYearDifference(::Windows::Globalization::ICalendar *, ::Windows::Globalization::ICalendar *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetYearFormatter@DatePicker@DirectUI@@AEAAJPEAUHSTRING__@@0PEAPEAUIDateTimeFormatter@DateTimeFormatting@Globalization@Windows@@@Z
    long GetYearFormatter(HSTRING__*, HSTRING__*, ::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDateChanged@DatePicker@DirectUI@@AEAAJUDateTime@Foundation@Windows@@0@Z
    long OnDateChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutButtonClick@DatePicker@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnFlyoutButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDatePickerSelectionAsyncCompleted@DatePicker@DirectUI@@AEAAJPEAU?$IAsyncOperation@PEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnGetDatePickerSelectionAsyncCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectorSelectionChanged@DatePicker@DirectUI@@AEAAJPEAUIInspectable@@PEAUISelectionChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnSelectorSelectionChanged(IInspectable *, ::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringTypePropertyChanged@DatePicker@DirectUI@@AEAAJW4KnownPropertyIndex@@PEAUIInspectable@@1@Z
    long OnStringTypePropertyChanged(int, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFlyoutButtonAutomationName@DatePicker@DirectUI@@AEAAJXZ
    long RefreshFlyoutButtonAutomationName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSetup@DatePicker@DirectUI@@AEAAJXZ
    long RefreshSetup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSources@DatePicker@DirectUI@@AEAAJEEE@Z
    long RefreshSources(unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPickerFlyout@DatePicker@DirectUI@@AEAAJXZ
    long ShowPickerFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlyoutButtonContent@DatePicker@DirectUI@@AEAAJXZ
    long UpdateFlyoutButtonContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@DatePicker@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrderAndLayout@DatePicker@DirectUI@@AEAAJXZ
    long UpdateOrderAndLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@DatePicker@DirectUI@@AEAAJXZ
    long UpdateState();
};
} // namespace DirectUI
