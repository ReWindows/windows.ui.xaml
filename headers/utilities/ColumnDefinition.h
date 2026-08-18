#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ColumnDefinition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ColumnDefinition@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualWidth@ColumnDefinition@DirectUI@@UEAAJPEAN@Z
    virtual long get_ActualWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxWidth@ColumnDefinition@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinWidth@ColumnDefinition@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@ColumnDefinition@DirectUI@@UEAAJPEAUGridLength@Xaml@UI@Windows@@@Z
    virtual long get_Width(::Windows::UI::Xaml::GridLength *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxWidth@ColumnDefinition@DirectUI@@UEAAJN@Z
    virtual long put_MaxWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinWidth@ColumnDefinition@DirectUI@@UEAAJN@Z
    virtual long put_MinWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@ColumnDefinition@DirectUI@@UEAAJUGridLength@Xaml@UI@Windows@@@Z
    virtual long put_Width(::Windows::UI::Xaml::GridLength);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ColumnDefinition@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ColumnDefinition@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ColumnDefinition@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ColumnDefinition@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
