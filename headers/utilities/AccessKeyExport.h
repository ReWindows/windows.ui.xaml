#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace AccessKeys {
class AccessKeyExport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElementToAKMode@AccessKeyExport@AccessKeys@@QEBAJQEAVCDependencyObject@@@Z
    long AddElementToAKMode(CDependencyObject * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitAccessKeyMode@AccessKeyExport@AccessKeys@@QEBAJXZ
    long ExitAccessKeyMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@AccessKeyExport@AccessKeys@@QEBAJQEAVCDependencyObject@@AEBW4Visibility@DirectUI@@@Z
    long OnVisibilityChanged(CDependencyObject * const, int const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerInput@AccessKeyExport@AccessKeys@@QEBAJQEBUInputMessage@@@Z
    long ProcessPointerInput(InputMessage const * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScope@AccessKeyExport@AccessKeys@@QEBAJXZ
    long UpdateScope() const;
};
} // namespace AccessKeys
