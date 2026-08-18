#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CFilePathResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFilePathResource@@SAJPEAUIPALUri@@AEBVxstring_ptr@@PEAPEAUIPALResource@@@Z
    static long Create(IPALUri *, xstring_ptr const &, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFilePathResource@@SAJPEAUIPALUri@@PEAGIPEAPEAUIPALResource@@@Z
    static long Create(IPALUri *, unsigned short *, unsigned int, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@CFilePathResource@@UEAAJPEA_N@Z
    virtual long Exists(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CFilePathResource@@UEAAJPEAPEAUIPALMemory@@@Z
    virtual long Load(IPALMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@CFilePathResource@@UEAAPEBGXZ
    virtual unsigned short const * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFilePath@CFilePathResource@@UEAAJPEAVxstring_ptr@@@Z
    virtual long TryGetFilePath(xstring_ptr *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilePathResource@@EEAA@XZ
    virtual ~CFilePathResource();
};
