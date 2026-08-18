#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class IsEnabledChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewValue@IsEnabledChangedEventArgs@DirectUI@@QEAAJPEAE@Z
    long get_NewValue(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldValue@IsEnabledChangedEventArgs@DirectUI@@QEAAJPEAE@Z
    long get_OldValue(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@IsEnabledChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
