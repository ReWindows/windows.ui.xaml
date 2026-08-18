#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class StandardUICommand {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@StandardUICommand@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@StandardUICommand@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@StandardUICommand@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateForKind@StandardUICommand@DirectUI@@AEAAJW4StandardUICommandKind@Input@Xaml@UI@Windows@@@Z
    long PopulateForKind(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateWithProperties@StandardUICommand@DirectUI@@AEAAJHW4Symbol@Controls@Xaml@UI@Windows@@HW4VirtualKeyModifiers@System@7@H@Z
    long PopulateWithProperties(int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDescriptionIfUnset@StandardUICommand@DirectUI@@AEAAJH@Z
    long SetDescriptionIfUnset(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconSourceIfUnset@StandardUICommand@DirectUI@@AEAAJW4Symbol@Controls@Xaml@UI@Windows@@@Z
    long SetIconSourceIfUnset(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardAcceleratorIfUnset@StandardUICommand@DirectUI@@AEAAJW4VirtualKey@System@Windows@@W4VirtualKeyModifiers@45@@Z
    long SetKeyboardAcceleratorIfUnset(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabelIfUnset@StandardUICommand@DirectUI@@AEAAJH@Z
    long SetLabelIfUnset(int);
};
} // namespace DirectUI
