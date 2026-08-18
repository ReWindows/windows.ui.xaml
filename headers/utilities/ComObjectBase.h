#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace ctl {
class ComObjectBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceBase@ComObjectBase@ctl@@SAJPEAVComBase@2@I@Z
    static long CreateInstanceBase(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingQueryInterfaceBase@ComObjectBase@ctl@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long NonDelegatingQueryInterfaceBase(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceBase@ComObjectBase@ctl@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long QueryInterfaceBase(_GUID const &, void * *);
};
} // namespace ctl
