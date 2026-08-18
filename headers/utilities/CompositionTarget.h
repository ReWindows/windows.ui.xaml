#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class CompositionTarget {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionTarget@DirectUI@@QEAA@XZ
    CompositionTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CompositionTarget@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendRendering@CompositionTarget@DirectUI@@UEAAJE@Z
    virtual long SuspendRendering(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Rendered@CompositionTarget@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVRenderedEventArgs@Media@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Rendered(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Rendering@CompositionTarget@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Rendering(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SurfaceContentsLost@CompositionTarget@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SurfaceContentsLost(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Rendered@CompositionTarget@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Rendered(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Rendering@CompositionTarget@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Rendering(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SurfaceContentsLost@CompositionTarget@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SurfaceContentsLost(EventRegistrationToken);
};
} // namespace DirectUI
