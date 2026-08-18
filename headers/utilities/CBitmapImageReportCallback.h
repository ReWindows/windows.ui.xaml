#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CBitmapImageReportCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapImageReportCallback@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapImageReportCallback@@SAJPEAVCImageBrush@@PEAPEAV1@@Z
    static long Create(CImageBrush *, CBitmapImageReportCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapImageReportCallback@@SAJPEAVCBitmapIcon@@PEAPEAV1@@Z
    static long Create(CBitmapIcon *, CBitmapImageReportCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CBitmapImageReportCallback@@UEAAXXZ
    virtual void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDownloadProgress@CBitmapImageReportCallback@@UEAAJM@Z
    virtual long FireDownloadProgress(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CBitmapImageReportCallback@@UEAAJI@Z
    virtual long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CBitmapImageReportCallback@@UEAAJXZ
    virtual long FireImageOpened();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSeekable@CBitmapImageReportCallback@@UEAAHXZ
    virtual int MakeSeekable();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapImageReportCallback@@UEAAIXZ
    virtual unsigned int Release();
};
