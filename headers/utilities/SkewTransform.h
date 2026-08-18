#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class SkewTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SkewTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AngleX@SkewTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_AngleX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AngleY@SkewTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_AngleY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterX@SkewTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterY@SkewTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AngleX@SkewTransform@DirectUI@@UEAAJN@Z
    virtual long put_AngleX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AngleY@SkewTransform@DirectUI@@UEAAJN@Z
    virtual long put_AngleY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterX@SkewTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterY@SkewTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SkewTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SkewTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SkewTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SkewTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
