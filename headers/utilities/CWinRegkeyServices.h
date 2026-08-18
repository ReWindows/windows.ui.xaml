#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CWinRegkeyServices {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundTaskSettings@CWinRegkeyServices@@UEBAJPEAI00@Z
    virtual long GetBackgroundTaskSettings(unsigned int *, unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableDecodeToRenderSize@CWinRegkeyServices@@UEBAJPEAI0@Z
    virtual long GetEnableDecodeToRenderSize(unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableFramerateCounter@CWinRegkeyServices@@UEBAJPEAI@Z
    virtual long GetEnableFramerateCounter(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableOverdrawHeatMap@CWinRegkeyServices@@UEBAJPEAI@Z
    virtual long GetEnableOverdrawHeatMap(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableRedrawRegions@CWinRegkeyServices@@UEBAJPEAI@Z
    virtual long GetEnableRedrawRegions(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPasswordRevealDisabled@CWinRegkeyServices@@UEBAJPEAI@Z
    virtual long GetPasswordRevealDisabled(unsigned int *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBoolRegkeyValue@CWinRegkeyServices@@AEBAJPEAUHKEY__@@PEBG1PEAI2@Z
    long ReadBoolRegkeyValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned int *, unsigned int *) const;
};
