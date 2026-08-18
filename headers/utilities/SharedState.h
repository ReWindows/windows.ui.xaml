#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace AsyncImageDecoder {
class SharedState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPresent@SharedState@AsyncImageDecoder@@QEAAXXZ
    void CancelPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedMoreFrames@SharedState@AsyncImageDecoder@@QEBA_NXZ
    bool NeedMoreFrames() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedState@AsyncImageDecoder@@QEAA@XZ
    ~SharedState();
};
} // namespace AsyncImageDecoder
