#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class RenderTargetBitmapWaitExecutor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RenderTargetBitmapWaitExecutor@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@RenderTargetBitmapWaitExecutor@@UEAAJXZ
    virtual long Execute();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RenderTargetBitmapWaitExecutor@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitAndExecuteOnUIThread@RenderTargetBitmapWaitExecutor@@UEAAJXZ
    virtual long WaitAndExecuteOnUIThread();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RenderTargetBitmapWaitExecutor@@MEAA@XZ
    virtual ~RenderTargetBitmapWaitExecutor();
};
