#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class Grid {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Grid@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Grid@DirectUI@@QEAA@XZ
    Grid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnDefinitions@Grid@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVColumnDefinition@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ColumnDefinitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowDefinitions@Grid@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVRowDefinition@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_RowDefinitions(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Grid@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Grid@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Grid@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Grid@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
