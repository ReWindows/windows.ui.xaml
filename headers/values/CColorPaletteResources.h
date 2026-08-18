#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 33 member(s).
class CColorPaletteResources {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorPaletteResources@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CColorPaletteResources@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CColorPaletteResources@@AEAAJW4KnownPropertyIndex@@AEAVCValue@@@Z
    long GetColor(int, CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CColorPaletteResources@@AEAAJW4KnownPropertyIndex@@AEBVCValue@@@Z
    long SetColor(int, CValue const &);
};
