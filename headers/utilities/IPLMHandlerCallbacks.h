#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace XAML::PLM {
class IPLMHandlerCallbacks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterAppEnteredBackground@IPLMHandlerCallbacks@PLM@XAML@@UEAAJXZ
    virtual long OnAfterAppEnteredBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterAppLeavingBackground@IPLMHandlerCallbacks@PLM@XAML@@UEAAJXZ
    virtual long OnAfterAppLeavingBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterAppResume@IPLMHandlerCallbacks@PLM@XAML@@UEAAJXZ
    virtual long OnAfterAppResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeAppEnteredBackground@IPLMHandlerCallbacks@PLM@XAML@@UEAAJXZ
    virtual long OnBeforeAppEnteredBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeAppLeavingBackground@IPLMHandlerCallbacks@PLM@XAML@@UEAAJXZ
    virtual long OnBeforeAppLeavingBackground();
};
} // namespace XAML::PLM
