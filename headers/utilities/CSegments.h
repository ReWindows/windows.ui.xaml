#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace CDasher {
class CSegments {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CSegments@CDasher@@QEAAJAEBUXPOINTF@@PEBU3@@Z
    long Add(XPOINTF const &, XPOINTF const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSegments@CDasher@@QEAA@PEBVCMILMatrix@@@Z
    CSegments(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWith@CSegments@CDasher@@QEAAJAEBUXPOINTF@@0@Z
    long StartWith(XPOINTF const &, XPOINTF const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSegment@CSegments@CDasher@@IEAAJAEBVCSegData@2@@Z
    long AddSegment(WindissectOpaque const &);
};
} // namespace CDasher
