#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class ObjectWriterStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStack@ObjectWriterStack@@QEBA?AV1@XZ
    ObjectWriterStack CopyStack() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectWriterStack@@QEAA@$$QEAV0@@Z
    ObjectWriterStack(ObjectWriterStack &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopScope@ObjectWriterStack@@QEAAXXZ
    void PopScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushScope@ObjectWriterStack@@QEAAXXZ
    void PushScope();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriterStack@@QEAA@XZ
    ~ObjectWriterStack();
};
