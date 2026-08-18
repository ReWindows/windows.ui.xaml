#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class ItemCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ItemCollection@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ItemCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectVisualChildrenRecursive@ItemCollection@DirectUI@@QEAAJXZ
    long DisconnectVisualChildrenRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ItemCollection@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ItemCollection@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ItemCollection@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@ItemCollection@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@ItemCollection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ItemCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@ItemCollection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ItemCollection@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemCollection@DirectUI@@IEAA@XZ
    ItemCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemCollection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemCollection@DirectUI@@MEAA@XZ
    virtual ~ItemCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckReentrancy@ItemCollection@DirectUI@@AEAAJXZ
    long CheckReentrancy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@ItemCollection@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnCollectionChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@ItemCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanged(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsSourceList@ItemCollection@DirectUI@@AEAAJPEAU?$IIterable@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long UpdateItemsSourceList(WindissectOpaque *);
};
} // namespace DirectUI
