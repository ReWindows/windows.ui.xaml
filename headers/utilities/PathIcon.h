#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PathIcon {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PathIcon@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@PathIcon@DirectUI@@UEAAJPEAPEAUIGeometry@Media@Xaml@UI@Windows@@@Z
    virtual long get_Data(::Windows::UI::Xaml::Media::IGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Data@PathIcon@DirectUI@@UEAAJPEAUIGeometry@Media@Xaml@UI@Windows@@@Z
    virtual long put_Data(::Windows::UI::Xaml::Media::IGeometry *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PathIcon@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PathIcon@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PathIcon@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PathIcon@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
