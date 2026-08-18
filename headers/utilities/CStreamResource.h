#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CStreamResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStreamResource@@SAJPEAUIPALUri@@PEAUIStream@@PEAPEAUIPALResource@@@Z
    static long Create(IPALUri *, IStream *, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CStreamResource@@UEAAJPEAPEAUIPALMemory@@@Z
    virtual long Load(IPALMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRawStream@CStreamResource@@UEAAJPEBGPEAPEAX@Z
    virtual long TryGetRawStream(unsigned short const *, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStreamResource@@EEAA@XZ
    virtual ~CStreamResource();
};
