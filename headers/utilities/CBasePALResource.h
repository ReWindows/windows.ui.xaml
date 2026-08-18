#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CBasePALResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBasePALResource@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@CBasePALResource@@UEAAJPEA_N@Z
    virtual long Exists(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalResourceUriNoRef@CBasePALResource@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetPhysicalResourceUriNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceUriNoRef@CBasePALResource@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetResourceUriNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScalePercentage@CBasePALResource@@UEAAIXZ
    virtual unsigned int GetScalePercentage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocal@CBasePALResource@@UEAAJPEAI@Z
    virtual long IsLocal(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalResourceUri@CBasePALResource@@SAJPEAUIPALUri@@PEAI@Z
    static long IsLocalResourceUri(IPALUri *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CBasePALResource@@UEAAJPEAPEAUIPALMemory@@@Z
    virtual long Load(IPALMemory * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBasePALResource@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@CBasePALResource@@UEAAPEBGXZ
    virtual unsigned short const * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFilePath@CBasePALResource@@UEAAJPEAVxstring_ptr@@@Z
    virtual long TryGetFilePath(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRawStream@CBasePALResource@@UEAAJPEBGPEAPEAX@Z
    virtual long TryGetRawStream(unsigned short const *, void * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBasePALResource@@IEAA@PEAUIPALUri@@@Z
    CBasePALResource(IPALUri *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBasePALResource@@MEAA@XZ
    virtual ~CBasePALResource();
};
