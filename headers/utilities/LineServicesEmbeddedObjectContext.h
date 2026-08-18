#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace RichTextServices {
class LineServicesEmbeddedObjectContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLNObj@LineServicesEmbeddedObjectContext@RichTextServices@@UEAAJPEAUlsparaclient@Ptls6@@PEBUlsdevinfo@4@AEAH222PEAPEAVCLsObjectLineContext@4@@Z
    virtual long CreateLNObj(WindissectOpaque *, WindissectOpaque const *, int &, int &, int &, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LineServicesEmbeddedObjectContext@RichTextServices@@UEAAXXZ
    virtual void Destroy();
};
} // namespace RichTextServices
