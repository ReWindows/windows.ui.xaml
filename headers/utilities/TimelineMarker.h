#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class TimelineMarker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TimelineMarker@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@TimelineMarker@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Time@TimelineMarker@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Time(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@TimelineMarker@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Text@TimelineMarker@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Text(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Time@TimelineMarker@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Time(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@TimelineMarker@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Type(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimelineMarker@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimelineMarker@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TimelineMarker@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimelineMarker@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
