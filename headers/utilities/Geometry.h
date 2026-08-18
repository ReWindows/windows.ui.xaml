#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class Geometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@Geometry@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Transform@Geometry@DirectUI@@UEAAJPEAPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_Transform(::Windows::UI::Xaml::Media::ITransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Transform@Geometry@DirectUI@@UEAAJPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long put_Transform(::Windows::UI::Xaml::Media::ITransform *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Geometry@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Geometry@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
