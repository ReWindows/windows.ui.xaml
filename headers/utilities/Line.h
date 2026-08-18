#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class Line {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Line@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_X1@Line@DirectUI@@UEAAJPEAN@Z
    virtual long get_X1(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_X2@Line@DirectUI@@UEAAJPEAN@Z
    virtual long get_X2(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Y1@Line@DirectUI@@UEAAJPEAN@Z
    virtual long get_Y1(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Y2@Line@DirectUI@@UEAAJPEAN@Z
    virtual long get_Y2(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_X1@Line@DirectUI@@UEAAJN@Z
    virtual long put_X1(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_X2@Line@DirectUI@@UEAAJN@Z
    virtual long put_X2(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Y1@Line@DirectUI@@UEAAJN@Z
    virtual long put_Y1(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Y2@Line@DirectUI@@UEAAJN@Z
    virtual long put_Y2(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Line@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Line@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Line@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Line@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
