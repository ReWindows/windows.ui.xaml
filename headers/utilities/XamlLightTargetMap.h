#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class XamlLightTargetMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetVisual@XamlLightTargetMap@@QEAAXPEAVCUIElement@@PEAUIVisual@Composition@UI@Windows@@PEAVCXamlLight@@@Z
    void AddTargetVisual(CUIElement *, ::Windows::UI::Composition::IVisual *, CXamlLight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetAndLight@XamlLightTargetMap@@QEAAXPEAVCUIElement@@PEAVCXamlLight@@@Z
    void RemoveTargetAndLight(CUIElement *, CXamlLight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetVisual@XamlLightTargetMap@@QEAAXPEAVCUIElement@@PEAUIVisual@Composition@UI@Windows@@@Z
    void RemoveTargetVisual(CUIElement *, ::Windows::UI::Composition::IVisual *);
};
