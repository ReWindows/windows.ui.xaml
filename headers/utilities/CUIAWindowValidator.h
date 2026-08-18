#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CUIAWindowValidator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAWindowValidator@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CUIAWindowValidator@@UEAAXXZ
    virtual void Invalidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CUIAWindowValidator@@UEAAHXZ
    virtual int IsValid();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAWindowValidator@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAWindowValidator@@QEAA@XZ
    ~CUIAWindowValidator();
};
