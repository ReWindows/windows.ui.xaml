#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class RelativePanel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RelativePanel@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderBrush@RelativePanel@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_BorderBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderThickness@RelativePanel@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_BorderThickness(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CornerRadius@RelativePanel@DirectUI@@UEAAJPEAUCornerRadius@Xaml@UI@Windows@@@Z
    virtual long get_CornerRadius(::Windows::UI::Xaml::CornerRadius *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Padding@RelativePanel@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Padding(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BorderBrush@RelativePanel@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_BorderBrush(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BorderThickness@RelativePanel@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_BorderThickness(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CornerRadius@RelativePanel@DirectUI@@UEAAJUCornerRadius@Xaml@UI@Windows@@@Z
    virtual long put_CornerRadius(::Windows::UI::Xaml::CornerRadius);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Padding@RelativePanel@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Padding(::Windows::UI::Xaml::Thickness);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RelativePanel@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RelativePanel@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RelativePanel@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RelativePanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
