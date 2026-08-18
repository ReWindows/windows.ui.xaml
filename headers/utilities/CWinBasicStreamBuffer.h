#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CWinBasicStreamBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinBasicStreamBuffer@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWinBasicStreamBuffer@@SAJIPEAPEAV1@@Z
    static long Create(unsigned int, CWinBasicStreamBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CWinBasicStreamBuffer@@UEAAIXZ
    virtual unsigned int GetOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Length@CWinBasicStreamBuffer@@UEAAIXZ
    virtual unsigned int Length();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CWinBasicStreamBuffer@@UEAAJPEAXIIPEAI@Z
    virtual long Read(void *, unsigned int, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinBasicStreamBuffer@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalDownloadSize@CWinBasicStreamBuffer@@UEAAXI@Z
    virtual void SetFinalDownloadSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CWinBasicStreamBuffer@@UEAAJI@Z
    virtual long SetSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@CWinBasicStreamBuffer@@UEAAIXZ
    virtual unsigned int Size();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CWinBasicStreamBuffer@@UEAAJPEBXIIPEAUIStream@@@Z
    virtual long Write(void const *, unsigned int, unsigned int, IStream *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWinBasicStreamBuffer@@AEAA@XZ
    CWinBasicStreamBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinBasicStreamBuffer@@EEAA@XZ
    virtual ~CWinBasicStreamBuffer();
};
