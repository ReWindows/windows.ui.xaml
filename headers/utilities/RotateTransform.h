#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class RotateTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RotateTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Angle@RotateTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_Angle(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterX@RotateTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterY@RotateTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Angle@RotateTransform@DirectUI@@UEAAJN@Z
    virtual long put_Angle(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterX@RotateTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterY@RotateTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RotateTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RotateTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RotateTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RotateTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
