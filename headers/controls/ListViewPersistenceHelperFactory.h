#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ListViewPersistenceHelperFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeScrollPosition@ListViewPersistenceHelperFactory@DirectUI@@UEAAJPEAUIListViewBase@Controls@Xaml@UI@Windows@@PEAUIListViewItemToKeyHandler@4567@PEAPEAUHSTRING__@@@Z
    virtual long GetRelativeScrollPosition(::Windows::UI::Xaml::Controls::IListViewBase *, ::Windows::UI::Xaml::Controls::IListViewItemToKeyHandler *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeScrollPositionAsync@ListViewPersistenceHelperFactory@DirectUI@@UEAAJPEAUIListViewBase@Controls@Xaml@UI@Windows@@PEAUHSTRING__@@PEAUIListViewKeyToItemHandler@4567@PEAPEAUIAsyncAction@Foundation@7@@Z
    virtual long SetRelativeScrollPositionAsync(::Windows::UI::Xaml::Controls::IListViewBase *, HSTRING__*, ::Windows::UI::Xaml::Controls::IListViewKeyToItemHandler *, WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ListViewPersistenceHelperFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ListViewPersistenceHelperFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ListViewPersistenceHelperFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListViewPersistenceHelperFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
