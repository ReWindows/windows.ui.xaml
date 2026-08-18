#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CD2DBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DBitmap@@SAJPEAUID2D1Bitmap@@PEAPEAV1@@Z
    static long Create(ID2D1Bitmap *, CD2DBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CD2DBitmap@@UEAAIXZ
    virtual unsigned int GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CD2DBitmap@@UEAAIXZ
    virtual unsigned int GetWidth();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DBitmap@@EEAA@XZ
    virtual ~CD2DBitmap();
};
