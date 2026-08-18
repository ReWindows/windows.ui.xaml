#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
namespace DirectUI {
class RenderTargetBitmapGetPixelsAsyncOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreContinueAsyncAction@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAIXZ
    virtual unsigned int CoreContinueAsyncAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreFireCompletion@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAXXZ
    virtual void CoreFireCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreReleaseRef@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAXXZ
    virtual void CoreReleaseRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreSetError@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAXJ@Z
    virtual void CoreSetError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreSetResults@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJURenderTargetBitmapPixelData@@@Z
    virtual long CoreSetResults(RenderTargetBitmapPixelData);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RenderTargetBitmapGetPixelsAsyncOperation@DirectUI@@UEAA@XZ
    virtual ~RenderTargetBitmapGetPixelsAsyncOperation();
};
} // namespace DirectUI
