#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CMemorySurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMemorySurface@@SAJW4PixelFormat@@IIHIPEAXPEAPEAV1@@Z
    static long Create(int, unsigned int, unsigned int, int, unsigned int, void *, CMemorySurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CMemorySurface@@UEBAIXZ
    virtual unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLOD@CMemorySurface@@UEAAIXZ
    virtual unsigned int GetMaxLOD();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifyOnDelete@CMemorySurface@@UEAAJPEAPEAUCNotifyOnDelete@@@Z
    virtual long GetNotifyOnDelete(CNotifyOnDelete * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CMemorySurface@@UEAA?AW4PixelFormat@@XZ
    virtual int GetPixelFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CMemorySurface@@UEBAIXZ
    virtual unsigned int GetWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMIPMapChain@CMemorySurface@@UEAAIXZ
    virtual unsigned int HasMIPMapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareVideoSurface@CMemorySurface@@UEAAIXZ
    virtual unsigned int IsHardwareVideoSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CMemorySurface@@UEAAIXZ
    virtual unsigned int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtual@CMemorySurface@@UEAA_NXZ
    virtual bool IsVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CMemorySurface@@UEAAJPEAPEAXPEAHPEAI2I@Z
    virtual long Lock(void * *, int *, unsigned int *, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CMemorySurface@@UEAAJW4XSURFNOTIFY@@IPEAE@Z
    virtual long Notify(int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offer@CMemorySurface@@UEAAJXZ
    virtual long Offer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reclaim@CMemorySurface@@UEAAJPEAI@Z
    virtual long Reclaim(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOpaque@CMemorySurface@@UEAAXI@Z
    virtual void SetIsOpaque(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CMemorySurface@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMemorySurface@@UEAA@XZ
    virtual ~CMemorySurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateMIPHeader@CMemorySurface@@AEAAJXZ
    long GenerateMIPHeader();
};
