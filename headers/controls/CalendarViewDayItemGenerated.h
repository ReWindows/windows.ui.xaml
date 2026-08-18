#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class CalendarViewDayItemGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarViewDayItemGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDensityColors@CalendarViewDayItemGenerated@DirectUI@@UEAAJPEAU?$IIterable@UColor@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long SetDensityColors(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Date@CalendarViewDayItemGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_Date(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBlackout@CalendarViewDayItemGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsBlackout(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Date@CalendarViewDayItemGenerated@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long put_Date(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsBlackout@CalendarViewDayItemGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsBlackout(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewDayItemGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewDayItemGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarViewDayItemGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewDayItemGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
