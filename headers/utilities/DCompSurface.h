#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class DCompSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@DCompSurface@@QEAAJPEBUXRECT_WH@@AEBU_GUID@@PEAPEAUIUnknown@@PEAUXPOINT@@@Z
    long BeginDraw(XRECT_WH const *, _GUID const &, IUnknown * *, XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithGutters@DCompSurface@@QEAAJPEBUXRECT_WH@@AEBU_GUID@@PEAPEAUIUnknown@@PEAUXPOINT@@@Z
    long BeginDrawWithGutters(XRECT_WH const *, _GUID const &, IUnknown * *, XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToSurface@DCompSurface@@QEAAJPEAPEAUIPALByteAccessSurface@@@Z
    long CopyToSurface(IPALByteAccessSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGradientSurface@DCompSurface@@SAJPEAVCD3D11Device@@PEAVDCompTreeHost@@IW4XcpGradientWrapMode@@PEAPEAV1@PEAI@Z
    static long CreateGradientSurface(CD3D11Device *, DCompTreeHost *, unsigned int, int, DCompSurface * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithNoHardware@DCompSurface@@SA?AV?$xref_ptr@VDCompSurface@@@@PEAVDCompTreeHost@@_N@Z
    static WindissectOpaque CreateWithNoHardware(DCompTreeHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpDCompSurface@DCompSurface@@QEAAJIPEAUtagRECT@@@Z
    long DumpDCompSurface(unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@DCompSurface@@QEAAJXZ
    long EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ensure32BitSource@DCompSurface@@QEAAJPEAVSystemMemoryBits@@PEAPEAV2@@Z
    long Ensure32BitSource(SystemMemoryBits *, SystemMemoryBits * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushUpdates@DCompSurface@@QEAAJXZ
    long FlushUpdates();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@DCompSurface@@QEBA?AW4PixelFormat@@XZ
    int GetPixelFormat() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureSizeInBytes@DCompSurface@@QEBAIXZ
    unsigned int GetTextureSizeInBytes() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSurface@DCompSurface@@QEAAJPEAVCD3D11Device@@PEAVDCompTreeHost@@I@Z
    long InitializeSurface(CD3D11Device *, DCompTreeHost *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscarded@DCompSurface@@QEAAIXZ
    unsigned int IsDiscarded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRect@DCompSurface@@QEAAJAEBUXRECT_WH@@PEAPEAXPEAHPEAI3@Z
    long LockRect(XRECT_WH const &, void * *, int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueUpdate@DCompSurface@@QEAAJXZ
    long QueueUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLegacyDCompResources@DCompSurface@@QEAAX_N@Z
    void ReleaseLegacyDCompResources(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@DCompSurface@@QEAAJII@Z
    long Resize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceDCompSurface@DCompSurface@@QEAAJI@Z
    long TraceDCompSurface(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimTo@DCompSurface@@QEAAJPEAUXRECT_WH@@I@Z
    long TrimTo(XRECT_WH *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompSurface@@IEAA@IIIIII_N0@Z
    DCompSurface(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDxgiFormat@DCompSurface@@IEBA?AW4DXGI_FORMAT@@XZ
    int GetDxgiFormat() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelStride@DCompSurface@@IEBAIXZ
    unsigned int GetPixelStride() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompSurface@@MEAA@XZ
    virtual ~DCompSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySubresource@DCompSurface@@AEAAJAEBUXRECT_WH@@PEAVSystemMemoryBits@@@Z
    long CopySubresource(XRECT_WH const &, SystemMemoryBits *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSurface@DCompSurface@@AEAAJPEAVDCompTreeHost@@PEAUIDCompositionSurfaceFactory@@I@Z
    long InitializeSurface(DCompTreeHost *, IDCompositionSurfaceFactory *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextureTrace@DCompSurface@@CAX_K0AEBUXRECT_WH@@AEBUXPOINT@@III@Z
    static void TextureTrace(uint64_t, uint64_t, XRECT_WH const &, XPOINT const &, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMemoryFootprint@DCompSurface@@AEAAXI@Z
    void UpdateMemoryFootprint(unsigned int);
};
