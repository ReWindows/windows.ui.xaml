#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class InternalTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBoundsCore@InternalTransform@DirectUI@@UEAAJURect@Foundation@Windows@@PEAU345@@Z
    virtual long TransformBoundsCore(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTransformCore@InternalTransform@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAU345@PEAE@Z
    virtual long TryTransformCore(WindissectOpaque, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InverseCore@InternalTransform@DirectUI@@UEAAJPEAPEAUIGeneralTransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_InverseCore(::Windows::UI::Xaml::Media::IGeneralTransform * *);
};
} // namespace DirectUI
