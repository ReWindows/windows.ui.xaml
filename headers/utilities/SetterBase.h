#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class SetterBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSealed@SetterBase@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSealed(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SetterBase@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
};
} // namespace DirectUI
