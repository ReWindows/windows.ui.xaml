#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace RichTextServices {
class LineServicesEmbeddedObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LineServicesEmbeddedObject@RichTextServices@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@LineServicesEmbeddedObject@RichTextServices@@UEAAJPEBUdispin@Ptls6@@@Z
    virtual long Display(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakAfter@LineServicesEmbeddedObject@RichTextServices@@UEAAJPEAW4BRKCOND@Ptls6@@@Z
    virtual long ProposeBreakAfter(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProposeBreakBefore@LineServicesEmbeddedObject@RichTextServices@@UEAAJPEAW4BRKCOND@Ptls6@@@Z
    virtual long ProposeBreakBefore(int *);
};
} // namespace RichTextServices
