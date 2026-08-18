#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class EllipseGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@EllipseGeometry@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Center@EllipseGeometry@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Center(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RadiusX@EllipseGeometry@DirectUI@@UEAAJPEAN@Z
    virtual long get_RadiusX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RadiusY@EllipseGeometry@DirectUI@@UEAAJPEAN@Z
    virtual long get_RadiusY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Center@EllipseGeometry@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Center(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RadiusX@EllipseGeometry@DirectUI@@UEAAJN@Z
    virtual long put_RadiusX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RadiusY@EllipseGeometry@DirectUI@@UEAAJN@Z
    virtual long put_RadiusY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EllipseGeometry@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@EllipseGeometry@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@EllipseGeometry@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EllipseGeometry@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
