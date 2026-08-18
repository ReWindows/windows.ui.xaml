#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class IconElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Foreground@IconElement@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Foreground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Foreground@IconElement@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Foreground(::Windows::UI::Xaml::Media::IBrush *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@IconElement@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@IconElement@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
