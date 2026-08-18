#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ThemeAnimationBaseGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimelinesInternalProtected@ThemeAnimationBaseGenerated@DirectUI@@QEAAJEPEAU?$IVector@PEAVTimeline@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long CreateTimelinesInternalProtected(unsigned char, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ThemeAnimationBaseGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ThemeAnimationBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ThemeAnimationBaseGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ThemeAnimationBaseGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ThemeAnimationBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
