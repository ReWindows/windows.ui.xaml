#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class PerspectiveTransform3D {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PerspectiveTransform3D@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Depth@PerspectiveTransform3D@DirectUI@@UEAAJPEAN@Z
    virtual long get_Depth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OffsetX@PerspectiveTransform3D@DirectUI@@UEAAJPEAN@Z
    virtual long get_OffsetX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OffsetY@PerspectiveTransform3D@DirectUI@@UEAAJPEAN@Z
    virtual long get_OffsetY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Depth@PerspectiveTransform3D@DirectUI@@UEAAJN@Z
    virtual long put_Depth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OffsetX@PerspectiveTransform3D@DirectUI@@UEAAJN@Z
    virtual long put_OffsetX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OffsetY@PerspectiveTransform3D@DirectUI@@UEAAJN@Z
    virtual long put_OffsetY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PerspectiveTransform3D@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PerspectiveTransform3D@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PerspectiveTransform3D@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PerspectiveTransform3D@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
