#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class AlphaMask {
public:
    class Impl;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AlphaMask@@QEAA@XZ
    AlphaMask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionBrush@AlphaMask@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetCompositionBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIfAvailable@AlphaMask@@QEAAJPEAVCUIElement@@@Z
    long UpdateIfAvailable(CUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlphaMask@@QEAA@XZ
    ~AlphaMask();
};
