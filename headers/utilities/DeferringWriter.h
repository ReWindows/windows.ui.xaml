#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class DeferringWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@DeferringWriter@@UEAAJXZ
    virtual long WriteEndConditionalScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@DeferringWriter@@UEAAJXZ
    virtual long WriteEndMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@DeferringWriter@@UEAAJXZ
    virtual long WriteEndObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferringWriter@@UEAA@XZ
    virtual ~DeferringWriter();
};
