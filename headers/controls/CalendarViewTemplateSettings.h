#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class CalendarViewTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarViewTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterX@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterY@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClipRect@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ClipRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreContentAfter@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreContentAfter(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreContentBefore@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreContentBefore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreViews@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreViews(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderText@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HeaderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinViewWidth@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinViewWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay1@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay1(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay2@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay2(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay3@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay3(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay4@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay4(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay5@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay5(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay6@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay6(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WeekDay7@CalendarViewTemplateSettings@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WeekDay7(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ClipRect@CalendarViewTemplateSettings@DirectUI@@QEAAJURect@Foundation@Windows@@@Z
    long put_ClipRect(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarViewTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
