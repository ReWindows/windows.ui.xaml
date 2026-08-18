#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class DragOverThemeAnimationGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DragOverThemeAnimationGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@DragOverThemeAnimationGenerated@DirectUI@@UEAAJPEAW4AnimationDirection@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Direction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetName@DragOverThemeAnimationGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToOffset@DragOverThemeAnimationGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ToOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Direction@DragOverThemeAnimationGenerated@DirectUI@@UEAAJW4AnimationDirection@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Direction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetName@DragOverThemeAnimationGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ToOffset@DragOverThemeAnimationGenerated@DirectUI@@UEAAJN@Z
    virtual long put_ToOffset(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragOverThemeAnimationGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragOverThemeAnimationGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragOverThemeAnimationGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragOverThemeAnimationGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
