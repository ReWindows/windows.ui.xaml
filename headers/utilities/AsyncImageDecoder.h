#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class AsyncImageDecoder {
public:
    class SharedState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResources@AsyncImageDecoder@@QEAAXXZ
    void CleanupDeviceRelatedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeAnimation@AsyncImageDecoder@@QEAAJXZ
    long ResumeAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDecodeParams@AsyncImageDecoder@@QEAAJV?$xref_ptr@VImageDecodeParams@@@@_K@Z
    long SetDecodeParams(WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@AsyncImageDecoder@@QEAAJXZ
    long StopAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncImageDecoder@@QEAA@XZ
    ~AsyncImageDecoder();
};
