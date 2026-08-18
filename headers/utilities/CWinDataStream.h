#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CWinDataStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinDataStream@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSeek@CWinDataStream@@UEAAIXZ
    virtual unsigned int CanSeek();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CWinDataStream@@UEAAJPEAPEAUIPALStream@@@Z
    virtual long Clone(IPALStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWinDataStream@@SAJPEAVCWinDataStreamBuffer@@PEAPEAV1@@Z
    static long Create(CWinDataStreamBuffer *, CWinDataStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CWinDataStream@@UEAAIXZ
    virtual unsigned int GetCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CWinDataStream@@UEAAJPEA_K@Z
    virtual long GetOffset(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CWinDataStream@@UEAAJPEA_K@Z
    virtual long GetPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CWinDataStream@@UEAAJPEA_K@Z
    virtual long GetSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CWinDataStream@@UEAAJPEAXIPEAI@Z
    virtual long Read(void *, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinDataStream@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CWinDataStream@@UEAAJ_JW4PALSeekOrigin@@PEA_K@Z
    virtual long Seek(int64_t, int, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CWinDataStream@@UEAAJ_K@Z
    virtual long SetSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CWinDataStream@@UEAAJPEBXIHPEAI@Z
    virtual long Write(void const *, unsigned int, int, unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinDataStream@@EEAA@XZ
    virtual ~CWinDataStream();
};
