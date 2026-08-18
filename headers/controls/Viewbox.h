#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class Viewbox {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Viewbox@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Child@Viewbox@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Child(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@Viewbox@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StretchDirection@Viewbox@DirectUI@@UEAAJPEAW4StretchDirection@Controls@Xaml@UI@Windows@@@Z
    virtual long get_StretchDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Child@Viewbox@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_Child(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@Viewbox@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StretchDirection@Viewbox@DirectUI@@UEAAJW4StretchDirection@Controls@Xaml@UI@Windows@@@Z
    virtual long put_StretchDirection(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Viewbox@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Viewbox@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Viewbox@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Viewbox@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
