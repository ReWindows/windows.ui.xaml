#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CWriteableBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CWriteableBitmap@@QEAAJPEAX@Z
    long CopyPixels(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWriteableBitmap@@QEAAJPEAXHH@Z
    long Create(void *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWriteableBitmap@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelHeight@CWriteableBitmap@@UEBAHXZ
    virtual int GetPixelHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelWidth@CWriteableBitmap@@UEBAHXZ
    virtual int GetPixelWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CWriteableBitmap@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CWriteableBitmap@@QEAAJXZ
    long Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadImageAvailableImpl@CWriteableBitmap@@UEAAJPEAUIImageAvailableResponse@@@Z
    virtual long OnDownloadImageAvailableImpl(IImageAvailableResponse *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepSoftwareSurfaces@CWriteableBitmap@@MEAA_NXZ
    virtual bool ShouldKeepSoftwareSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWriteableBitmap@@MEAA@XZ
    virtual ~CWriteableBitmap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CWriteableBitmap@@EEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSurface@CWriteableBitmap@@AEAAJPEAH@Z
    long InitializeSurface(int *);
};
