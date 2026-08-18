#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CustomWriterRuntimeData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShare@CustomWriterRuntimeData@@UEBA_NXZ
    virtual bool ShouldShare() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomWriterRuntimeData@@UEAA@XZ
    virtual ~CustomWriterRuntimeData();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTokenForIgnoredConditionalObject@CustomWriterRuntimeData@@IEBA_NVStreamOffsetToken@@@Z
    bool IsTokenForIgnoredConditionalObject(StreamOffsetToken) const;
};
