#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class DragCompletedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Canceled@DragCompletedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Canceled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalChange@DragCompletedEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalChange@DragCompletedEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Canceled@DragCompletedEventArgsGenerated@DirectUI@@QEAAJE@Z
    long put_Canceled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalChange@DragCompletedEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_HorizontalChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalChange@DragCompletedEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_VerticalChange(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragCompletedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragCompletedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragCompletedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragCompletedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
