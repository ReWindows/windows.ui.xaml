#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class TileBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TileBrush@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileBrush@DirectUI@@QEAA@XZ
    TileBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlignmentX@TileBrush@DirectUI@@UEAAJPEAW4AlignmentX@Media@Xaml@UI@Windows@@@Z
    virtual long get_AlignmentX(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlignmentY@TileBrush@DirectUI@@UEAAJPEAW4AlignmentY@Media@Xaml@UI@Windows@@@Z
    virtual long get_AlignmentY(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@TileBrush@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AlignmentX@TileBrush@DirectUI@@UEAAJW4AlignmentX@Media@Xaml@UI@Windows@@@Z
    virtual long put_AlignmentX(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AlignmentY@TileBrush@DirectUI@@UEAAJW4AlignmentY@Media@Xaml@UI@Windows@@@Z
    virtual long put_AlignmentY(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@TileBrush@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TileBrush@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TileBrush@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TileBrush@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TileBrush@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
