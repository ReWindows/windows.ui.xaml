#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class RawData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@RawData@@QEAAX_K@Z
    void Allocate(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@RawData@@UEBAPEBEXZ
    virtual unsigned char const * GetData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@RawData@@UEBA_KXZ
    virtual uint64_t GetSize() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RawData@@QEAA@$$QEAV0@@Z
    RawData(RawData &&);
};
