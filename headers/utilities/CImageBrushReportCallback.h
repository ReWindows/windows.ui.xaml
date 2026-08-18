#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CImageBrushReportCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageBrushReportCallback@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CImageBrushReportCallback@@UEAAXXZ
    virtual void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDownloadProgress@CImageBrushReportCallback@@UEAAJM@Z
    virtual long FireDownloadProgress(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CImageBrushReportCallback@@UEAAJI@Z
    virtual long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CImageBrushReportCallback@@UEAAJXZ
    virtual long FireImageOpened();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageBrushReportCallback@@UEAAIXZ
    virtual unsigned int Release();
};
