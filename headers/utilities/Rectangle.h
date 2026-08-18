#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class Rectangle {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Rectangle@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RadiusX@Rectangle@DirectUI@@UEAAJPEAN@Z
    virtual long get_RadiusX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RadiusY@Rectangle@DirectUI@@UEAAJPEAN@Z
    virtual long get_RadiusY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RadiusX@Rectangle@DirectUI@@UEAAJN@Z
    virtual long put_RadiusX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RadiusY@Rectangle@DirectUI@@UEAAJN@Z
    virtual long put_RadiusY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Rectangle@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Rectangle@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Rectangle@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Rectangle@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
