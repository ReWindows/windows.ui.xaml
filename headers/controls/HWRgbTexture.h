#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class HWRgbTexture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HWRgbTexture@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWRgbTexture@@SAJPEAVDCompSurface@@IPEAVHWTextureManager@@PEAPEAVHWTexture@@@Z
    static long Create(DCompSurface *, unsigned int, HWTextureManager *, HWTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurface@HWRgbTexture@@UEBAPEAVDCompSurface@@XZ
    virtual DCompSurface * GetCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@HWRgbTexture@@UEBAIXZ
    virtual unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifyOnDelete@HWRgbTexture@@UEAAJPEAPEAUCNotifyOnDelete@@@Z
    virtual long GetNotifyOnDelete(CNotifyOnDelete * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@HWRgbTexture@@UEAA?AW4PixelFormat@@XZ
    virtual int GetPixelFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@HWRgbTexture@@UEBAIXZ
    virtual unsigned int GetWidth() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsHardwareVideoSurface@HWRgbTexture@@UEAAIXZ
    virtual unsigned int IsHardwareVideoSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@HWRgbTexture@@UEAAIXZ
    virtual unsigned int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceLost@HWRgbTexture@@UEAAIXZ
    virtual unsigned int IsSurfaceLost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtual@HWRgbTexture@@UEAA_NXZ
    virtual bool IsVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@HWRgbTexture@@UEAAJPEAPEAXPEAHPEAI2I@Z
    virtual long Lock(void * *, int *, unsigned int *, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRect@HWRgbTexture@@UEAAJAEBUXRECT_WH@@PEAPEAXPEAHPEAI3@Z
    virtual long LockRect(XRECT_WH const &, void * *, int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueUpdate@HWRgbTexture@@UEAAJXZ
    virtual long QueueUpdate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoldFlush@HWRgbTexture@@UEAAX_N@Z
    virtual void SetHoldFlush(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@HWRgbTexture@@UEAAJ_N@Z
    virtual long Unlock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@HWRgbTexture@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextureFromSoftware@HWRgbTexture@@UEAAJPEAUIPALSurface@@AEBUXPOINT@@@Z
    virtual long UpdateTextureFromSoftware(IPALSurface *, XPOINT const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyGutters@HWRgbTexture@@CAXPEAEIIHIAEBUXRECT_WH@@1@Z
    static void CopyGutters(unsigned char *, unsigned int, unsigned int, int, unsigned int, XRECT_WH const &, XRECT_WH const &);
};
