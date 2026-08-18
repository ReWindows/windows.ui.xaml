#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class OfferableSoftwareBitmap {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@OfferableSoftwareBitmap@@UEBAIXZ
    virtual unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLOD@OfferableSoftwareBitmap@@UEAAIXZ
    virtual unsigned int GetMaxLOD();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifyOnDelete@OfferableSoftwareBitmap@@UEAAJPEAPEAUCNotifyOnDelete@@@Z
    virtual long GetNotifyOnDelete(CNotifyOnDelete * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@OfferableSoftwareBitmap@@UEAA?AW4PixelFormat@@XZ
    virtual int GetPixelFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@OfferableSoftwareBitmap@@UEBAIXZ
    virtual unsigned int GetWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMIPMapChain@OfferableSoftwareBitmap@@UEAAIXZ
    virtual unsigned int HasMIPMapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareVideoSurface@OfferableSoftwareBitmap@@UEAAIXZ
    virtual unsigned int IsHardwareVideoSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@OfferableSoftwareBitmap@@UEAAIXZ
    virtual unsigned int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtual@OfferableSoftwareBitmap@@UEAA_NXZ
    virtual bool IsVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@OfferableSoftwareBitmap@@UEAAJPEAPEAXPEAHPEAI2I@Z
    virtual long Lock(void * *, int *, unsigned int *, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@OfferableSoftwareBitmap@@UEAAJW4XSURFNOTIFY@@IPEAE@Z
    virtual long Notify(int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offer@OfferableSoftwareBitmap@@UEAAJXZ
    virtual long Offer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OfferableSoftwareBitmap@@QEAA@W4PixelFormat@@II_N@Z
    OfferableSoftwareBitmap(int, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reclaim@OfferableSoftwareBitmap@@UEAAJPEAI@Z
    virtual long Reclaim(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOpaque@OfferableSoftwareBitmap@@UEAAXI@Z
    virtual void SetIsOpaque(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@OfferableSoftwareBitmap@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OfferableSoftwareBitmap@@UEAA@XZ
    virtual ~OfferableSoftwareBitmap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValid@OfferableSoftwareBitmap@@AEBAXXZ
    void EnsureValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateMIPHeader@OfferableSoftwareBitmap@@AEAAJXZ
    long GenerateMIPHeader();
};
