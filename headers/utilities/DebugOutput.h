#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class DebugOutput {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoggingForBindingEnabled@DebugOutput@DirectUI@@SAJPEAI@Z
    static long IsLoggingForBindingEnabled(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBindingErrorMessage@DebugOutput@DirectUI@@SAXPEAGZZ
    static void LogBindingErrorMessage(unsigned short *, ...);
};
} // namespace DirectUI
