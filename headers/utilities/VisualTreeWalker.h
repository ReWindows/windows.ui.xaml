#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace CompositionVisualDiagnostics {
class VisualTreeWalker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisual@VisualTreeWalker@CompositionVisualDiagnostics@@UEAAJPEAUIVisual@Composition@UI@Windows@@0IPEAUHSTRING__@@@Z
    virtual long OnVisual(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *, unsigned int, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualTreeWalker@CompositionVisualDiagnostics@@QEAA@XZ
    VisualTreeWalker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualTreeWalker@CompositionVisualDiagnostics@@UEAA@XZ
    virtual ~VisualTreeWalker();
};
} // namespace CompositionVisualDiagnostics
