#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace CMediaElement {
class CPosterImageReportCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CPosterImageReportCallback@CMediaElement@@UEAAXXZ
    virtual void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDownloadProgress@CPosterImageReportCallback@CMediaElement@@UEAAJM@Z
    virtual long FireDownloadProgress(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CPosterImageReportCallback@CMediaElement@@UEAAJI@Z
    virtual long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CPosterImageReportCallback@CMediaElement@@UEAAJXZ
    virtual long FireImageOpened();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPosterImageReportCallback@CMediaElement@@UEAA@XZ
    virtual ~CPosterImageReportCallback();
};
} // namespace CMediaElement
