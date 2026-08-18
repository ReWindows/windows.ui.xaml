#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ObjectWriterNodeList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNode@ObjectWriterNodeList@@QEAAJ$$QEAVObjectWriterNode@@@Z
    long AddNode(ObjectWriterNode &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Optimize@ObjectWriterNodeList@@QEAAJXZ
    long Optimize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopNode@ObjectWriterNodeList@@QEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode PopNode();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriterNodeList@@QEAA@XZ
    ~ObjectWriterNodeList();
};
