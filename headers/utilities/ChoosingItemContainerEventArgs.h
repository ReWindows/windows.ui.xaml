#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ChoosingItemContainerEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContainerPrepared@ChoosingItemContainerEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsContainerPrepared(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@ChoosingItemContainerEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Item(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemContainer@ChoosingItemContainerEventArgs@DirectUI@@UEAAJPEAPEAUISelectorItem@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ItemContainer(::Windows::UI::Xaml::Controls::Primitives::ISelectorItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemIndex@ChoosingItemContainerEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_ItemIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsContainerPrepared@ChoosingItemContainerEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_IsContainerPrepared(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Item@ChoosingItemContainerEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Item(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ItemContainer@ChoosingItemContainerEventArgs@DirectUI@@UEAAJPEAUISelectorItem@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ItemContainer(::Windows::UI::Xaml::Controls::Primitives::ISelectorItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ChoosingItemContainerEventArgs@DirectUI@@UEAA@XZ
    virtual ~ChoosingItemContainerEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ChoosingItemContainerEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ChoosingItemContainerEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ChoosingItemContainerEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ChoosingItemContainerEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
