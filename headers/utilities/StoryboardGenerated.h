#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class StoryboardGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@StoryboardGenerated@DirectUI@@UEAAJXZ
    virtual long Begin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@StoryboardGenerated@DirectUI@@UEAAJPEAW4ClockState@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long GetCurrentState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTime@StoryboardGenerated@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long GetCurrentTime(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@StoryboardGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@StoryboardGenerated@DirectUI@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@StoryboardGenerated@DirectUI@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@StoryboardGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long Seek(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekAlignedToLastTick@StoryboardGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long SeekAlignedToLastTick(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipToFill@StoryboardGenerated@DirectUI@@UEAAJXZ
    virtual long SkipToFill();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@StoryboardGenerated@DirectUI@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@StoryboardGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTimeline@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@StoryboardGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@StoryboardGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@StoryboardGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StoryboardGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
