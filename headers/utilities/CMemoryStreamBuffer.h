#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CMemoryStreamBuffer {
public:
    class CMemoryStreamBufferBlock;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMemoryStreamBuffer@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMemoryStreamBuffer@@QEAA@I@Z
    CMemoryStreamBuffer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CMemoryStreamBuffer@@UEAAJPEAPEAUIPALStream@@@Z
    virtual long CreateStream(IPALStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMemoryStreamBuffer@@QEAAJPEAXIPEAI@Z
    long Read(void *, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMemoryStreamBuffer@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@CMemoryStreamBuffer@@QEAAIXZ
    unsigned int Size();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMemoryStreamBuffer@@UEAAJPEBXIH@Z
    virtual long Write(void const *, unsigned int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMemoryStreamBuffer@@UEAA@XZ
    virtual ~CMemoryStreamBuffer();
};
