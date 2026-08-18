#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DragDeltaEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalChange@DragDeltaEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalChange@DragDeltaEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalChange@DragDeltaEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_HorizontalChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalChange@DragDeltaEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_VerticalChange(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragDeltaEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragDeltaEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragDeltaEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragDeltaEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
