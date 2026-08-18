#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class UIElementCollectionUnloadingStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@UIElementCollectionUnloadingStorage@@QEAAXPEAVCUIElement@@PEAW4UnloadCleanup@@@Z
    void Add(CUIElement *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsKey@UIElementCollectionUnloadingStorage@@QEAA_NPEAVCUIElement@@@Z
    bool ContainsKey(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@UIElementCollectionUnloadingStorage@@QEAAPEAW4UnloadCleanup@@PEAVCUIElement@@@Z
    int * Get(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@UIElementCollectionUnloadingStorage@@QEAAPEAW4UnloadCleanup@@PEAVCUIElement@@@Z
    int * Remove(CUIElement *);
};
