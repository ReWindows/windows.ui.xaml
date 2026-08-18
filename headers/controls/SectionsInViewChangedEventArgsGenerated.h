#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SectionsInViewChangedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddedSections@SectionsInViewChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVHubSection@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_AddedSections(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedSections@SectionsInViewChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVHubSection@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_RemovedSections(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SectionsInViewChangedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SectionsInViewChangedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SectionsInViewChangedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SectionsInViewChangedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
