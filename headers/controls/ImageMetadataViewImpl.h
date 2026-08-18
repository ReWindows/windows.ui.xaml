#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class ImageMetadataViewImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadProgress@ImageMetadataViewImpl@@UEBAMXZ
    virtual float GetDownloadProgress() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHR@ImageMetadataViewImpl@@UEBAJXZ
    virtual long GetHR() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageMetadata@ImageMetadataViewImpl@@UEBAPEBUImageMetadata@@XZ
    virtual ImageMetadata const * GetImageMetadata() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDownloadProgress@ImageMetadataViewImpl@@QEAAXM@Z
    void SetDownloadProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowRenderTarget@ImageMetadataViewImpl@@UEAAXPEAVCWindowRenderTarget@@@Z
    virtual void SetWindowRenderTarget(CWindowRenderTarget *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageMetadataViewImpl@@QEAA@XZ
    ~ImageMetadataViewImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseImageMetadata@ImageMetadataViewImpl@@AEBAXXZ
    void ParseImageMetadata() const;
};
