#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class HwTextBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HwTextBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromBitmap@HwTextBitmap@@UEAAJPEBUD2D_POINT_2U@@PEAUID2D1Bitmap@@PEBUD2D_RECT_U@@@Z
    virtual long CopyFromBitmap(D2D_POINT_2U const *, ID2D1Bitmap *, D2D_RECT_U const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromMemory@HwTextBitmap@@UEAAJPEBUD2D_RECT_U@@PEBXI@Z
    virtual long CopyFromMemory(D2D_RECT_U const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromRenderTarget@HwTextBitmap@@UEAAJPEBUD2D_POINT_2U@@PEAUID2D1RenderTarget@@PEBUD2D_RECT_U@@@Z
    virtual long CopyFromRenderTarget(D2D_POINT_2U const *, ID2D1RenderTarget *, D2D_RECT_U const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HwTextBitmap@@SAJPEAUIWICBitmapSource@@PEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(IWICBitmapSource *, CCoreServices *, HwTextBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpi@HwTextBitmap@@UEBAXPEAM0@Z
    virtual void GetDpi(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFactory@HwTextBitmap@@UEBAXPEAPEAUID2D1Factory@@@Z
    virtual void GetFactory(ID2D1Factory * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@HwTextBitmap@@UEBA?AUD2D1_PIXEL_FORMAT@@XZ
    virtual D2D1_PIXEL_FORMAT GetPixelFormat() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelSize@HwTextBitmap@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetPixelSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@HwTextBitmap@@UEBA?AUD2D_SIZE_F@@XZ
    virtual D2D_SIZE_F GetSize() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HwTextBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HwTextBitmap@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HwTextBitmap@@IEAA@XZ
    HwTextBitmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HwTextBitmap@@MEAA@XZ
    virtual ~HwTextBitmap();
};
