#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class MediaSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MediaSource@@SAJPEAVCValue@@AEBVxstring_ptr_view@@PEAPEAV1@@Z
    static long Create(CValue *, xstring_ptr_view const &, MediaSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MediaSource@@SAJVxstring_ptr@@PEAPEAV1@@Z
    static long Create(xstring_ptr, MediaSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptySource@MediaSource@@QEAAIXZ
    unsigned int IsEmptySource();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaSource@@IEAA@W4Enum@MediaSourceType@@@Z
    MediaSource(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaSource@@MEAA@XZ
    virtual ~MediaSource();
};
