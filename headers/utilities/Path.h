#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class Path {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Path@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@Path@DirectUI@@UEAAJPEAPEAUIGeometry@Media@Xaml@UI@Windows@@@Z
    virtual long get_Data(::Windows::UI::Xaml::Media::IGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Data@Path@DirectUI@@UEAAJPEAUIGeometry@Media@Xaml@UI@Windows@@@Z
    virtual long put_Data(::Windows::UI::Xaml::Media::IGeometry *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Path@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Path@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Path@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Path@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
