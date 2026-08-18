#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class FinalUnhandledErrorDetectedRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefRegistration@FinalUnhandledErrorDetectedRegistration@DirectUI@@QEAAJXZ
    long AddRefRegistration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRegistered@FinalUnhandledErrorDetectedRegistration@DirectUI@@QEAAIXZ
    unsigned int IsRegistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRegistration@FinalUnhandledErrorDetectedRegistration@DirectUI@@QEAAJXZ
    long ReleaseRegistration();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUnhandledErrorDetected@FinalUnhandledErrorDetectedRegistration@DirectUI@@CAJPEAUIInspectable@@PEAUIUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Z
    static long OnFinalUnhandledErrorDetected(IInspectable *, ::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@FinalUnhandledErrorDetectedRegistration@DirectUI@@AEAAJXZ
    long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@FinalUnhandledErrorDetectedRegistration@DirectUI@@AEAAJXZ
    long Unregister();
};
} // namespace DirectUI
