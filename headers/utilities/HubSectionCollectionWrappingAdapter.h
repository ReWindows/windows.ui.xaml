#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class HubSectionCollectionWrappingAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeIndex@HubSectionCollectionWrappingAdapter@DirectUI@@QEAAJIPEAI@Z
    long GetRelativeIndex(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChanged@HubSectionCollectionWrappingAdapter@DirectUI@@QEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long NotifyOfItemsChanged(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSectionIndex@HubSectionCollectionWrappingAdapter@DirectUI@@QEAAJI@Z
    long SetDefaultSectionIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@HubSectionCollectionWrappingAdapter@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HubSectionCollectionWrappingAdapter@DirectUI@@UEAA@XZ
    virtual ~HubSectionCollectionWrappingAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HubSectionCollectionWrappingAdapter@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HubSectionCollectionWrappingAdapter@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HubSectionCollectionWrappingAdapter@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
