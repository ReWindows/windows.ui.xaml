#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class BitmapData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyBytesTo@BitmapData@@UEAAJIIPEAEPEAI@Z
    virtual long CopyBytesTo(unsigned int, unsigned int, unsigned char *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapDescription@BitmapData@@UEAAJPEAUBitmapDescription@@@Z
    virtual long GetBitmapDescription(BitmapDescription *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceBitmapDescription@BitmapData@@UEAAJPEAUBitmapDescription@@@Z
    virtual long GetSourceBitmapDescription(BitmapDescription *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@BitmapData@@UEAAJPEAI@Z
    virtual long GetStride(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BitmapData@@UEAA@XZ
    virtual ~BitmapData();
};
