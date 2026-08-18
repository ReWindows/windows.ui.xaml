#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class SharedWicBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedWicBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@SharedWicBitmap@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@SharedWicBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SharedWicBitmap@@SAJIIIAEBU_GUID@@PEAEPEAPEAV1@@Z
    static long Create(unsigned int, unsigned int, unsigned int, _GUID const &, unsigned char *, SharedWicBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataPointer@SharedWicBitmap@@UEAAJPEAIPEAPEAE@Z
    virtual long GetDataPointer(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@SharedWicBitmap@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@SharedWicBitmap@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@SharedWicBitmap@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@SharedWicBitmap@@UEAAJPEAI@Z
    virtual long GetStride(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@SharedWicBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z
    virtual long Lock(WICRect const *, unsigned long, IWICBitmapLock * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedWicBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedWicBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPalette@SharedWicBitmap@@UEAAJPEAUIWICPalette@@@Z
    virtual long SetPalette(IWICPalette *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResolution@SharedWicBitmap@@UEAAJNN@Z
    virtual long SetResolution(double, double);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedWicBitmap@@AEAA@IIIU_GUID@@PEAEI@Z
    SharedWicBitmap(unsigned int, unsigned int, unsigned int, _GUID, unsigned char *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedWicBitmap@@AEAA@XZ
    ~SharedWicBitmap();
};
