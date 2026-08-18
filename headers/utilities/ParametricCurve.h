#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ParametricCurve {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ParametricCurve@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentProperty@ParametricCurve@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long SetPrimaryContentProperty(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryContentProperty@ParametricCurve@DirectUI@@QEAAJW4DirectManipulationProperty@2@PEAUHSTRING__@@@Z
    long SetSecondaryContentProperty(int, HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ParametricCurve@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
