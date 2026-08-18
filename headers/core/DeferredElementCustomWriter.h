#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class DeferredElementCustomWriter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomWriterFinished@DeferredElementCustomWriter@@UEBA_NXZ
    virtual bool IsCustomWriterFinished() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@DeferredElementCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndConditionalScope(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@DeferredElementCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndMember(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@DeferredElementCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndObject(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredElementCustomWriter@@UEAA@XZ
    virtual ~DeferredElementCustomWriter();
};
