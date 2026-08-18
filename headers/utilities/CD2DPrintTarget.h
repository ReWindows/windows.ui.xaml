#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class CD2DPrintTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPage@CD2DPrintTarget@@UEAAJH@Z
    virtual long BeginPage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPreview@CD2DPrintTarget@@UEAAJPEAUIPALPrintingData@@@Z
    virtual long BeginPreview(IPALPrintingData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPrint@CD2DPrintTarget@@UEAAJPEAUIPALPrintingData@@@Z
    virtual long BeginPrint(IPALPrintingData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPage@CD2DPrintTarget@@UEAAJXZ
    virtual long CancelPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DPrintTarget@@SAJPEAVCD2DFactory@@PEAPEAV1@@Z
    static long Create(CD2DFactory *, CD2DPrintTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPage@CD2DPrintTarget@@UEAAJXZ
    virtual long EndPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPreview@CD2DPrintTarget@@UEAAJXZ
    virtual long EndPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPrint@CD2DPrintTarget@@UEAAJXZ
    virtual long EndPrint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidatePreview@CD2DPrintTarget@@UEAAJXZ
    virtual long InvalidatePreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewPageCount@CD2DPrintTarget@@UEAAJW4Value@PALPreviewPageCountType@@H@Z
    virtual long SetPreviewPageCount(int, int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DPrintTarget@@MEAA@XZ
    virtual ~CD2DPrintTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPrintImpl@CD2DPrintTarget@@AEAAJ_J@Z
    long BeginPrintImpl(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommandListToDXGISurface@CD2DPrintTarget@@AEAAJPEAUID2D1CommandList@@PEAUID3D11Device@@PEAUID2D1DeviceContext@@UXSIZEF@@3PEAPEAUIDXGISurface@@@Z
    long CommandListToDXGISurface(ID2D1CommandList *, ID3D11Device *, ID2D1DeviceContext *, XSIZEF, XSIZEF, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyImpl@CD2DPrintTarget@@AEAAJXZ
    long DestroyImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD2DPrintTarget@@AEAAJPEAVCD2DFactory@@@Z
    long Initialize(CD2DFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeImpl@CD2DPrintTarget@@AEAAJXZ
    long InitializeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPrintMessage@CD2DPrintTarget@@AEAAJI_K_J@Z
    long PostPrintMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintThreadFn@CD2DPrintTarget@@CAHPEAE@Z
    static int PrintThreadFn(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPrintMessage@CD2DPrintTarget@@CAXI_K_J@Z
    static void ProcessPrintMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPrintMessage@CD2DPrintTarget@@AEAAJI_K_J@Z
    long SendPrintMessage(unsigned int, uint64_t, int64_t);
};
