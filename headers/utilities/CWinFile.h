#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CWinFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CWinFile@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CWinFile@@UEAAPEAXXZ
    virtual void * GetHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastModifiedTime@CWinFile@@UEAAJPEAH@Z
    virtual long GetLastModifiedTime(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CWinFile@@UEAAJPEA_K@Z
    virtual long GetSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRange@CWinFile@@UEAAJ_KIPEAPEAUIPALMemory@@@Z
    virtual long MapRange(uint64_t, unsigned int, IPALMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CWinFile@@UEAAJIPEAXPEAI@Z
    virtual long Read(unsigned int, void *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinFile@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndOfFile@CWinFile@@UEAAJXZ
    virtual long SetEndOfFile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilePointer@CWinFile@@UEAAJ_JH@Z
    virtual long SetFilePointer(int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CWinFile@@UEAAJIPEBXPEAI@Z
    virtual long Write(unsigned int, void const *, unsigned int *);
};
