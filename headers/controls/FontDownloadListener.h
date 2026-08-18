#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace CCoreServices {
class FontDownloadListener {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@FontDownloadListener@CCoreServices@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadCompleted@FontDownloadListener@CCoreServices@@UEAAXPEAUIDWriteFontDownloadQueue@@PEAUIUnknown@@J@Z
    virtual void DownloadCompleted(IDWriteFontDownloadQueue *, IUnknown *, long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FontDownloadListener@CCoreServices@@QEAA@PEAV1@@Z
    FontDownloadListener(CCoreServices *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FontDownloadListener@CCoreServices@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FontDownloadListener@CCoreServices@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CCoreServices
