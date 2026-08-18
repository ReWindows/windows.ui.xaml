#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace ctl {
class TearoffSupportErrorInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TearoffSupportErrorInfo@ctl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterfaceSupportsErrorInfo@TearoffSupportErrorInfo@ctl@@UEAAJAEBU_GUID@@@Z
    virtual long InterfaceSupportsErrorInfo(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TearoffSupportErrorInfo@ctl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TearoffSupportErrorInfo@ctl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TearoffSupportErrorInfo@ctl@@QEAA@XZ
    ~TearoffSupportErrorInfo();
};
} // namespace ctl
