#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class CollectionViewSourceGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CollectionViewSourceGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSourceGrouped@CollectionViewSourceGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSourceGrouped(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemsPath@CollectionViewSourceGenerated@DirectUI@@UEAAJPEAPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    virtual long get_ItemsPath(::Windows::UI::Xaml::IPropertyPath * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@CollectionViewSourceGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Source(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@CollectionViewSourceGenerated@DirectUI@@UEAAJPEAPEAUICollectionView@Data@Xaml@UI@Windows@@@Z
    virtual long get_View(::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSourceGrouped@CollectionViewSourceGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsSourceGrouped(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ItemsPath@CollectionViewSourceGenerated@DirectUI@@UEAAJPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    virtual long put_ItemsPath(::Windows::UI::Xaml::IPropertyPath *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@CollectionViewSourceGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Source(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CollectionViewSourceGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CollectionViewSourceGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CollectionViewSourceGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CollectionViewSourceGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
