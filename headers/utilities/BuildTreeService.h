#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class BuildTreeService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTrees@BuildTreeService@DirectUI@@QEAAJPEA_N@Z
    long BuildTrees(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWork@BuildTreeService@DirectUI@@QEAAJXZ
    long ClearWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWork@BuildTreeService@DirectUI@@QEAAJPEAUITreeBuilder@2@@Z
    long RegisterWork(::DirectUI::ITreeBuilder *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BuildTreeService@DirectUI@@UEAA@XZ
    virtual ~BuildTreeService();
};
} // namespace DirectUI
