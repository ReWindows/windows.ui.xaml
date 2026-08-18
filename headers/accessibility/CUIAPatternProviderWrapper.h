#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CUIAPatternProviderWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIAPatternProviderWrapper@@QEAA@PEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@@Z
    CUIAPatternProviderWrapper(IUIAProvider *, CUIAWindow *, UIAIdentifiers *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CUIAPatternProviderWrapper@@UEAAXXZ
    virtual void Invalidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowValid@CUIAPatternProviderWrapper@@QEAAHXZ
    int IsWindowValid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWrapper@CUIAPatternProviderWrapper@@QEAAXXZ
    void SetWrapper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAPatternProviderWrapper@@UEAA@XZ
    virtual ~CUIAPatternProviderWrapper();
};
