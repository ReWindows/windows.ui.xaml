#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class DispatcherTimerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTickEventSourceNoRef@DispatcherTimerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetTickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DispatcherTimerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@DispatcherTimerGenerated@DirectUI@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DispatcherTimerGenerated@DirectUI@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Tick@DispatcherTimerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Tick(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Interval@DispatcherTimerGenerated@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Interval(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@DispatcherTimerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Interval@DispatcherTimerGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Interval(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Tick@DispatcherTimerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Tick(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DispatcherTimerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DispatcherTimerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DispatcherTimerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DispatcherTimerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
