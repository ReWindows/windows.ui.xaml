#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ObjectWriterRuntimeEncoder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndConditionalScopeImpl@ObjectWriterRuntimeEncoder@@UEAAJAEBVXamlLineInfo@@@Z
    virtual long EndConditionalScopeImpl(XamlLineInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamOffsetTokenImpl@ObjectWriterRuntimeEncoder@@UEAAJPEAI@Z
    virtual long GetStreamOffsetTokenImpl(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ObjectWriterRuntimeEncoder@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopScopeImpl@ObjectWriterRuntimeEncoder@@UEAAJAEBVXamlLineInfo@@@Z
    virtual long PopScopeImpl(XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushScopeImpl@ObjectWriterRuntimeEncoder@@UEAAJAEBVXamlLineInfo@@@Z
    virtual long PushScopeImpl(XamlLineInfo const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriterRuntimeEncoder@@QEAA@XZ
    ~ObjectWriterRuntimeEncoder();
};
