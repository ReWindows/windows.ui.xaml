#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class RowDefinition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RowDefinition@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualHeight@RowDefinition@DirectUI@@UEAAJPEAN@Z
    virtual long get_ActualHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@RowDefinition@DirectUI@@UEAAJPEAUGridLength@Xaml@UI@Windows@@@Z
    virtual long get_Height(::Windows::UI::Xaml::GridLength *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxHeight@RowDefinition@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHeight@RowDefinition@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@RowDefinition@DirectUI@@UEAAJUGridLength@Xaml@UI@Windows@@@Z
    virtual long put_Height(::Windows::UI::Xaml::GridLength);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxHeight@RowDefinition@DirectUI@@UEAAJN@Z
    virtual long put_MaxHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinHeight@RowDefinition@DirectUI@@UEAAJN@Z
    virtual long put_MinHeight(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RowDefinition@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RowDefinition@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RowDefinition@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RowDefinition@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
