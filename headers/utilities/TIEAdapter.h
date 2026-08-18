#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class TIEAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurationBuilder@TIEAdapter@@QEBAJ_N000W4ManipulationModes@DirectUI@@@Z
    long ConfigurationBuilder(bool, bool, bool, bool, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@TIEAdapter@@QEAAXQEAVElementGestureTracker@@@Z
    void EnsureInitialized(ElementGestureTracker * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TIEAdapter@@QEAAXQEAVElementGestureTracker@@@Z
    void Reset(ElementGestureTracker * const);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TIEAdapter@@QEAA@QEAVElementGestureTracker@@@Z
    TIEAdapter(ElementGestureTracker * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TIEAdapter@@QEAA@XZ
    ~TIEAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionEngineCallback@TIEAdapter@@AEAAJQEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    long InteractionEngineCallback(INTERACTION_CONTEXT_OUTPUT const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameters@TIEAdapter@@AEBAXAEAUInertiaParameters@GestureOutputMapper@@@Z
    void SetInertiaParameters(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticInteractionEngineCallback@TIEAdapter@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    static void StaticInteractionEngineCallback(void *, INTERACTION_CONTEXT_OUTPUT const *);
};
