#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CWinHttp11StreamBuffer {
public:
    class StreamDataChunk;
    class StreamDataChunkList;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinHttp11StreamBuffer@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWinHttp11StreamBuffer@@SAJIPEAPEAV1@@Z
    static long Create(unsigned int, CWinHttp11StreamBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CWinHttp11StreamBuffer@@UEAAIXZ
    virtual unsigned int GetOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Length@CWinHttp11StreamBuffer@@UEAAIXZ
    virtual unsigned int Length();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CWinHttp11StreamBuffer@@UEAAJPEAXIIPEAI@Z
    virtual long Read(void *, unsigned int, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinHttp11StreamBuffer@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalDownloadSize@CWinHttp11StreamBuffer@@UEAAXI@Z
    virtual void SetFinalDownloadSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CWinHttp11StreamBuffer@@UEAAJI@Z
    virtual long SetSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@CWinHttp11StreamBuffer@@UEAAIXZ
    virtual unsigned int Size();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CWinHttp11StreamBuffer@@UEAAJPEBXIIPEAUIStream@@@Z
    virtual long Write(void const *, unsigned int, unsigned int, IStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyViewData@CWinHttp11StreamBuffer@@AEAAJPEAVCMappedMemory@@IPEAEPEAIIPEAUIStream@@@Z
    long CopyViewData(CMappedMemory *, unsigned int, unsigned char *, unsigned int *, unsigned int, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaMappedMemory@CWinHttp11StreamBuffer@@AEAAJIIPEAPEAVCMappedMemory@@@Z
    long CreateMediaMappedMemory(unsigned int, unsigned int, CMappedMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMappingSize@CWinHttp11StreamBuffer@@AEAAJI@Z
    long UpdateMappingSize(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinHttp11StreamBuffer@@EEAA@XZ
    virtual ~CWinHttp11StreamBuffer();
};
