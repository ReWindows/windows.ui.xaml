#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class EasingFunctionBaseGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ease@EasingFunctionBaseGenerated@DirectUI@@UEAAJNPEAN@Z
    virtual long Ease(double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EasingMode@EasingFunctionBaseGenerated@DirectUI@@UEAAJPEAW4EasingMode@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_EasingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EasingMode@EasingFunctionBaseGenerated@DirectUI@@UEAAJW4EasingMode@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_EasingMode(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EasingFunctionBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EasingFunctionBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
