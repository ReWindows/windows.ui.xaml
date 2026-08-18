#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
namespace DirectUI {
class CalendarDatePicker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@CalendarDatePicker@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CalendarDatePicker@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CalendarDatePicker@DirectUI@@UEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CalendarDatePicker@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CalendarDatePicker@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CalendarDatePicker@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CalendarDatePicker@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CalendarDatePicker@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CalendarDatePicker@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CalendarDatePicker@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CalendarDatePicker@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@CalendarDatePicker@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarDatePicker@DirectUI@@UEAA@XZ
    virtual ~CalendarDatePicker();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarDatePicker@DirectUI@@IEAA@XZ
    CalendarDatePicker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@CalendarDatePicker@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CalendarDatePicker@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CalendarDatePicker@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CalendarDatePicker@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@CalendarDatePicker@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDate@CalendarDatePicker@DirectUI@@AEAAJXZ
    long FormatDate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChildOfTarget@CalendarDatePicker@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@_NPEA_N@Z
    long IsChildOfTarget(::Windows::UI::Xaml::IDependencyObject *, bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEventSourceTarget@CalendarDatePicker@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEA_N@Z
    long IsEventSourceTarget(::Windows::UI::Xaml::IRoutedEventArgs *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDateChanged@CalendarDatePicker@DirectUI@@AEAAJPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@0@Z
    long OnDateChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDateFormatChanged@CalendarDatePicker@DirectUI@@AEAAJXZ
    long OnDateFormatChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedDatesChanged@CalendarDatePicker@DirectUI@@AEAAJPEAUICalendarView@Controls@Xaml@UI@Windows@@PEAUICalendarViewSelectedDatesChangedEventArgs@4567@@Z
    long OnSelectedDatesChanged(::Windows::UI::Xaml::Controls::ICalendarView *, ::Windows::UI::Xaml::Controls::ICalendarViewSelectedDatesChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPointerUpAction@CalendarDatePicker@DirectUI@@AEAAJXZ
    long PerformPointerUpAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDateChanged@CalendarDatePicker@DirectUI@@AEAAJPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@0@Z
    long RaiseDateChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDate@CalendarDatePicker@DirectUI@@AEAAJXZ
    long SyncDate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCalendarVisibility@CalendarDatePicker@DirectUI@@AEAAJXZ
    long UpdateCalendarVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderVisibility@CalendarDatePicker@DirectUI@@AEAAJXZ
    long UpdateHeaderVisibility();
};
} // namespace DirectUI
