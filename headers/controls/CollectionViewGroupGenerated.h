#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class CollectionViewGroupGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CollectionViewGroupGenerated@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CollectionViewGroupGenerated@DirectUI@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@678@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CollectionViewGroupGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CollectionViewGroupGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Group@CollectionViewGroupGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Group(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupItems@CollectionViewGroupGenerated@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_GroupItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CollectionViewGroupGenerated@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CollectionViewGroupGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CollectionViewGroupGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CollectionViewGroupGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
