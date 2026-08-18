#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class Selection {
public:
    class InternalSelectedItemsStorage;
    class SelectionChangerImpl;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@Selection@DirectUI@@QEAAJIPEAPEAUIInspectable@@@Z
    long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexAt@Selection@DirectUI@@QEAAJIAEAI@Z
    long GetIndexAt(unsigned int, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItemsSelected@Selection@DirectUI@@QEAAJAEAI@Z
    long GetNumItemsSelected(unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Has@Selection@DirectUI@@QEAAJIAEAIAEAE@Z
    long Has(unsigned int, unsigned int &, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Selection@DirectUI@@QEAAJPEAVSelectionChangeApplier@2@@Z
    long Initialize(SelectionChangeApplier *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSelectedIndex@Selection@DirectUI@@QEAAJI@Z
    long RemoveSelectedIndex(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Selection@DirectUI@@QEAA@XZ
    ~Selection();
};
} // namespace DirectUI
