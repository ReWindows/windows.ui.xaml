#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CMemoryStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMemoryStream@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSeek@CMemoryStream@@UEAAIXZ
    virtual unsigned int CanSeek();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CMemoryStream@@UEAAJPEAPEAUIPALStream@@@Z
    virtual long Clone(IPALStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMemoryStream@@UEAAIXZ
    virtual unsigned int GetCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CMemoryStream@@UEAAJPEA_K@Z
    virtual long GetOffset(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CMemoryStream@@UEAAJPEA_K@Z
    virtual long GetPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMemoryStream@@UEAAJPEA_K@Z
    virtual long GetSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMemoryStream@@UEAAJPEAXIPEAI@Z
    virtual long Read(void *, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMemoryStream@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMemoryStream@@UEAAJ_JW4PALSeekOrigin@@PEA_K@Z
    virtual long Seek(int64_t, int, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CMemoryStream@@UEAAJ_K@Z
    virtual long SetSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMemoryStream@@UEAAJPEBXIHPEAI@Z
    virtual long Write(void const *, unsigned int, int, unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMemoryStream@@EEAA@XZ
    virtual ~CMemoryStream();
};
