#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class TimelineGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompletedEventSourceNoRef@TimelineGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TimelineGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@TimelineGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoReverse@TimelineGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AutoReverse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BeginTime@TimelineGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_BeginTime(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@TimelineGenerated@DirectUI@@UEAAJPEAUDuration@Xaml@UI@Windows@@@Z
    virtual long get_Duration(::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillBehavior@TimelineGenerated@DirectUI@@UEAAJPEAW4FillBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_FillBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RepeatBehavior@TimelineGenerated@DirectUI@@UEAAJPEAURepeatBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_RepeatBehavior(::Windows::UI::Xaml::Media::Animation::RepeatBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpeedRatio@TimelineGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_SpeedRatio(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoReverse@TimelineGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AutoReverse(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BeginTime@TimelineGenerated@DirectUI@@UEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_BeginTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Duration@TimelineGenerated@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@@Z
    virtual long put_Duration(::Windows::UI::Xaml::Duration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FillBehavior@TimelineGenerated@DirectUI@@UEAAJW4FillBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_FillBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RepeatBehavior@TimelineGenerated@DirectUI@@UEAAJURepeatBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_RepeatBehavior(::Windows::UI::Xaml::Media::Animation::RepeatBehavior);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SpeedRatio@TimelineGenerated@DirectUI@@UEAAJN@Z
    virtual long put_SpeedRatio(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@TimelineGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimelineGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimelineGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TimelineGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimelineGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
