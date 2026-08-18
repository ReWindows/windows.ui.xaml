#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TranslateTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TranslateTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_X@TranslateTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_X(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Y@TranslateTransform@DirectUI@@UEAAJPEAN@Z
    virtual long get_Y(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_X@TranslateTransform@DirectUI@@UEAAJN@Z
    virtual long put_X(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Y@TranslateTransform@DirectUI@@UEAAJN@Z
    virtual long put_Y(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TranslateTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TranslateTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TranslateTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TranslateTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
