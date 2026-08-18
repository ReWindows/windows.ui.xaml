#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 41 member(s).
namespace DirectUI {
class DatePickerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateChangedEventSourceNoRef@DatePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVDatePickerValueChangedEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIDatePickerValueChangedEventArgs@Controls@Xaml@UI@3@@2@@Z
    long GetDateChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedDateChangedEventSourceNoRef@DatePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVDatePicker@Controls@Xaml@UI@Windows@@PEAVDatePickerSelectedValueChangedEventArgs@2345@@Foundation@Windows@@UIDatePicker@Controls@Xaml@UI@3@UIDatePickerSelectedValueChangedEventArgs@5673@@2@@Z
    long GetSelectedDateChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DatePickerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DateChanged@DatePickerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVDatePickerValueChangedEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SelectedDateChanged@DatePickerGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVDatePicker@Controls@Xaml@UI@Windows@@PEAVDatePickerSelectedValueChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_SelectedDateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalendarIdentifier@DatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CalendarIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Date@DatePickerGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_Date(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayFormat@DatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DayFormat(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DayVisible@DatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_DayVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@DatePickerGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@DatePickerGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightDismissOverlayMode@DatePickerGenerated@DirectUI@@UEAAJPEAW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LightDismissOverlayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxYear@DatePickerGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_MaxYear(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinYear@DatePickerGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_MinYear(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonthFormat@DatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MonthFormat(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonthVisible@DatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_MonthVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@DatePickerGenerated@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_YearFormat@DatePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_YearFormat(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_YearVisible@DatePickerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_YearVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalendarIdentifier@DatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CalendarIdentifier(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Date@DatePickerGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_Date(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayFormat@DatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DayFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DayVisible@DatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_DayVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@DatePickerGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@DatePickerGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightDismissOverlayMode@DatePickerGenerated@DirectUI@@UEAAJW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_LightDismissOverlayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxYear@DatePickerGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_MaxYear(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinYear@DatePickerGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_MinYear(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MonthFormat@DatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_MonthFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MonthVisible@DatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_MonthVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@DatePickerGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_YearFormat@DatePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_YearFormat(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_YearVisible@DatePickerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_YearVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DateChanged@DatePickerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SelectedDateChanged@DatePickerGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_SelectedDateChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DatePickerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@DatePickerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@DatePickerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DatePickerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DatePickerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DatePickerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
