#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class BackgroundTaskFrameworkContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalInit@BackgroundTaskFrameworkContext@DirectUI@@SAJXZ
    static long GlobalInit();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackgroundTaskFrameworkContext@DirectUI@@MEAA@XZ
    virtual ~BackgroundTaskFrameworkContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkThread@BackgroundTaskFrameworkContext@DirectUI@@AEAAJXZ
    long CreateFrameworkThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFrameworkInitializedImpl@BackgroundTaskFrameworkContext@DirectUI@@AEAAJPEAVXamlRenderingBackgroundTask@2@@Z
    long EnsureFrameworkInitializedImpl(::DirectUI::XamlRenderingBackgroundTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFrameworkThread@BackgroundTaskFrameworkContext@DirectUI@@AEAAJXZ
    long InitializeFrameworkThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostQuitOnFrameworkThread@BackgroundTaskFrameworkContext@DirectUI@@AEAAJXZ
    long PostQuitOnFrameworkThread();
};
} // namespace DirectUI
