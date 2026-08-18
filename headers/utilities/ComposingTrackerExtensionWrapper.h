#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class ComposingTrackerExtensionWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualRefCount@ComposingTrackerExtensionWrapper@DirectUI@@SAKPEAVWeakReferenceSourceNoThreadId@ctl@@@Z
    static unsigned long GetActualRefCount(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComposed@ComposingTrackerExtensionWrapper@DirectUI@@SA_NPEAVWeakReferenceSourceNoThreadId@ctl@@@Z
    static bool IsComposed(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtensionInterfaces@ComposingTrackerExtensionWrapper@DirectUI@@SAJPEAVWeakReferenceSourceNoThreadId@ctl@@PEAUIReferenceTrackerExtension@@PEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@@Z
    static long SetExtensionInterfaces(WindissectOpaque *, IReferenceTrackerExtension *, ::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *);
};
} // namespace DirectUI
