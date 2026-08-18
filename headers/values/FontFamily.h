#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class FontFamily {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FontFamily@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@FontFamily@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Source(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@FontFamily@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long put_Source(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FontFamily@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FontFamily@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FontFamily@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FontFamily@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
