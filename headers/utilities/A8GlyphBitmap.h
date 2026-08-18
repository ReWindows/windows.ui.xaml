#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class A8GlyphBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@A8GlyphBitmap@@UEBAIXZ
    virtual unsigned int AddRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullColor@A8GlyphBitmap@@UEBA_NXZ
    virtual bool FullColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@A8GlyphBitmap@@UEBAPEAEXZ
    virtual unsigned char * GetBitmap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubpixelXLeft@A8GlyphBitmap@@UEBAHH@Z
    virtual int GetSubpixelXLeft(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubpixelXRight@A8GlyphBitmap@@UEBAHH@Z
    virtual int GetSubpixelXRight(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubpixelYBottom@A8GlyphBitmap@@UEBAHH@Z
    virtual int GetSubpixelYBottom(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubpixelYTop@A8GlyphBitmap@@UEBAHH@Z
    virtual int GetSubpixelYTop(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Grayscale@A8GlyphBitmap@@UEBA_NXZ
    virtual bool Grayscale() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Height@A8GlyphBitmap@@UEBAIXZ
    virtual unsigned int Height() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MemoryUsage@A8GlyphBitmap@@UEBAIXZ
    virtual unsigned int MemoryUsage() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginX@A8GlyphBitmap@@UEBAHXZ
    virtual int OriginX() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginY@A8GlyphBitmap@@UEBAHXZ
    virtual int OriginY() const;
    // Category: Method | Source: PE Export
    // Symbol: ?OverscaleX@A8GlyphBitmap@@UEBAHXZ
    virtual int OverscaleX() const;
    // Category: Method | Source: PE Export
    // Symbol: ?OverscaleY@A8GlyphBitmap@@UEBAHXZ
    virtual int OverscaleY() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@A8GlyphBitmap@@UEBAIXZ
    virtual unsigned int Release() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stride@A8GlyphBitmap@@UEBAIXZ
    virtual unsigned int Stride() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Width@A8GlyphBitmap@@UEBAIXZ
    virtual unsigned int Width() const;
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1A8GlyphBitmap@@MEAA@XZ
    virtual ~A8GlyphBitmap();
};
