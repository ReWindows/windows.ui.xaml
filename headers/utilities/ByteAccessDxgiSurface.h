#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class ByteAccessDxgiSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ByteAccessDxgiSurface@@SAJPEAVCD3D11Device@@PEAUIDXGISurface@@IPEAPEAV1@@Z
    static long Create(CD3D11Device *, IDXGISurface *, unsigned int, ByteAccessDxgiSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytes@ByteAccessDxgiSurface@@UEAAJAEAIPEAPEAE@Z
    virtual long ReadBytes(unsigned int &, unsigned char * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ByteAccessDxgiSurface@@EEAA@XZ
    virtual ~ByteAccessDxgiSurface();
};
