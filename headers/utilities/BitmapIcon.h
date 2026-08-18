#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class BitmapIcon {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BitmapIcon@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriSource@BitmapIcon@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_UriSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UriSource@BitmapIcon@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_UriSource(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BitmapIcon@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BitmapIcon@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BitmapIcon@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BitmapIcon@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
