#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ScaleTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ScaleTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterX@ScaleTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterY@ScaleTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleX@ScaleTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_ScaleX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleY@ScaleTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_ScaleY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterX@ScaleTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterY@ScaleTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleX@ScaleTransform@DirectUI@@UEAAJN@Z
    virtual long put_ScaleX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleY@ScaleTransform@DirectUI@@UEAAJN@Z
    virtual long put_ScaleY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScaleTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScaleTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScaleTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScaleTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
