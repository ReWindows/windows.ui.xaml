#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class AsyncCopyToSurfaceTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@AsyncCopyToSurfaceTask@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@AsyncCopyToSurfaceTask@@UEBA_KXZ
    virtual uint64_t GetRequestId() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyOperation@AsyncCopyToSurfaceTask@@IEAAJIIAEAV?$xref_ptr@VOfferableSoftwareBitmap@@@@@Z
    long CopyOperation(unsigned int, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToHardwareSurfaces@AsyncCopyToSurfaceTask@@IEAAJPEAEUBitmapPlaneDescription@Imaging@Graphics@Windows@@K@Z
    long CopyToHardwareSurfaces(unsigned char *, ::Windows::Graphics::Imaging::BitmapPlaneDescription, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToSoftwareSurface@AsyncCopyToSurfaceTask@@IEAAXPEAEUBitmapPlaneDescription@Imaging@Graphics@Windows@@KAEBV?$xref_ptr@VOfferableSoftwareBitmap@@@@@Z
    void CopyToSoftwareSurface(unsigned char *, ::Windows::Graphics::Imaging::BitmapPlaneDescription, unsigned long, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncCopyToSurfaceTask@@MEAA@XZ
    virtual ~AsyncCopyToSurfaceTask();
};
