#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class DeferredElementCustomWriterActivator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldActivateCustomWriter@DeferredElementCustomWriterActivator@@UEAAJAEBVCustomWriterActivatorState@@PEA_N@Z
    virtual long ShouldActivateCustomWriter(CustomWriterActivatorState const &, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredElementCustomWriterActivator@@UEAA@XZ
    virtual ~DeferredElementCustomWriterActivator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndGetDeferLoadStrategyValue@DeferredElementCustomWriterActivator@@AEAAJAEBVxstring_ptr@@PEA_N@Z
    long ValidateAndGetDeferLoadStrategyValue(xstring_ptr const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndGetRealizeValue@DeferredElementCustomWriterActivator@@AEAAJAEBVxstring_ptr@@PEA_N@Z
    long ValidateAndGetRealizeValue(xstring_ptr const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNotRootElement@DeferredElementCustomWriterActivator@@AEAAJXZ
    long ValidateNotRootElement();
};
