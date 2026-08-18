#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace ctl::Details {
class WeakReferenceImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@WeakReferenceImpl@Details@ctl@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long Resolve(_GUID const &, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WeakReferenceImpl@Details@ctl@@QEAA@PEAVComBase@2@@Z
    WeakReferenceImpl(WindissectOpaque *);
};
} // namespace ctl::Details
