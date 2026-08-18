#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class ShadowCasterPair {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@ShadowCasterPair@@UEBA?AW4CasterType@@XZ
    virtual int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWucCasters@ShadowCasterPair@@QEAAXPEAUICompositionProjectedShadowCaster@Composition@UI@Windows@@0@Z
    void SetWucCasters(::Windows::UI::Composition::ICompositionProjectedShadowCaster *, ::Windows::UI::Composition::ICompositionProjectedShadowCaster *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShadowCasterPair@@QEAA@PEAVCUIElement@@PEAUICompositionBrush@Composition@UI@Windows@@@Z
    ShadowCasterPair(CUIElement *, ::Windows::UI::Composition::ICompositionBrush *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShadowCasterPair@@QEAA@PEAUIVisual@Composition@UI@Windows@@PEAUICompositionBrush@234@@Z
    ShadowCasterPair(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::ICompositionBrush *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShadowCasterPair@@UEAA@XZ
    virtual ~ShadowCasterPair();
};
