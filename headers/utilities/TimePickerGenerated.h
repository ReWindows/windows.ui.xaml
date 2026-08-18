#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class TimePickerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedTimeChangedEventSourceNoRef@TimePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVTimePicker@Controls@Xaml@UI@Windows@@PEAVTimePickerSelectedValueChangedEventArgs@2345@@Foundation@Windows@@UITimePicker@Controls@Xaml@UI@3@UITimePickerSelectedValueChangedEventArgs@5673@@2@@Z
    long GetSelectedTimeChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeChangedEventSourceNoRef@TimePickerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVTimePickerValueChangedEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UITimePickerValueChangedEventArgs@Controls@Xaml@UI@3@@2@@Z
    long GetTimeChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TimePickerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SelectedTimeChanged@TimePickerGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVTimePicker@Controls@Xaml@UI@Windows@@PEAVTimePickerSelectedValueChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_SelectedTimeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TimeChanged@TimePickerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVTimePickerValueChangedEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TimeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClockIdentifier@TimePickerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ClockIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@TimePickerGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@TimePickerGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightDismissOverlayMode@TimePickerGenerated@DirectUI@@UEAAJPEAW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LightDismissOverlayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinuteIncrement@TimePickerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_MinuteIncrement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Time@TimePickerGenerated@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Time(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ClockIdentifier@TimePickerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ClockIdentifier(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@TimePickerGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@TimePickerGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightDismissOverlayMode@TimePickerGenerated@DirectUI@@UEAAJW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_LightDismissOverlayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinuteIncrement@TimePickerGenerated@DirectUI@@UEAAJH@Z
    virtual long put_MinuteIncrement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Time@TimePickerGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Time(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SelectedTimeChanged@TimePickerGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_SelectedTimeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TimeChanged@TimePickerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TimeChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimePickerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@TimePickerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@TimePickerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimePickerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TimePickerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimePickerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
