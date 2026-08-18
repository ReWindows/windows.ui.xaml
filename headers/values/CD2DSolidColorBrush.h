#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CD2DSolidColorBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DSolidColorBrush@@SAJPEAUID2D1SolidColorBrush@@PEAPEAV1@@Z
    static long Create(ID2D1SolidColorBrush *, CD2DSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CD2DSolidColorBrush@@UEAAIXZ
    virtual unsigned int GetColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CD2DSolidColorBrush@@UEAA?AW4Value@BrushType@@XZ
    virtual int GetType();
};
