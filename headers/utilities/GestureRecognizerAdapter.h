#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class GestureRecognizerAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurationBuilder@GestureRecognizerAdapter@@QEBAX_N000W4ManipulationModes@DirectUI@@@Z
    void ConfigurationBuilder(bool, bool, bool, bool, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@GestureRecognizerAdapter@@QEAAXQEAVElementGestureTracker@@@Z
    void EnsureInitialized(ElementGestureTracker * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@GestureRecognizerAdapter@@QEAAXQEAVElementGestureTracker@@@Z
    void Reset(ElementGestureTracker * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GestureRecognizerAdapter@@QEAA@XZ
    ~GestureRecognizerAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@GestureRecognizerAdapter@@AEAAXQEAVElementGestureTracker@@@Z
    void Init(ElementGestureTracker * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUIHoldingEventArgs@456@@Z
    void OnHolding(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IHoldingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUIManipulationCompletedEventArgs@456@@Z
    void OnManipulationCompleted(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationInertiaStarting@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUIManipulationInertiaStartingEventArgs@456@@Z
    void OnManipulationInertiaStarting(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationInertiaStartingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUIManipulationStartedEventArgs@456@@Z
    void OnManipulationStarted(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationUpdated@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUIManipulationUpdatedEventArgs@456@@Z
    void OnManipulationUpdated(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationUpdatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUIRightTappedEventArgs@456@@Z
    void OnRightTapped(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IRightTappedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@GestureRecognizerAdapter@@AEAAXPEAVElementGestureTracker@@PEAUIGestureRecognizer@Input@UI@Windows@@PEAUITappedEventArgs@456@@Z
    void OnTapped(ElementGestureTracker *, ::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::ITappedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameters@GestureRecognizerAdapter@@AEBAXAEAUInertiaParameters@GestureOutputMapper@@@Z
    void SetInertiaParameters(WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotRadius@GestureRecognizerAdapter@@AEBAX_NM@Z
    void SetPivotRadius(bool, float) const;
};
