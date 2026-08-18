#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class CompositeTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CompositeTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterX@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterY@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Rotation@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_Rotation(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleX@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_ScaleX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleY@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_ScaleY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SkewX@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_SkewX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SkewY@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_SkewY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslateX@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_TranslateX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslateY@CompositeTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_TranslateY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterX@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterY@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_CenterY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Rotation@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_Rotation(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleX@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_ScaleX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleY@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_ScaleY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SkewX@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_SkewX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SkewY@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_SkewY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslateX@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_TranslateX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslateY@CompositeTransform@DirectUI@@UEAAJN@Z
    virtual long put_TranslateY(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CompositeTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CompositeTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CompositeTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CompositeTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
