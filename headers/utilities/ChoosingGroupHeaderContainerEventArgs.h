#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ChoosingGroupHeaderContainerEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Group@ChoosingGroupHeaderContainerEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Group(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupHeaderContainer@ChoosingGroupHeaderContainerEventArgs@DirectUI@@UEAAJPEAPEAUIListViewBaseHeaderItem@Controls@Xaml@UI@Windows@@@Z
    virtual long get_GroupHeaderContainer(::Windows::UI::Xaml::Controls::IListViewBaseHeaderItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupIndex@ChoosingGroupHeaderContainerEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_GroupIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Group@ChoosingGroupHeaderContainerEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Group(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupHeaderContainer@ChoosingGroupHeaderContainerEventArgs@DirectUI@@UEAAJPEAUIListViewBaseHeaderItem@Controls@Xaml@UI@Windows@@@Z
    virtual long put_GroupHeaderContainer(::Windows::UI::Xaml::Controls::IListViewBaseHeaderItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ChoosingGroupHeaderContainerEventArgs@DirectUI@@UEAA@XZ
    virtual ~ChoosingGroupHeaderContainerEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ChoosingGroupHeaderContainerEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ChoosingGroupHeaderContainerEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ChoosingGroupHeaderContainerEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ChoosingGroupHeaderContainerEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
