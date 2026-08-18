#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class ElementShadowSource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementShadowSource@@QEAA@PEAVCUIElement@@@Z
    ElementShadowSource(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementNoRef@ElementShadowSource@@UEBAPEAVCUIElement@@XZ
    virtual CUIElement * GetElementNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualNoRef@ElementShadowSource@@UEBAPEAUIVisual@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IVisual * GetVisualNoRef() const;
};
