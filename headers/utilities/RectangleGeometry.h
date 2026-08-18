#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class RectangleGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RectangleGeometry@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Rect@RectangleGeometry@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Rect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Rect@RectangleGeometry@DirectUI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_Rect(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RectangleGeometry@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RectangleGeometry@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RectangleGeometry@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RectangleGeometry@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
