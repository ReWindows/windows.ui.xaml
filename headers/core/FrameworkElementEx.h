#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class FrameworkElementEx {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FrameworkElementEx@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualHeight@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_ActualHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualWidth@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_ActualWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@FrameworkElementEx@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_Height(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalAlignment@FrameworkElementEx@DirectUI@@UEAAJPEAW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Margin@FrameworkElementEx@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Margin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxHeight@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxWidth@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHeight@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinWidth@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalAlignment@FrameworkElementEx@DirectUI@@UEAAJPEAW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long get_VerticalAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@FrameworkElementEx@DirectUI@@UEAAJPEAN@Z
    virtual long get_Width(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@FrameworkElementEx@DirectUI@@UEAAJN@Z
    virtual long put_Height(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalAlignment@FrameworkElementEx@DirectUI@@UEAAJW4HorizontalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Margin@FrameworkElementEx@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Margin(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxHeight@FrameworkElementEx@DirectUI@@UEAAJN@Z
    virtual long put_MaxHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxWidth@FrameworkElementEx@DirectUI@@UEAAJN@Z
    virtual long put_MaxWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinHeight@FrameworkElementEx@DirectUI@@UEAAJN@Z
    virtual long put_MinHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinWidth@FrameworkElementEx@DirectUI@@UEAAJN@Z
    virtual long put_MinWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalAlignment@FrameworkElementEx@DirectUI@@UEAAJW4VerticalAlignment@Xaml@UI@Windows@@@Z
    virtual long put_VerticalAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@FrameworkElementEx@DirectUI@@UEAAJN@Z
    virtual long put_Width(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FrameworkElementEx@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FrameworkElementEx@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FrameworkElementEx@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FrameworkElementEx@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
