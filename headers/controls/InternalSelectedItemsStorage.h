#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI::Selection {
class InternalSelectedItemsStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@InternalSelectedItemsStorage@Selection@DirectUI@@QEAAJIPEAUIInspectable@@@Z
    long Add(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@InternalSelectedItemsStorage@Selection@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@InternalSelectedItemsStorage@Selection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Has@InternalSelectedItemsStorage@Selection@DirectUI@@QEAAJIAEAIAEAE@Z
    long Has(unsigned int, unsigned int &, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@InternalSelectedItemsStorage@Selection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InternalSelectedItemsStorage@Selection@DirectUI@@QEAA@XZ
    InternalSelectedItemsStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@InternalSelectedItemsStorage@Selection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@InternalSelectedItemsStorage@Selection@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Removed@InternalSelectedItemsStorage@Selection@DirectUI@@QEAAJI@Z
    long Removed(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@InternalSelectedItemsStorage@Selection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InternalSelectedItemsStorage@Selection@DirectUI@@UEAA@XZ
    virtual ~InternalSelectedItemsStorage();
};
} // namespace DirectUI::Selection
