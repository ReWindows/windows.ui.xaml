#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class PanelEx {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PanelEx@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualHeight@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_ActualHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualWidth@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_ActualWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@PanelEx@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_Height(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalAlignment@PanelEx@DirectUI@@UEAAJPEAW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Margin@PanelEx@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Margin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxHeight@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxWidth@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHeight@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinWidth@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalAlignment@PanelEx@DirectUI@@UEAAJPEAW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_VerticalAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@PanelEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_Width(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@PanelEx@DirectUI@@UEAAJN@Z
    virtual long put_Height(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalAlignment@PanelEx@DirectUI@@UEAAJW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Margin@PanelEx@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Margin(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxHeight@PanelEx@DirectUI@@UEAAJN@Z
    virtual long put_MaxHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxWidth@PanelEx@DirectUI@@UEAAJN@Z
    virtual long put_MaxWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinHeight@PanelEx@DirectUI@@UEAAJN@Z
    virtual long put_MinHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinWidth@PanelEx@DirectUI@@UEAAJN@Z
    virtual long put_MinWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalAlignment@PanelEx@DirectUI@@UEAAJW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_VerticalAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@PanelEx@DirectUI@@UEAAJN@Z
    virtual long put_Width(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PanelEx@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PanelEx@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PanelEx@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PanelEx@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
