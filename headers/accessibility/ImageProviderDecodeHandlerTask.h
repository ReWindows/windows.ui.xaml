#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class ImageProviderDecodeHandlerTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImageProviderDecodeHandlerTask@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@ImageProviderDecodeHandlerTask@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@ImageProviderDecodeHandlerTask@@UEBA_KXZ
    virtual uint64_t GetRequestId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDecode@ImageProviderDecodeHandlerTask@@UEAAJV?$xref_ptr@UIImageAvailableResponse@@@@_K@Z
    virtual long OnDecode(WindissectOpaque, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImageProviderDecodeHandlerTask@@UEAAIXZ
    virtual unsigned int Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageProviderDecodeHandlerTask@@EEAA@XZ
    virtual ~ImageProviderDecodeHandlerTask();
};
