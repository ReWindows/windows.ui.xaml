#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class EffectiveViewportChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BringIntoViewDistanceX@EffectiveViewportChangedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_BringIntoViewDistanceX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BringIntoViewDistanceY@EffectiveViewportChangedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_BringIntoViewDistanceY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveViewport@EffectiveViewportChangedEventArgs@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_EffectiveViewport(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxViewport@EffectiveViewportChangedEventArgs@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_MaxViewport(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EffectiveViewportChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@EffectiveViewportChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@EffectiveViewportChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EffectiveViewportChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
