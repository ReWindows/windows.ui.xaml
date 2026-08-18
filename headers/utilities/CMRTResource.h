#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CMRTResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMRTResource@@SAJPEAUIPALUri@@0PEAUIResourceCandidate@@PEAPEAUIPALResource@@@Z
    static long Create(IPALUri *, IPALUri *, IResourceCandidate *, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@CMRTResource@@UEAAJPEA_N@Z
    virtual long Exists(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalResourceUriNoRef@CMRTResource@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetPhysicalResourceUriNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScalePercentage@CMRTResource@@UEAAIXZ
    virtual unsigned int GetScalePercentage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMRTResource@@UEAAJPEAPEAUIPALMemory@@@Z
    virtual long Load(IPALMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@CMRTResource@@UEAAPEBGXZ
    virtual unsigned short const * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFilePath@CMRTResource@@UEAAJPEAVxstring_ptr@@@Z
    virtual long TryGetFilePath(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRawStream@CMRTResource@@UEAAJPEBGPEAPEAX@Z
    virtual long TryGetRawStream(unsigned short const *, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMRTResource@@AEAA@PEAUIPALUri@@0@Z
    CMRTResource(IPALUri *, IPALUri *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineType@CMRTResource@@AEAAJXZ
    long DetermineType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFilePathResource@CMRTResource@@AEAAJXZ
    long EnsureFilePathResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStreamResource@CMRTResource@@AEAAJXZ
    long EnsureStreamResource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMRTResource@@EEAA@XZ
    virtual ~CMRTResource();
};
