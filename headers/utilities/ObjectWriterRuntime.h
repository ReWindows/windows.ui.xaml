#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ObjectWriterRuntime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndConditionalScopeImpl@ObjectWriterRuntime@@UEAAJAEBVXamlLineInfo@@@Z
    virtual long EndConditionalScopeImpl(XamlLineInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamOffsetTokenImpl@ObjectWriterRuntime@@UEAAJPEAI@Z
    virtual long GetStreamOffsetTokenImpl(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopScopeImpl@ObjectWriterRuntime@@UEAAJAEBVXamlLineInfo@@@Z
    virtual long PopScopeImpl(XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushScopeImpl@ObjectWriterRuntime@@UEAAJAEBVXamlLineInfo@@@Z
    virtual long PushScopeImpl(XamlLineInfo const &);
};
