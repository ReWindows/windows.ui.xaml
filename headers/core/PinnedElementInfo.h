#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI::ModernCollectionBasePanel::ContainerManager {
class PinnedElementInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@PinnedElementInfo@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA?BV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@XZ
    WindissectOpaque GetElement() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PinnedElementInfo@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAA@$$QEAVWeakRefPtr@ctl@@H@Z
    PinnedElementInfo(WindissectOpaque &&, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateElement@PinnedElementInfo@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAX$$QEAVWeakRefPtr@ctl@@@Z
    void UpdateElement(WindissectOpaque &&);
};
} // namespace DirectUI::ModernCollectionBasePanel::ContainerManager
