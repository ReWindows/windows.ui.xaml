#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ItemClickEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClickedItem@ItemClickEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ClickedItem(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ClickedItem@ItemClickEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_ClickedItem(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemClickEventArgs@DirectUI@@UEAA@XZ
    virtual ~ItemClickEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemClickEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemClickEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ItemClickEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemClickEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
